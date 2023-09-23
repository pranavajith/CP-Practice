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

void merge(vector <ll> &v, int low, int mid, int high){
    vector <ll> temp;
    ll l = low, r = mid+1;
    while (l<=mid && r<=high){
        if (v[l]<=v[r])temp.push_back(v[l++]);
        else temp.push_back(v[r++]);
    }
    while (l<=mid)temp.push_back(v[l++]);
    while (r<=high)temp.push_back(v[r++]);

    for (int i=0;i<temp.size();i++){
        v[low + i]=temp[i];
    }
}

void mergeSort(vector <ll> &v, int low, int high){
    if (low>=high)return;
    ll mid = (low+high)/2;
    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);
    merge(v, low, mid, high);
}

int main() 
{
    int arr[] = {5,4,4,3,2,1};
    vector <ll> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    mergeSort(v, 0, v.size()-1);
    for (auto d:v)cout<<d<<" ";cout<<"\n";
    return 0;
}