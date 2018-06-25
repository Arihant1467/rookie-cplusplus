#include <iostream>
#include<string>
#include<stdio.h>
#include<deque>
using namespace std;
struct node
{   int data;
    node *left;
    node *right;
    node *adj;
};
void inorder(node*);
void adjacentNode(node*);
int main()
{
    deque<node*> mydeque;
    string str;int val;
    int i=10;
    node *root;
    root=new node;
    root->data=1;root->left=NULL;root->right=NULL;root->adj=NULL;
    --i;
    cout<<"Enter elements \n";
    while(i--)
    {
       cin>>str;
       cin>>val;
       node *s=new node;
       s->data=val;s->right=NULL;s->left=NULL;s->adj=NULL;
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
    adjacentNode(root);
    cout<<"\nInorder traversal :\n";
    inorder(root);
    cout<<"\nPrinting the adjacent level wise\n";
    cout<<root->left->data<<" "<<root->left->adj->data<<"\n";
    cout<<root->left->left->data<<" "<<root->left->left->adj->data<<root->left->left->adj->adj->data<<" "<<root->left->left->adj->adj->adj->adj->data;
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
void adjacentNode(node *t)
{
    deque<node*> myQueue;
    myQueue.push_back(t);
    while(!myQueue.empty())
    {
        //node *s=myQueue.front();
        //myQueue.push(s->left);
        //myQueue.push(s->right);
        //myQueue.pop();
        int len=myQueue.size();
        for(int i=0;i<len-1;++i)
        {
            node *a=myQueue.at(i);
            node *b=myQueue.at(i+1);
            a->adj=b;
            if(a->left!=NULL)
               { myQueue.push_back(a->left);}
            if(a->right!=NULL)
                {myQueue.push_back(a->right);}
        }
        node *b=myQueue.at(len-1);
        // for the last element which we cannot encounter in loop
        if(b->left!=NULL)
         {myQueue.push_back(b->left);}
        if(b->right!=NULL)
         {myQueue.push_back(b->right);}
        myQueue.erase(myQueue.begin(),myQueue.begin()+len);

    }
    //return myQueue;
}
