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
    double float_num;
    int int_num;
    cin>>float_num;
    int_num = float_num;
    if(float_num == int_num )
        cout<<"int "<<int_num<<endl;
    else
        cout<<"float "<<int_num<<" "<<float_num - int_num<<endl;

    return 0;
}
