#include<bits/stdc++.h>
using namespace std;
void printArray(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Sort: ";
    printArray(ar,n);
    cout<<endl;
    // Insertion sort implemataion:
    for(int i=1;i<n;i++)
    {
        int key = ar[i];
        int j = i-1;
        while(ar[j]>key && j>=0)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
    }

    cout<<"After Sort: ";
    printArray(ar,n);


    return 0;

}
