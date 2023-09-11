#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int toggle(int a){
    if (a==1)return 0;
    return 1;
}

void solve(){
    vector < vector <int> > v;
    for (int i=0;i<5;i++){
        vector <int> v1;
        for (int j=0;j<5;j++){
            v1.push_back(1);
        }
        v.push_back(v1);
    }

    vector < vector <int> > v_new;
    for (int i=0;i<3;i++){
        vector <int> v1_new;
        for (int j=0;j<3;j++){
            int m;
            cin>>m;
            v1_new.push_back(m);
        }
        v_new.push_back(v1_new);
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<v_new[i][j];k++){
                v[i+1][j+1]=toggle(v[i+1][j+1]);
                v[i+1][j]=toggle(v[i+1][j]);
                v[i][j+1]=toggle(v[i][j+1]);
                v[i+2][j+1]=toggle(v[i+2][j+1]);
                v[i+1][j+2]=toggle(v[i+1][j+2]);
            }
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<v[i+1][j+1];
        }
        cout<<endl;
    }
    
}

int main() 
{
        solve();
    
    return 0;
}