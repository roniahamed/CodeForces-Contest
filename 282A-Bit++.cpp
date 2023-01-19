/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pub push_back
#define pi 3.14159265359
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end()))
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define vpair vector<pair<ll,ll>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pii pair<ll,ll>
#define N 1000000

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string st;
        cin>>st;
        if(st[1]=='-')
            x--;
        else
            x++;
    }

    cout<<x<<endl;

}
