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
    int n;
    cin>>n;
    int answer=0;
    if(n<0)
    {
        for(int i=n; i<=1; i++)
        {
            answer = answer + i;
        }
    }
    else if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            answer = answer+i;
        }
    }
    else
        answer = 1;
    cout<< answer <<endl;
    return 0;
}

