#include<bits/stdc++.h>
using namespace std;
void printArray(int ar[],int sz)
{
    for (int i=0;i<sz;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int sz;
    cin>>sz;
    // array input:
    int ar[50];
    for (int i=0;i<sz;i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Deletion: ";
    printArray(ar,sz);
    // Deletion part:
    int pos;
    cout<<"Value of the position: ";
    cin>>pos;
    if( pos<0 || pos>sz-1)
    {
        printf("Invalide Index.");
    }
    else{

        // pos+1 --->siz - 1

        if ( pos==sz-1) // for last positon.
            sz--;
        else{
            for(int i=pos+1;i<sz;i++) // for star or mid position
            {
                ar[i-1]=ar[i];
            }
            sz--;
        }
        cout<<"After Deletion: ";
        printArray(ar,sz);
    }
    return 0;

}
