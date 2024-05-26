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

int cmp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

void solve(){
    long long int t,n,c=0;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[2*n];
        for(int j=0;j<2*n;j++)
        {
            scanf("%lld",&a[j]);
        }
        qsort(a,2*n,sizeof(long long int),cmp);
        c=a[n]-a[n-1];
        printf("%lld\n",c);
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