// Circular Queue operation :
#include<bits/stdc++.h>
#define size 5
using namespace std;
int f=-1;
int r=-1;
int ar[size];
// Circular Enqueue operation :
void Enqueue(int x)
{
    if( (r+1)%size ==f)
    {
        cout<<"Queue is Overflow"<<endl;
    }
    else if (r==-1 && f==-1)
    {
        f = r = 0;
        cout<<"Circular Enqueue is : ";
        ar[r] = x;
        cout<<ar[r]<<endl;
    }
    else{
        r = (r+1)%size;
         cout<<"Circular Enqueue is : ";
         ar[r] = x;
        cout<<ar[r]<<endl;

    }
}
// Circular Dequeue :
void Dequeue()
{
    if( r==-1 && f==-1)
    {
        cout<<"Queue is Underflow"<<endl;
    }
    else if ( f==r)
    {
        cout<<"Dequeue is : ";
        cout<<ar[f]<<endl;
        f = r = -1;
    }
    else
    {
        cout<<"Dequeue is : ";
        cout<<ar[f]<<endl;
        f = (f+1)%size;
    }
}
// Circular Queue display :
void display()
{
    int i = f;
    if(r==-1 && f==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        while(i!=r)
        {
            cout<<ar[i]<<" ";
            i = (i+1)%size;
        }
        cout<<ar[r];
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
