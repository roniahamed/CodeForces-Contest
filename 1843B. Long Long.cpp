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
    ll num, t;
    cin>>num;
    ll sum = 0;
    for(int i=0; i<num; i++)
    {
        cin>>t;
        ll max_sum =0, cnt = 0;
        ll value;
        sum = 0;
        bool test = true;
        for(ll k=0; k<t; k++)
        {

            cin>>value;
            max_sum += abs(value);
            if(value < 0 && test)
            {
                test = false;
                cnt++;
            }
            if(value>0)
                test = true;
        }
        cout<<max_sum<<" "<<cnt<<endl;
    }
    return 0;

}


