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
    int k, n, counter = 0;
    cin>>k>>n;

    int min, flag = 1;
    for(int i=1; i<= k; i++)
    {
        int value;
        cin>>value;
        if(flag)
        {
            min = value;
            flag = 0;
        }
        else
        {
            if(value<min)
            {
                min = value;
            }
        }
        counter++;
        if(counter == n || i == k)
        {
            cout<<min<<" ";
            counter = 0;
            flag = 1;
        }
    }

}

