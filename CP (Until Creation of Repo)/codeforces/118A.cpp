#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s1;
    cin>>s1;
    vector<char> v;
    v.push_back('a');
    v.push_back('e');
    v.push_back('i');
    v.push_back('o');
    v.push_back('u');
    v.push_back('y');

    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    for (int i=0;i<s1.size();i++){
        if (find(v.begin(),v.end(), s1[i]) != v.end()){
            continue;
        }
        cout<<"."<<s1[i];
    }
    cout<<endl;
}

int main() 
{

        solve();
    
    return 0;
}