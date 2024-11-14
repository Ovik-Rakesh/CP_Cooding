#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    // Finding max value:
    int mx = ar[0];
    for(int i=0; i<n; i++)
    {
        if(ar[i]>mx)
        {
            mx = ar[i];
        }
    }
    int cont[mx+1]= {0};
    // Counting Array:
    for(int i=0; i<n; i++)
    {
        cont[ar[i]]++;
    }
    for(int i=0;i<=mx;i++)
    {
        cout<<i<<" = "<<cont[i]<<endl;
    }

    return 0;

}
