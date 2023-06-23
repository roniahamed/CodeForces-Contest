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
    ll t,i=0,j=0;
    pair<string,ll> pa;
    cin>>t;
    for(i=0; i<t; i++)
    {
        ll n,key,value,n1=0,n2=0,n3=0;
        cin>>n;
        map<string,ll> a,b,c;
        for(j=0; j<n; j++)
        {
            cin>>key>>value;
            if(value==10)
            {
                if(a.size())
                {
                    n1 = a["10"];
                    if(n1>key)
                        a["10"]=key;;
                }
                else
                    a.insert({"10",key});

            }
            if(value==1)
            {

                if(b.size())
                {
                    n2 = b["01"];
                    if(n2>key)
                        b["01"]=key;
                }
                else
                    b.insert({"01",key});


            }
            if(value == 11)
            {
                if(c.size())
                {
                    n3 = c["11"];
                    if(n3>key)
                        c["11"]=key;
                }
                else
                    c.insert({"11",key});
            }

        }
        n1 = 0;
        n2 = 0;
        n3 = 0;

        if(a.size())
            n1 = a["10"];
        if(b.size())
            n2 = b["01"];
        if(c.size())
            n3 = c["11"];

        if((n1&&n2)&&(n3==0||n3 > n1+n2))
        {
            cout<<n1+n2<<endl;
        }
        else if(n3)
        {
            cout<<n3<<endl;
        }
        else
            cout<<-1<<endl;

    }
    return 0;

}

