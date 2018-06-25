#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int main()
{
    bool createTree(node *,int,int,char);
    void inorder(node*);
    node* create_node(int);
    int mirrorNode(node*,node*,int);
    node *root = new node;
    root->data=1;root->left=NULL;root->right=NULL;
    int line=0,test=0;
    cin>>line>>test;
    line-=1;
    int parent=0,child=0;char direction;
    // creating the tree
    while(line--)
    {
        cin>>parent>>child>>direction;
        createTree(root,parent,child,direction);
    }
    int original_node=0;
    while(test--)
    {
        cin>>original_node;
        if(root->data==original_node)
        {
            cout<<original_node<<"\n";
        }
        else
        {
            if(mirrorNode(root->left,root->right,original_node) == 0)
            {
                cout<<"-1\n";
            }
        }

    }
    //inorder(root);
    return 0;
}
node* create_node(int data)
{
    node* s = new node;
    s->data = data;
    s->left = NULL;
    s->right = NULL;
    return s;
}
bool createTree(node *t,int parent,int child,char direction)
{   bool found = false;
    if(t->data == parent)
    {
        node *s = create_node(child);
        //s->data = child;s->left=NULL;s->right=NULL;
        if(direction == 'L')
        {
            t->left = s;
        }
        else
        {
            t->right = s;
        }
        found = true;
        return found;
    }
    if(!found && t->left !=NULL)
    {
        found=createTree(t->left,parent,child,direction); // going into the left subtree
    }
    if(!found && t->right !=NULL)
    {
        found=createTree(t->right,parent,child,direction); // going into the right subtree
    }
    return found;
}
int mirrorNode(node *left,node *right,int original_node)
{   //int found =0;
    if(left==NULL || right==NULL)
    {
        return 0;
    }
    else if(left->data==original_node)
    {
        cout<<right->data<<"\n";
        //found=1;
        return 1;
    }
    else if(right->data==original_node)
    {
        cout<<left->data<<"\n";
        //found=1;
        return 1;
    }
    if(mirrorNode(left->left,right->right,original_node)==1)// for external nodes
    {
        //found=mirrorNode(left->left,right->right,original_node);
        return 1;
    }
    else // for internal nodes
    {
        //found=mirrorNode(left->right,right->left,original_node);
        return mirrorNode(left->right,right->left,original_node);
    }
    return 0;
}
void inorder(node* t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        cout<<t->data;
        inorder(t->right);
    }
}
