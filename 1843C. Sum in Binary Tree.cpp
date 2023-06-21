/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        ll number,sum = 0;
        cin>>number;
        while(number>=1){
            sum += number;
            number /= 2;
        }
        cout<<sum<<endl;
    }

}
