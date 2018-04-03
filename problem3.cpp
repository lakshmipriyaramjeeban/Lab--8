#include <iostream>
using namespace std;

class node
{
   public:
   int data;
   node *parent,*left,*right;
   node()
   {
      parent=NULL;
      left=NULL;
      right=NULL;
      data=0;
   }
};

class bsTree
{
   public:
   node* root=NULL;


void insert(node* v, int data)
{ 
   node* temp=new node;
   temp->data=data;
   if(root==NULL)
   {
     root=temp;
   }
   else{
   //while(true){
   	if(v->data>data)
   {
     if(v->left!=NULL)
     {
       insert(v->left,data);
       //break;
     }
     else
     {
        v->left=temp;
        temp->parent=v;
     }
     //break;
   }  
   else if(v->data<data)
   {
     if(v->right!=NULL)
     { 
       insert(v->right, data);
    //   break;
     }
     else
     {
       v->right=temp;
       temp->parent=v;
     } 
   }
 }
}
void display(node *w){
if(w==NULL)
return;
display(w->left);
cout<<w->data;
display(w->right);
}
};
//};
int main(){
	bsTree b;
	b.insert(b.root, 7);
	b.insert(b.root, 4);
	b.insert(b.root, 8);
	b.display(b.root);
return 0;
}
