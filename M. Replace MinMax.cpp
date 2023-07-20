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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int min = 0;
    int max = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[max])
            max = i;
        if(arr[i]<arr[min])
            min = i;
    }
    swap(arr[min],arr[max]);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

