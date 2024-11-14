#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int ar[],int x,int lb,int ub)
{

     if (lb<=ub)
     {
         int mid = lb+ub/2;
        // Center = mid
        if(x==ar[mid]) return mid;
        //Right = x>ar[mid]
        else if (x>ar[mid]) BinarySearch(ar,x,mid+1,ub);
        // left = x<ar[mid]
        else BinarySearch(ar,x,lb,mid-1);
     }
     else return -1;
}
int main()
{
    int sz;
    cin>>sz;
    int ar[sz];
    for(int i=0;i<sz;i++)
    {
        cin>>ar[i];
    }
    int checkvalue;
    cout<<"Enter the value you want to search: ";
    cin>>checkvalue;
    int indexNo;
    indexNo = BinarySearch(ar,checkvalue,0,sz-1);
    if(indexNo != -1)
    {
        cout<<"Index No: "<<indexNo<<", Position: "<<indexNo+1<<endl;

    }
    else cout<<"NOT FOUND"<<endl;

    return 0;

}
