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
    while(t){
        int x,y;
        long long odd_sum = 0;
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        for(int i=x+1; i<y; i++){
            if(i%2!=0)
                odd_sum += i;
        }
        cout<<odd_sum<<endl;
        t--;
    }
}

