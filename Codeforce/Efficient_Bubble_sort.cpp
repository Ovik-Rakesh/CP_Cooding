#include<bits/stdc++.h>
using namespace std;
void printArray(int arra[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int sz;
    cin>>sz;
    int ar[sz];
    for (int i=0;i<sz;i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Sort: ";
    printArray(ar,sz);

    // Bubble Sort impletation :
    for (int i=1;i<sz;i++)
    {
        cout<<"Iteration: "<<i<<endl;
        int flag = 0;
        for(int j=0;j<sz-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                flag=1;
            }
            printArray(ar,sz);
        }
        cout<<endl;
        if(flag==0) break;
    }
    cout<<"After Sort: ";
    printArray(ar,sz);

    return 0;

}

