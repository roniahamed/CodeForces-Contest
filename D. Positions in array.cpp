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
    vector<int> ve;
    while(n)
    {
        n--;
        int value;
        cin>>value;
        ve.push_back(value);
    }
    n = ve.size();
    for(int i=0; i<n; i++)
    {
        if(ve[i]<=10)
            cout<<"A["<<i<<"] = "<<ve[i]<<endl;
    }
    return 0;
}

