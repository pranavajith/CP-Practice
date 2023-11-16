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

int main() 
{
    ll n;
    cout<<"Enter the value of n: ";
    cin>>n;
    string s1, s2, s3;
    for (int i=0; i<n/4; i++){
        s1.append("    *   ");
        s2.append("  *   * ");
        s3.append("*       ");
    }
    n%=4;
    if (n==1){
        s1.append("  ");
        s2.append("  ");
        s3.append("* ");
    }
    else if (n==2){
        s1.append("    ");
        s2.append("  * ");
        s3.append("*   ");
    }
    else if (n==3){
        s1.append("    * ");
        s2.append("  *   ");
        s3.append("*     ");
    }
    cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n";
    return 0;
}