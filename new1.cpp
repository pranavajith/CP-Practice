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


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // int a = 1<<5;
    // cout<<((12>>2)<<2);
    // cout<<(__builtin_popcount(12));
    int a = 5, b = 4;
    a= a^b;
    b= a^b;
    a= a^b;
    cout<<a<<" "<<b;
}