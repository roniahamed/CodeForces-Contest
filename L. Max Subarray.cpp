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
    while(t)
    {
        int n;
        cin>>n;
        int array[n];
        t--;
        for(int i=0; i<n; i++)
            cin>>array[i];
        for(int i=0; i<n; i++){
            for(int r=i; r<n; r++)
            {
            int mx = -1e5;
                for(int j=i; j<=r; j++)
                {
                    if(array[j] > mx)
                        mx = array[j];
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;
    }

return 0;

}

