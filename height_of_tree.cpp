#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
};
node* newnode(int data){
node* mynode=new node();
mynode->data=data;
mynode->left=NULL;
mynode->right=NULL;
return mynode;
}
int hgh(node* root){

if(root==NULL)
return 0;
else{
 int dl=hgh(root->left);
 int dr=hgh(root->right);

 return (dl>dr?dl+1:dr+1);}
}

int csk(node* root1,node* root2){

if(root1 ==NULL|| root2==NULL)
    return 1;
if(root1!=NULL && root2!=NULL){
    return (root1->data==root2->data
            &&
            csk(root1->left,root2->left)&&
            csk(root1->right,root2->right));
}
return 0;

}


void del(node* &root){

if(root==NULL){
    return ;

}
del(root->left);
del(root->right);
delete root;
root=NULL;



}

main()
{
     node *root = newnode(1);

    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);


     node *root1 = newnode(1);

    root1->left = newnode(2);
    root1->right = newnode(3);
    root1->left->left = newnode(4);
    root1->left->right = newnode(5);

cout<<hgh(root)<<endl;
cout<<csk(root,root1)<<endl;
del(root);
cout<<hgh(root)<<endl;
return 0;
}
