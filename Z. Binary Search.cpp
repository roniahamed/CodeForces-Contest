/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,x,m=1e9+6,k;
    cin>>n>>k;
    ll array[n] = {0};

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(int i=0; i<k; i++)
    {
        int f=0,b=n-1,found,mid = 0;
        cin>>found;
        bool t=true;
        while(f<=b && mid >= 0 && mid < n)
        {
            mid = (f+b)/2;
            if(array[mid]==found)
            {
                cout<<"found"<<endl;
                t = false;
                break;
            }
            if(array[mid]<found)
                f = mid+1;
            else if(array[mid]>found)
                b = mid-1;
        }
        if(t)
            cout<<"not found"<<endl;

    }
    return 0;
}


