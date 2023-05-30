/*
 **===================================**
 **        MD Roni Ahamed             **
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
    char c;
    string s = "codeforces";
    vector<string> ve;
    for(int i=0; i<t; i++){
        cin>>c;
        bool  is = true;
        for(char val:s)
        if(val==c){
            ve.push_back("YES");
            is = false;
            break;
        }
        if(is)
            ve.push_back("NO");
    }
    for(int i=0; i<t; i++){
        cout<<ve[i]<<endl;
    }


    return 0;

}
