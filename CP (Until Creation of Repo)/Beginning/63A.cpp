#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool sort_str(vector <string> v1, vector <string> v2){
    return v1[1] < v2[1];
}

void solve(){
    ll n;
    cin>>n;
    vector < vector <string> > v(n), v_new(n);
    for (int i=0;i<=n;i++){
        string s,t;
        getline(cin,s);
        stringstream X(s);
        vector <string> v1;
        while(getline(X,t,' ')){
            v1.push_back(t);
        }
        v.push_back(v1);
    }
    // cout<<v.size()<<endl;
    for (auto d:v){
        vector <string> v_string(2);
        v_string.push_back(d[0]);
        if (d[1]=="rat"){
            v_string.push_back("0");
        }
        else if (d[1]=="woman" || d[1]=="child"){
            v_string.push_back("1");
        }
        else if (d[1]=="man"){
            v_string.push_back("2");
        }
        else if (d[1]=="captain"){
            v_string.push_back("3");
        }
        v_new.push_back(v_string);
    }
    sort(v_new.begin(),v_new.end(),sort_str);

    for (auto d:v_new){
        cout<<d[0]<<endl;
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}