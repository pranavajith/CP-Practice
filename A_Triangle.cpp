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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if( (a+b>c && a+c>b && b+c>a ) || (a+b>d&&a+d>b&&b+d>a) || (a+c>d&&a+d>c&&c+d>a) || (b+c>d&&c+d>b&&b+d>c)){
    	cout<<"TRIANGLE";
	}
	else if( (a+b==c||a+c==b||b+c==a) || (a+b==d||a+d==b||b+d==a) || (a+d==c||a+c==d||d+c==a) || (a+b==d||a+d==b||b+d==a) || (d+b==c||d+c==b||b+c==d) ){
		cout<<"SEGMENT";
	}
	else{
		cout<<"IMPOSSIBLE";
	}

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