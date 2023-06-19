/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll num,ori_num, sum = 0, digit =0;
    cin>>num;
    ori_num = num;

    while(num>0){
        digit = num % 10;
        sum = (sum * 10) + digit;
        num /= 10;
    }

    if(ori_num == sum)
        cout<<sum<<endl<<"YES\n";
    else
        cout<<sum<<endl<<"NO"<<endl;

    return 0;


}

