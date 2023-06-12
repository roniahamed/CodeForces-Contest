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
    long long a, b, c, d, answer;
    cin>>a>>b>>c>>d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    answer = (a * b * c * d) % 100;
    if(answer < 10)
        cout<<0<<answer<<endl;
    else
        cout<<answer<<endl;

    return 0;
}
