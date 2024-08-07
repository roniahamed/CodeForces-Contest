#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t){
    int v;
    cin>>v;
    int sum = 0;
    sum += v%10;
    v/= 10;
    sum += v;
    cout<<sum<<endl;
    t--;
}
return 0;
}
