#include <iostream>
#include<stdio.h>
#include<limits.h>
#include<queue>
using namespace std;
struct BSTnode
{
    int data;
    BSTnode *left;
    BSTnode *right;
};
BSTnode*Getnewnode(int d)
{
    BSTnode*newnode=new BSTnode();
    newnode->data=d;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
BSTnode*Insert(BSTnode*root,int data)
{
    if(root==NULL)
    {
        root=Getnewnode(data);

    }
    else if(root->data >data)
    {
        root->left=Insert(root->left,data);

    }
    else
    {
        root->right=Insert(root-> right,data);
    }
    return root;
}
bool searchnode(BSTnode*root,int data)
{
    if(root==NULL){ return false;}
    if(root->data==data){ return true;}
    else if(root->data>data){ return searchnode(root->left,data);}
    else{ return searchnode(root->right,data);}
}
void levelordertraversal(BSTnode *root)
{
    if(root==NULL)
    {
        cout<<"Empty tree";
    }
    else
    {
        queue<BSTnode*> q;
        q.push(root);
        while(!q.empty())
        {
            BSTnode*c=q.front();
            cout<<c->data<<",";
            if(c->left!=NULL){q.push(c->left);}
            if(c->right!=NULL){q.push(c->right);}
            q.pop();
        }
    }
}
int main()
{
    BSTnode*root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,86);
    int number;
    cout<<"Enter any number to be searched:\t";cin>>number;
    if(searchnode(root,number))
    {
        cout<<"\n    Found";
    }
    else
    {
        cout<<"\n   Not found";
    }
    cout<<endl<<endl<<endl;
    cout<<"The breadth first traversal of the tree is:\n\n:";
    levelordertraversal(root);
    return 0;
}
