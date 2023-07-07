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
    int i = 0;
    while(n)
    {
        char arr[3][3];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                char c;
                cin>>c;
                arr[i][j] = c;

            }
        }
        n--;

        if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&& arr[0][0]!='.')
        {
            cout<<arr[0][0]<<endl;
            continue;
        }
        if(arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&& arr[1][0]!='.')
        {
            cout<<arr[1][0]<<endl;
            continue;
        }
        if(arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&& arr[2][0]!='.')
        {
            cout<<arr[2][0]<<endl;
            continue;
        }


        if(arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&& arr[0][0]!='.')
        {
            cout<<arr[0][0]<<endl;
            continue;
        }
        if(arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&& arr[0][1]!='.')
        {
            cout<<arr[0][1]<<endl;
            continue;
        }
        if(arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&& arr[0][2]!='.')
        {
            cout<<arr[0][2]<<endl;
            continue;
        }

        if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&& arr[0][0]!='.')
        {
            cout<<arr[0][0]<<endl;
            continue;
        }
        if(arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0] && arr[0][2]!='.')
        {
            cout<<arr[0][2]<<endl;
            continue;
        }
        cout<<"DRAW"<<endl;

    }
    return 0;
}

