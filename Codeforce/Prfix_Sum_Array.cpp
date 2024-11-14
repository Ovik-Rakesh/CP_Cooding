#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int pr[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    // Prefix Sum:
    pr[0]=ar[0];
    for(int i=1;i<n;i++)
    {
        pr[i]=ar[i]+pr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<pr[i]<<" ";
    }
    return 0;

}
