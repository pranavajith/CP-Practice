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

void merge (vector <ll> &v, int low, int mid, int high){
    vector <ll> temp;
    ll left = low, right = mid+1;
    while (left<=mid && right<=high){
        if (v[left]<v[right]){
            temp.push_back(v[left]);left++;
        }
        else {temp.push_back(v[right]);right++;
        }
    }
    while (left<=mid){
            temp.push_back(v[left]);left++;
    }
    while (right<=high){
            temp.push_back(v[right]);right++;
    }
    for (int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
        
}

void mergeSort(vector <ll> &v, int low, int high){
    // cout<<"h1";
    if (low==high)return;
    ll mid = (low+high)/2;
    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);
    merge(v, low, mid, high);
}


void solve(){
    // int arr[] = {2,3,4,5,1,2,6,3,4,2,3,6,1};
    int arr1[] = {2,3,4,5,1,2,6,3,4,2,3,6,1};
    vector <ll>  v(arr1,arr1+13);
    mergeSort(v, 0 ,v.size()-1);
    for (auto d:v)cout<<d<<" ";
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