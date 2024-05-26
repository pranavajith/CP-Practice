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

void check(int &hh,int &mm,int m){
    int h=m/60;
    //setting hour
    if(hh>=h){
        hh-=h;
    }else{
        h-=hh;
        hh=24-h;
    }
    m=m%60;
    //setting minute
    if(mm>=m){
        mm-=m;
    }else{
        if(hh==0){
            hh=23;
        }else
            hh--;
        mm=60-(m-mm);
    }
 
}

void solve(){
    int x;
    cin>>x;
    int h,m;
    cin>>h>>m;
    int cnt=0;
    while(1){
        int hh=h;
        int mm=m;
        int h1=hh%10; hh/=10;
        int m1=mm%10; mm/=10;
        if(h1==7 || hh==7 || m1==7 || mm==7){
            break;
        }
        check(h,m,x);
        cnt++;
    }
 
    cout<<cnt<<endl;
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