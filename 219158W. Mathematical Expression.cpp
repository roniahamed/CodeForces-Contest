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
    int num_a, num_b, ans;
    char exp1, exp2;

    cin>>num_a>>exp1>>num_b>>exp2>>ans;

    if(exp1 == '+' && num_a + num_b == ans)
        cout<<"Yes\n";
    else if(exp1 == '+' && num_a + num_b != ans)
        cout<<num_a + num_b <<endl;
    if(exp1 == '-' && num_a - num_b == ans)
        cout<<"Yes\n";
    else if(exp1 == '-' && num_a - num_b != ans)
        cout<<num_a - num_b <<endl;
    if(exp1 == '*' && num_a * num_b == ans)
        cout<<"Yes\n";
    else if(exp1 == '*' && num_a * num_b != ans)
        cout<<num_a * num_b <<endl;


    return 0;

}
