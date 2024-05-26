#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
        cin >> s;
        string temp="";
        int counter=1;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1&&s[i]!=s[i-1])
                temp+=s[i];
            else if(s[i]==s[i+1])    
                counter++;
            else
            {
                if(counter%2==1)    
                    temp+=s[i];
                counter=1;
            }
        }
        sort(temp.begin(),temp.end());
        if(temp.empty())
            cout <<temp<<endl;
        
        else
        {
            string res="";
            res+=temp[0];
            for(int i=1;i<temp.size();i++)
            {
                if(temp[i]!=temp[i-1])
                    res+=temp[i];
            }
            cout << res<<endl;
        }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}