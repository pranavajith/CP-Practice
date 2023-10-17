#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool sorta(vector <ll> a, vector <ll> b){
    return a[0] > b[0];
}
bool sortb(vector <ll> a, vector <ll> b){
    return a[1] > b[1];
}
bool sortc(vector <ll> a, vector <ll> b){
    return a[2] > b[2];
}
bool sortd(vector <ll> a, vector <ll> b){
    return a[3] > b[3];
}
bool sorte(vector <ll> a, vector <ll> b){
    return a[4] > b[4];
}

void solve(){
    ll n;
    cin>>n;
    // vector <string> v;
    vector <vector <ll> > vbig;
    // map <string, vector <ll> > m;
    for (int i=0; i<n; i++){
        string s;
        cin>>s;
        // v.push_back(s);
        vector <ll> temp;
        // temp.push_back(s.size());
        ll lol = s.size();
        for (int j=0; j<5; j++){
            char c = 'a'+j;
            ll countc = count(s.begin(), s.end(), c);
            temp.push_back(2*countc-lol);
        }
        // m[s]=temp;
        vbig.push_back(temp);
    }
    ll ans = 0;
    for (int i=0; i<5; i++){
        ll curans = 0, loop = 0;
        if (i==0)sort(vbig.begin(), vbig.end(), sorta);
        else if (i==1)sort(vbig.begin(), vbig.end(), sortb);
        else if (i==2)sort(vbig.begin(), vbig.end(), sortc);
        else if (i==3)sort(vbig.begin(), vbig.end(), sortd);
        else if (i==4)sort(vbig.begin(), vbig.end(), sorte);
        for (int j=0; j < vbig.size(); j++){
            loop += vbig[j][i];
            if (loop<=0)break;
            curans++;
        }

        
        // // if (i==1)
        // // {
        //     cout<<char('a'+i-1)<<" : \n"; 
        // for (auto d:vbig){
        //     for (auto d1:d)cout<<d1<<" ";cout<<"\n";
        // }
        // // }
        // ll countc = 0, countother = 0;
        // for (int j=0; j<vbig.size(); j++){
        //     // cout<<"hey!";
            
        //     countc+=vbig[j][i]; countother+=vbig[j][0]-vbig[j][i];
        //     if (countc <= countother)break;
        //     curans++;
        //     if (i==4)cout<<countc<<" "<<countother<<" okay!\n";
            
        // }
        
        ans = max(ans, curans);
    }
    cout<<ans<<"\n";
    // cout<<"\n";
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