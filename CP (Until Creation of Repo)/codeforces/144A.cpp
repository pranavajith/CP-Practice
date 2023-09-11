#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }

    ll max = v[0];
    ll max_ind = 0;
    ll min = v[0];
    ll min_ind = 0;
    
    for (int i=1;i<n;i++){
        if (v[i]<=min){
            min = v[i];
            min_ind = i;

    }

    for (int i=n-1;i>-1;i--){
        if (v[i]>=max){
            max = v[i];
            max_ind = i;
        }
        }
    }
    // cout<<min_ind<<" "<<max_ind<<endl;
    int c = 0;
    if (min_ind < max_ind){
        c=1;
    }

    cout<<n-1-min_ind+max_ind-c<<endl;






    // ll mx = *max_element(v.begin(),v.end());
    // ll mn = *min_element(v.begin(),v.end());

    // ll ind_max = find(v.begin(),v.end(),mx) - v.end();
    // ll ind_min = find(v.begin(),v.end(),mn) - v.end();


    
    // cout<<ind_max+v.size()-ind_min-1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}