#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
//,,,,,,,,,,,,,,,,,,
void display(Node *n);
void InsertAtTail(Node* &head,int val);
void InsertAtHead(Node* &head,int val);
void InsertAtspecificPostion(Node *&head,int pos,int val);

//int countlength(Node *&head);

int main()
{
    Node *head = NULL;
    int choice,n,pos;
    cout<<"choice-1:Insert at head."<<endl;
    cout<<"choice-2:Insert at Tail."<<endl;
    cout<<"Choice-3: Insert at specific position."<<endl;
    cout<<"choice-0:exit"<<endl;
    cout<<"Next choice : ";
    cin>>choice;
    while(choice !=0 )
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtHead(head,n);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtTail(head,n);
            break;
        case 3:
            cout<<"Enter the specific position: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtspecificPostion(head,pos,n);

        default:
            break;
        }
        cout<<"Next choice: ";
        cin>>choice;
    }
    cout<<"Linked List: ";
    display(head);
    return 0;

}
//.........Display...............

void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next !=NULL)
            cout<<"->";
        n = n->Next;
    }
}
//...........InsertAtTail.....................

void InsertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return ;
    }
    Node *tem = head;
    while(tem->Next !=NULL)
    {
        tem = tem->Next;
    }
    tem->Next = newNode ;
}
//.........InsertAtHead..................
void InsertAtHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
/*.........Count of linked list .................
 int countlength(Node *&head)
{
    int count = 0;
    Node *tem = head;
    while(tem!=NULL)
    {
        count++;
        tem = tem->Next;
    }
    return count;
}
    */   //....................................
//...........Insert atspecific position ........................
void InsertAtspecificPostion(Node *&head,int pos,int val)
{
    int i=0;
    Node *temp = head;
    while(i<pos-2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
//..............End of singular linked list Insertion .....................

