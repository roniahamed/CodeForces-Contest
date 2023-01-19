#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> ve;
        for(int j=0; j<n; j++){
            int num;
            cin>>num;
            ve.push_back(num);
        }
        sort(ve.begin(),ve.end());
        bool ok = true;
        for(int k=0; k<n-1; k++){
            if(ve[k] == ve[k+1])
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
