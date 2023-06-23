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
    for (int i=0; i<n; i++){
        string st,str;
        str = "codeforces";
        cin>>st;
        int sum=0;
        for(int j=0; j<10; j++){
            if(st[j]!=str[j])
                sum++;
        }
        cout<<sum<<endl;
    }

}
