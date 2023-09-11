#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define long long long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

vector<long long> solve(long long N, vector<long long> A,long long M,vector<long long> Q){
    // long long p[N];
    // p[0]=A[0];
    // vector<long long> v(M,-1);
    // for(long long i=1;i<N;i++){
    //     p[i]=A[i]+p[i-1];
    // }
    vector <long long> sol;
    vector <pair <long long,long long> > checkable;
    if (A[0]>=0){
        pair <long long,long long> p;
        p.first=A[0];
        p.second=0;
        checkable.push_back(p);
    }
    long long max1=A[0], min1 = A[0];
    for (long long i=1;i<N;i++){
        A[i]+=A[i-1];
        max1=max(A[i],max1);
        min1=min(A[i],min1);
        if (A[i]>=0){
            pair <long long,long long> p;
            p.first = A[i];
            p.second = i;
            checkable.push_back(p);
        }
    }
    // for (auto d:A)cout<<d<<" ";cout<<"\n";
    // for (auto d:checkable)cout<<d.second<<" ";cout<<"\n";
    for(long long i=0;i<M;i++){
        if (Q[i]>max1 || Q[i]<min1)sol.push_back(-1);
        else{
            for (auto d:checkable){
                if (Q[i]<=d.first){
                    sol.push_back(d.second+1);
                    // cout<<d.second+1<<"hey! ";
                    break;
                }
            }
        }
    }
    // for (auto d:sol){
    //     cout<<d<<" ";
    // }
    return sol;
}

int main() 
{
    // TxtIO;
    long long t=1;
    // cin>>t;
    vector <long long> v; 
    v.push_back(10);
    v.push_back(-50);
    v.push_back(53);
    v.push_back(-7);
    v.push_back(12);
    vector <long long> q; 
    q.push_back(14);
    q.push_back(1);
    q.push_back(20);
    while(t--){
        solve(5, v, 3, q);
    }
    return 0;
}