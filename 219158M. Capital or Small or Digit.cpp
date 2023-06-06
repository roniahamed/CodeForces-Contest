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
    char st;
    cin>>st;

    if('0'<= st && '9'>= st)
        cout<<"IS DIGIT\n";
    else if('A'<= st && 'Z'>= st)
        cout<<"ALPHA\nIS CAPITAL\n";
    else if('a'<= st && 'z'>= st)
        cout<<"ALPHA\nIS SMALL\n";

    return 0;
}
