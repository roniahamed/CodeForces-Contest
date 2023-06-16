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
    long long number, i=1;
    cin>>number;

    bool test = true;
    for( i=1; i<=number; i++)
    {
        if(i%2 == 0){
            cout<<i<<endl;
            test = false;
        }

    }

    if(test)
        cout<<-1<<endl;

    return 0;

}

