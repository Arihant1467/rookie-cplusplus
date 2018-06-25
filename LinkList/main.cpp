#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
};

int main()
{
    system("cls");
    Node*head=NULL;
    Node*create_node(int);
    Node*insert_at_beginning(Node*);
    Node*insert_at_end(Node*);
    Node*delete_node_beginning(Node*);
    void Display(Node*);
    int option, flag=1;
    do
    {

        cout<<"\n1.Insert At top\n\n2.Insert at Last\n\n3.Delete\n\n4.Traverse the List\n\n5.Exit\t\t";
        cin>>option;
        switch(option)
        {
            case 1:head=insert_at_beginning(head);
                    break;
            case 2:head=insert_at_end(head);
                    break;
            case 3:head=delete_node_beginning(head);
                    break;
            case 4:Display(head);
                    break;
            case 5: exit(0);
                    flag=0;
                    break;
        }

    }while(flag==1);
    exit(0);
    return 0;
}
Node*create_node(int v)
{
    Node* temp;
    temp=new Node;
    temp->data=v;
    temp->next=NULL;
    return temp;
}
Node*insert_at_beginning(Node*t)
{   Node*temp;
    int value;

    cout<<"\n Enter the value to be entered \t";
    cin>>value;
    temp=create_node(value);
    if(t==NULL)
    {
        t=temp;
        return t;
    }
    else
    {
        temp->next=t;
        t=temp;
        return t;
    }

}
Node*insert_at_end(Node*t)
{
    Node*temp;
    int value;

    cout<<"\n Enter the value to be entered \t";
    cin>>value;
    temp=create_node(value);
    if(t==NULL)
    {
        t=temp;
        return t;
    }
    else
    {   Node*t1=t;
        while(t1!=NULL)
        {
            t1=t1->next;
        }
        t1=temp;
        return t;
    }
}
Node*delete_node_beginning(Node*t)
{
    if(t==NULL)
    {
        cout<<"\n Sorry No elements to be deleted\n";
        return t;
    }
    else
    {
        Node*t1=t;
        t1=t1->next;
        delete t;
        cout<<"\n Element deleted\n";
        return t1;
    }
}
void Display(Node*t)
{
    if(t==NULL)
    {
        cout<<"No elements to show\n";
    }
    else
    {
        cout<<"\n\n The elments are \n";
        while(t!=NULL)
        {
            cout<<t->data<<"\t";
            t=t->next;
        }
    }

}
