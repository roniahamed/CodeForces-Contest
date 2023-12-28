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
        char arr[3][3];
        map<char, int> mp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++) {
                cin>>arr[i][j];
                if(arr[i][j] == 'A' || arr[i][j] == 'B' || arr[i][j] == 'C')
                    mp[arr[i][j]] ++;
            }
        }
        bool tem = false;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++){
                if(mp[arr[i][j]]==2){
                    cout<<arr[i][j]<<endl;
                    tem = true;
                    break;
                }
            }
            if(tem)
                break;
        }

    }

}


