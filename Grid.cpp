#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        n = 8;
        char array[8][8];
        for(int k=0; k<n; k++){
            for(int j = 0; j<n; j++){
                cin>>array[k][j];
            }
        }
        bool R = false,B = false;
        for(int k=0; k<n; k++){
                int r = 0,b = 0;
            for(int j = 0; j<n; j++){
                if(array[k][j] == 'R')
                {
                    r++;
                }
                else if(array[k][j] == 'B')
                    b++;
            }
            if(r>b && b == 0 && R || B){
                continue;
            }
            else if(b>r && r==0 && R||B){
                continue;
            }
            else if(b>r && r== 0 && b == 8){
                B = true;
                R = false;
                continue;
            }
            else if(r>b && b == 0 && r== 8){
                R = true;
                B = false;
                continue;
            }
            if(r>b){
                B = true;
                R = false;
            }
            else if(b>r)
            {
                R = true;
                B = false;
            }

        }
        if(R){
            cout<<'R'<<endl;
        }
        if(B)
            cout<<'B'<<endl;

    }

    return 0;
}
