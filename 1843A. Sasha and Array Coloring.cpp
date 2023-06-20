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
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        vector<int> arr;
        ll sum = 0;
        for(int j=0; j<m; j++){
            int value;
            cin>>value;
            arr.push_back(value);
        }
        if(m==1)
        {
            cout<<0<<endl;
        }
        else{
                sort(arr.begin(),arr.end());
            for(int k=0,l=m-1; k<l; k++,l--){
                sum += arr[l] - arr[k];
            }
            cout<<sum<<endl;
        }
        arr.clear();
    }

}
