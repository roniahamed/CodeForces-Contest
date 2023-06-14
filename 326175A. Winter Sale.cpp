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
    double discount, discount_price,original_price;
    cin>>discount>>discount_price;

    original_price = discount_price / (1 - (discount/100));
//    original_price =round(original_price * 100.0 ) / 100.0;
    printf("%.2f\n",original_price);

    return 0;

}

