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
    int t;
    cin>>t;
    while(t)
    {
        t--;
        long long n,c=0,sum=0;
        cin>>n;
        while(n>0){
            if(n%2==1)c++;
            n/=2;
        }
        for(int i=0; i<c; i++){
            sum+=pow(2,i);
        }
        cout<<sum<<endl;
    }
}

