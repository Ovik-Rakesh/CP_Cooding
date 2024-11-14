#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin>>sz;
    int ar[sz];
    for(int i=0; i<sz; i++)
    {
        cin>>ar[i];
    }

    char c;
    cout<<"Do you want to search (Y/N): ";
    cin>>c;

    while(toupper(c)=='Y')
    {
        int checkvalue;
        cout<<"Enter the value you want to search: ";
        cin>>checkvalue;

        // Linear Search part:

        int flag = 0; // Input value not found in array
        for(int i=0; i<sz; i++)
        {
            if(ar[i]==checkvalue)
            {
                flag = 1;
                cout<<"Index No: "<<i<<" postion : "<<i+1<<endl;
            }
        }
        if (flag==0) cout<<"NOT FOUND"<<endl;
        cout<<"Do you want to searching continue (Y/N): ";
        cin>>c;
    }


    return 0;

}

