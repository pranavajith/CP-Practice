#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    char x_dir, y_dir;
    if ((x2-x1)>0){
        x_dir = 'E';
    }
    else{
        x_dir = 'W';
    }
    if ((y2-y1)>0){
        y_dir = 'N';
    }
    else{
        y_dir = 'S';
    }
    for (int i=0;i<n;i++){
        if (s[i]==x_dir && x1!=x2){
            x1+=(x2-x1)/abs(x2-x1);
        }
        else if (s[i]==y_dir && y1!=y2){
            y1+=(y2-y1)/(abs(y2-y1));
        }
        if (x1==x2 && y1==y2){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;

}

int main() 
{

        solve();
    
    return 0;
}