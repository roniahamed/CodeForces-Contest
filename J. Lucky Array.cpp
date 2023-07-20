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
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int min = array[0];
    int counter = 0;
    for(int i=0; i<n; i++)
    {
        if(min == array[i])
        {
            counter++;
        }
        if(min > array[i])
        {
            min = array[i];
            counter = 1;
        }
    }
    if(counter % 2 == 0)
    {
        cout<<"Unlucky"<<endl;
    }
    else{
        cout<<"Lucky"<<endl;
    }

    return 0;

}

