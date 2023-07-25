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
        cin>>array[i];
    int flag=0, c=0;
    while(flag==0)
    {
        for(int i=0; i<n; i++)
        {
            if(array[i] % 2 == 0)
            {
                array[i] /= 2;
            }
            else{
                flag = 1;
                break;
            }
        }
            c++;
    }
    cout<<c-1<<endl;

}

