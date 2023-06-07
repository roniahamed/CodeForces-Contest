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
    int x,first_digit=0;
    cin>>x;
    while(x>0){
        first_digit = x %10;
        x = x/10;
    }
    if(first_digit==0 || first_digit%2 !=0){
        cout<<"ODD\n";
    }
    else
        cout<<"EVEN"<<endl;

    return 0;
}
