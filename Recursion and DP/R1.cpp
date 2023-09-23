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

void name(string s, int n, int i){
    if (i==n)return;
    cout<<s<<"\n";
    name(s,n,i+1);
}

void lin(int n, int i){
    if (i>n)return;
    cout<<i<<"\n";
    lin(n,i+1);
}

void linback(int i, int n){
    if (i>n){
        // cout<<i<<"\n";
        return;
    }
    linback(i+1,n);
    cout<<i<<"\n";
}

void sumpara(int i, int sum){
    if (i<1){
        cout<<sum<<"\n";
        return;
    }
    sumpara(i-1,sum+i);
}

int sumfunc(int i){
    if (i==0)return 0;
    return i+sumfunc(i-1);
}

void rev(vector <ll> &v, int l, int r){
    if (l>=r)return;
    swap(v[l],v[r]);
    rev(v, l+1, r-1);
}

bool checkpali(string s, int i, int n){
    if (i==(n+1)/2)return true;
    if (s[i]!=s[n-i-1])return false;
    return checkpali(s,i+1,n);
}

int fibonacci(int n){
    if (n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

void subseq(vector <ll> v, int i, vector <ll> &d){
    if (i==v.size()){
        for (auto w:d)cout<<w<<" ";cout<<"\n";
        return;
    }
    d.push_back(v[i]);
    subseq(v, i+1, d);
    d.pop_back();
    subseq(v, i+1, d);
}
int subseqsum(vector <ll> v, int i, int sum, int k){
    if (sum>k)return 0;
    if (i==v.size()){
        if (sum==k)return 1;
        return 0;
    }
    return subseqsum(v, i+1, sum+v[i], k) + subseqsum(v, i+1, sum, k);
}

int main() 
{
    
    // Printing Names N Times using Recursion
    // name("Pranav",5,0);

    // Printing Linearly from 1-N
    // lin(5,1);

    // Printing Linearly from N-1
    // linback(1,5);

    //Print Sum of first N numbers (Parameter form)
    // sumpara(5,0);

    //Print Sum of first N numbers (Functional form)
    // cout<<sumfunc(5)<<"\n";

    // Reversing an Array 
    // int arr[] = {1,2,3,4,5};
    // vector <ll> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    // rev(v, 0, 4);
    // for (auto d:v)cout<<d<<" ";cout<<"\n";

    // Check Palindrome
    // if (checkpali("PranavaarP", 0, 11))cout<<"YES!\n";
    // else cout<<"NO\n";

    // Fibonacci
    // cout<<fibonacci(4)<<"\n";

    // Print all Subsequences
    // int arr[] = {1,2,3,4,5};
    // vector <ll> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    // vector <ll> d;
    // subseq(v, 0, d);

    // Print all Subsequences who's sum is K
    // int arr[] = {1,2,1,4,1};
    // vector <ll> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    // cout<<subseqsum(v, 0, 0, 2)<<"\n";



    return 0;
}