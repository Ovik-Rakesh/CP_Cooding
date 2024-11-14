#include<bits/stdc++.h>
using namespace std;
void printArray(int ar[],int sz)
{
    for (int i=0; i<sz; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int sz;
    cin>>sz;
    // Array INPUT:
    int ar[50];
    for (int i=0; i<sz; i++)
    {
        cin>>ar[i];
    }
    cout<<"Before insertion: ";
    printArray(ar,sz);
    // Array Insertion:
    int pos,val;
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the value: ";
    cin>>val;
    if (pos<0 || sz<pos) printf("Invalid Index.\n");
    else
    {
        ar[sz]=ar[pos];
        ar[pos]=val;
    }


    cout<<"After Insertion: ";
    printArray(ar,sz+1);

    return 0;

}

