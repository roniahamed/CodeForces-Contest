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
    int a,b;
    cin>>a>>b;
    bool test = true;
    for(int i=a; i<=b; i++){
        int lucky = 0, x=i;
        while(x){
            if(x%10 != 4 && x%10 != 7)
                lucky ++;
            x /= 10;
        }
        if(lucky == 0){
            cout<<i<<" ";
            test = false;
        }
    }

    if(test)
        cout<<-1<<endl;

    return 0;

}
