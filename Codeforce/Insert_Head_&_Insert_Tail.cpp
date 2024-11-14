#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
// Insert at Head :
void InsertAtHead(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
// Insert at Tail:
void InsertAtTail(Node* &head,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node* tem = head;
    while(tem->Next != NULL)
    {
        tem = tem->Next;
    }
    tem->Next = newNode;
}
// Display :
void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
            cout<<"->";
        n=n->Next;
    }
}
int main()
{
    Node *head = NULL;
    cout<<"1.Insert at Head"<<endl;
    cout<<"2.Insert at Tail"<<endl;
    cout<<"3.Exit"<<endl;
    int n;
    int choice = 1;
    while(choice==1 || choice==2)
    {
        cout<<"Enter the value: ";
        cin>>n;
        if(choice==1)
            InsertAtHead(head,n);
        else if (choice==2)
            InsertAtTail(head,n);
        cout<<"Next Choice: ";
        cin>>choice;
    }
    display(head);
    return 0;

}
