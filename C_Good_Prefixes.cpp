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
     int n;
        cin >> n;
        long long int arr[n];
        long long int arr1[n];
        for (int i=0; i<n; i++)arr1[i] = 0;
        long long int sum = 0;
        for(long long int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long int count = 0;
        long long int l = arr[0];
        for(long long int i=0;i<n;i++){
            sum = sum + arr[i];
            l = max(l,arr[i]);
            if(2*l == sum){
                count++;
            }
        }
        cout << count << endl;
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