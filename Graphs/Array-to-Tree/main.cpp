#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *allocate(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int main()
{
    int arr[] = {1,NULL,3,4,5};
    Node *insertLevelOrder(Node *r,int a,int arr[]);
    void printTraversal(Node *root);
    Node *root = new Node;
    root = insertLevelOrder(root,0,arr);
    printTraversal(root);
    return 0;
}
Node *insertLevelOrder(Node *root,int index,int arr[]){
    if(index<5 && arr[index] != NULL){
        Node *temp = allocate(arr[index]);
        root = temp;
        root->left = insertLevelOrder(root->left,index*2+1,arr);
        root->right = insertLevelOrder(root->right,index*2+2,arr);
    }
    return root;
}

void printTraversal(Node *root){
    if(root != NULL){
        printTraversal(root->left);
        cout<<root->data<<" ";
        printTraversal(root->right);
    }
}
