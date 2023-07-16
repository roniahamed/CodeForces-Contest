/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] ,int n)
{
    for(int i=0; i<n-1; i++)
    {
            bool tem = true;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                tem = false;
            }
        }
        if(tem)
            break;
    }
}

int main()
{
    int n;
    cin>>n;
    int array [n];
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        array[i] = value;
    }
    bubble_sort(array,n);
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;

}

