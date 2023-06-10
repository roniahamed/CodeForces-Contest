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
    int num_a, num_b;
    char char_c;
    cin>>num_a >> char_c >> num_b;

    if(char_c == '>' && num_a > num_b)
        cout<<"Right\n";
    else if(char_c == '<' && num_a < num_b)
        cout<<"Right\n";
    else if(char_c == '=' && num_a == num_b)
        cout<<"Right\n";
    else
        cout<<"Wrong\n";

    return 0;N
}
