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
    double n, k, a, answer;
    cin>>n >> k >> a;

    answer = n * k / a;
    long long answer1 = answer;
    if(answer != answer1)
        cout<<"double\n";
    else if(answer1 <= INT_MAX)
        cout<<"int\n";
    else
        cout<<"long long\n";

    return 0;
}
