#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void Enqueue(Node *&head,int val)
{
    Node *newNode = new Node(val) ;
    if(head==NULL)
    {
        head = newNode;
        return ;
    }
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;

}
void dequeue(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    Node *temp = head;
    temp->Next = head;
    cout<<"Queue value is: "<<temp->value<<endl;
}
int display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next!=NULL)
            cout<<"->";
        n = n->Next;
    }
}

int main()
{
    Node *head = NULL;
    int choice,val;
    cout<<" Choice - 1 : Enqueue operation"<<endl;
    cout<<" Choice - 2 : Dequeue operation"<<endl;
    cout<<" Choice - 3 : Show Display Queue list"<<endl;
    cout<<" Choice - 0 : Exit operation"<<endl;
    cout<<" Next choice : ";
    cin>>choice;
    while(choice!=0)
    {
        switch(choice)
        {

        case 1:
            cout<<"Enter the value you want to add : ";
            cin>>val;
            Enqueue(head,val);
            break;
        case 2:
             dequeue(head);
            break;
        case 3:
            cout<<"Queue list: ";
            display(head);
            cout<<endl;
            break;
        default:
            break;
        }

        cout<<" Next choice : ";
        cin>>choice;
    }

    return 0;

}
