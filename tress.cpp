#include<iostream>
using namespace std;
struct node
{

    int data;
    node* left;
    node* right;
};
node* createnewnode(int value){
    node* newnode = new node();
    newnode->data = value;
    newnode->right = newnode->left=NULL;
    return newnode;
}
void printtree(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    printtree(root->left);
    printtree(root->right);
}
int main(){
    node* root = createnewnode(1);
    root->left = createnewnode(2);
    root->right = createnewnode(3);
    //level 2
    root->left->left= createnewnode(4);
    root->left->right=createnewnode(5);
    root->right->left=createnewnode(6);
    root->right->right=createnewnode(7);
    printtree(root);
}