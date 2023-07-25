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
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=0;
        cin>>n;
        int array[n];
        for(int i=0; i<n; i++)
        {
            cin>>array[i];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(array[j] >= array[j-1])
                {
                    c++;
                }
                else
                    break;
            }
        }
        cout<<c + n<<endl;
    }
    return 0;
}

