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
    char latter;
    cin>>latter;
    if('a'<= latter && 'z'>= latter)
    {
        cout<<char(latter-32)<<endl;
    }
    else
        cout<<char(latter+32)<<endl;

    return 0;
}
