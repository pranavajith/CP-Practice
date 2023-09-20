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

void solve(){
    long long int n,c,d, duplisum = 0;
    cin>>n>>d>>c;
    vector <long long int> v;
    map <long long int,long long int> m;
    for (int i=0;i<n;i++){
        long long int a;
        cin>>a;
        if (m[a])duplisum+=d;
        else{
            m[a]++;
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    long long int i = 0;
    n=v.size();
    while (i!=n && i+1==v[i])i++;
    if (i==n)cout<<duplisum<<"\n"; 
    else{
        // i--;
        long long int fin=0;
        if (i!=0)fin = (n-i)*d;
        else fin = n*d + c;
        long long int pointer = i;
        long long int temp = fin;
        while (pointer!=n){
            // long long int temp;
            // if (pointer == 0){
            //     temp = d*n;
            // }
            // else{
                temp += (v[pointer]-v[pointer-1]-1)*c - d;
            // }
            if (fin <= temp)break;
            fin = temp;
            pointer++;
        }
        cout<<fin+duplisum<<"\n";
        // cout<<duplisum<<"!!!\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    long long int t; cin>>t; while(t--)
        solve();
    return 0;
}