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

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long max1 = INT8_MIN;
        double sum = 0;
        for(int i = 0 ; i < n ;i++){
            long long values;
            cin >> values;
            sum = sum + values;
            max1 = max(max1, values);
        }
        double result = (sum - max1)/(n - 1) + max1;
        cout << fixed << result << endl;
    }
}