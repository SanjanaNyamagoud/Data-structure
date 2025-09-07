//using stack implematation of linked list
#include<iostream>
using namespace std;
#include<stack>
struct node
{
    int data;
    node* next;
};
node* head;
void inseratend(int data)
{
    node* newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* newnode1=head;
    while(newnode1->next!=NULL)
    {
        newnode1=newnode1->next;
    }
    newnode1->next=newnode;
}
void Reverse()
{
    stack<node*> s;
    node* temp1=head;
    if(head==NULL)
    {
        return;
    }
    while(temp1!=NULL)
    {
        s.push(temp1);
        temp1=temp1->next;
    }
    node* temp=s.top();
    head=temp;
    s.pop();
    while(! s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
void Print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    inseratend(5);
    inseratend(6);
    inseratend(3);
    inseratend(9);
    inseratend(2);
    inseratend(8);
    cout<<"before reverse:"<<endl;
    Print();
    cout<<endl;
    Reverse();
    cout<<"After reverse:"<<endl;
    Print();
}
