#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    int c = 0;
    for (int i=0;i<n;i++){
        if (i%2==0){
            for (int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            if (c%2==0){
                for (int k=0;k<m-1;k++){
                    cout<<".";
                }
                cout<<"#"<<endl;
                c++;
            }
            else{
                cout<<"#";
                for (int k=0;k<m-1;k++){
                    cout<<".";
                }
                cout<<endl;
                c++;
            }
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}