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
    int number, even = 0, negative = 0, positive = 0, odd = 0;
    cin>>number;
    for(int i=0; i<number; i++){
        int n;
        cin>>n;
        if(n%2==0)
            even++;
        else
            odd++;
        if(n<0)
            negative++;
        if(n>0)
            positive++;
    }
    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<positive<<"\nNegative: "<<negative<<endl;

    return 0;

}

