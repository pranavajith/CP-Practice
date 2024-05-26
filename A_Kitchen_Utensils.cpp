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
#include <unordered_set>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    int n, g;
    cin >> n >> g;
    vector<int> u;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        u.push_back(k);
    }
    
    int curr = u[0], cnt = 1;
    unordered_set <int> st;
    st.insert(u[0]);
    
    for(int i = 1; i < n; i++){
        st.insert(u[i]);
        if(u[i] == curr){
            cnt++;
        }
        else{
            cnt--;
            if(cnt == 0){
                curr = u[i];
                cnt++;
            }
        }
    }
    cnt = 0;
 
    for(int i = 0; i < n; i++){
        if(u[i] == curr)
            cnt++;
    }
    int uniq = st.size();
    int req = ceil(float(cnt) / float(g)) * g * uniq;
    cout << req - u.size();
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}