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

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int initial = 0;
        int current = a[0];
        for(int i = 1; i < n; i++) {
            initial= a[i] - a[i-1];
            if (initial >= current) {
                current = initial;
            }
        }
        // cout<< current;
        int last=k-a[n-1];
    //     if(last>current){
    //         cout<<last<<endl;
    //     }
    //     else if(last*2>current && last*2>=last){
    //         cout<<last*2<<endl;
    //     }
    //     else{
    //         cout<<current<<endl;
    //     }
    // }
    cout<<max(current, 2*last)<<"\n";
    
}
}