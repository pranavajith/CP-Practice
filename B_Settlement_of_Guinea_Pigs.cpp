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
    int k;
        cin>>k;
        int num_of_cages = 0;
        int num_of_empty = 0;
        int n = 0;
        int first_pig = 0;
        for(int i = 0;i < k;i++){
            int temp;
            cin>>temp;
            if(temp == 1){first_pig++;}
            if(!first_pig){}
            else{
            if(temp == 1){
                n++;
                if(num_of_empty){num_of_empty--;num_of_cages++;}
                else{num_of_cages++;}
            }else{
                num_of_empty = (num_of_cages+num_of_empty) - ((n+2)/2);
                num_of_cages = (n+2)/2;
            }
        }
        }
        cout << num_of_cages+num_of_empty << "\n";
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