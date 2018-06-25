#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
struct node
{   int data;
    node *left;
    node *right;
};
void inorder(node*);
int height(node*);
int main()
{
    string str;int val=0;
    node * root =NULL;
    int test,r;
    cin>>test>>r;
    root=new node;
    root->data=r;root->left=NULL;root->right=NULL;
    --test;
    while(test--)
    {
       cin>>str;
       cin>>val;
       node *s=new node;
       s->data=val;s->right=NULL;s->left=NULL;
       node *t=root;
       for(string::iterator it=str.begin();it!=str.end();++it)
       {
           if(*it=='L' )
           {
              if(t->left==NULL)
              {
                t->left=s;
              }
              else
              {
                t=t->left;
              }
           }
           else if(*it=='R' )
           {
             if(t->right==NULL)
             {
               t->right=s;
             }
             else
             {
               t=t->right;
             }
           }
       }
    }
    int leftSubtreeHeight=height(root->left);
    int rightSubtreeHeight=height(root->right);
    cout<<rightSubtreeHeight+leftSubtreeHeight+1;
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
int height(node *t)
{
    if(t!=NULL)
    {
        return 1+max(height(t->left),height(t->right));
    }
    else
    {
        return 0;
    }
}
