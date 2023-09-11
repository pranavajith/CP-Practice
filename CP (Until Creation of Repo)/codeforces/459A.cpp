#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if (((((x2-x1)/(y2-y1)) != 1) & (((x2-x1)/(y2-y1)) != -1)) & (x1 != x2) & (y1 != y2)) cout<<-1<<endl;
    else{
        if (x1==x2){
            ll len = abs(y2-y1);
            cout<<x2+len<<" "<<y2<<" "<<x1+len<<" "<<y1<<endl;
        }
        else if (y1==y2){
            ll len = abs(x2-x1);
            cout<<x2<<" "<<y2+len<<" "<<x1<<" "<<y1+len<<endl;
        }
        else if ((((x2-x1)/(y2-y1)) == 1) | (((x2-x1)/(y2-y1)) == -1)){
            cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}