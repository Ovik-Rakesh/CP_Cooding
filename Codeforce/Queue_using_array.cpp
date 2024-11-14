// Queue Operation : Enqueue,Dequeue,Display :
#include<bits/stdc++.h>
#define size 40
using namespace std;
int f=-1;
int r=-1;
int ar[size];
// Enqueue operation:
void Enqueue(int x)
{
    if(r==size-1)
    {
        cout<<"Queue is Overflow"<<endl;
    }
    else if (r==-1 && f==-1 )
    {
        f=r=0;
        ar[r]=x;
        cout<<"Enqueue is: ";
        cout<<ar[r]<<endl;
    }
    else
    {
        r++;
        ar[r]=x;
        cout<<"Enqueue is: ";
        cout<<ar[r]<<endl;
    }
}
// Dequeue operation:
void Dequeue()
{
    if(r==-1 && f==-1)
    {
        cout<<"Queue is Underflow"<<endl;
    }
    else if(f==r)
    {
        cout<<"Dequeue is: ";
        cout<<ar[f]<<endl;
        f=r=-1;
    }
    else
    {
        cout<<"Dequeue is: ";
        cout<<ar[f]<<endl;
        f++;
    }
}
// Queue display :
void display()
{
    if(r==-1 && f==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        for(int i=f; i<=r; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int choice,val;
    cout<<"Choice - 1 : Enqueue operation"<<endl;
    cout<<"Choice - 2 : Dequeue operation"<<endl;
    cout<<"Choice - 3 : Show Display Queue list"<<endl;
    cout<<"Choice - 4 : Exit operation"<<endl;
    cout<<"Next choice : ";
    cin>>choice;
    while(choice!=4)
    {
        switch(choice)
        {

        case 1:
            cout<<"Enter the value you want to add : ";
            cin>>val;
            Enqueue(val);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            cout<<"Queue list: ";
            display();
            cout<<endl;
            break;
        default:
            break;
        }

        cout<<"Next choice : ";
        cin>>choice;
    }
    return 0;

}
