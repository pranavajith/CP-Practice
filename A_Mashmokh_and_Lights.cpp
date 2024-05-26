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
   int n,m,a;
   cin>>n>>m;
   vector <int> arr(n+1, 0);
   while(m--){
    cin>>a;
    for(int i=a;i<=n;i++){
        if(arr[i]==0)arr[i]=a;
    }
    
   }
   for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;

}