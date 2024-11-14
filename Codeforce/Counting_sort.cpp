#include<bits/stdc++.h>
using namespace std;
void printArray(int ar[],int sz)
{
    for(int i=0; i<sz; i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sort: ";
    printArray(arr,n);
    cout<<endl;


    // Step-1: Finding Max
    int mx =arr[0];
    for(int i=0; i<n; i++)
    {
        if(mx<arr[i])
        {
            mx = arr[i];
        }
    }   

    // Step-2 : Initialization of count array
    int cont[mx+1]= {0};

    // step-3 : Frequency Calculation:
    for(int i=0;i<n; i++)
    {
        cont[arr[i]]++;
    }

    // Step-4 : Cumulative sum
    for(int i=1; i<=mx; i++)
    {
        cont[i]+=cont[i-1];
    }

    // Step-5 : Final array -> Backword travasel to basic array
    int finl[n];
    for(int i=n-1; i>=0; i--)
    {
        cont[arr[i]]--;
        int k = cont[arr[i]];
        finl[k] = arr[i];
    }

    cout<<"After Sort : ";
    printArray(finl,n);

    return 0;
}
