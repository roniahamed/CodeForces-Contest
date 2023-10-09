/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    cin>>n>>num;
    long long arr[n]={0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    long long sum = 0;
    for(int i=0; i<num; i++)
    {
        if(arr[i] < 0)
            break;
        sum += arr[i];
    }

    cout<<sum<<endl;
    return 0;
}

 
