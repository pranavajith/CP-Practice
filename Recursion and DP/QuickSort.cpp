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

int pivot(vector <ll> &v, int low, int high){
    int p = v[low];
    int i=low;
    int j=high;
    while (i<j){
    while (v[i]<=p && i<=high-1)i++;
    while (v[j]>p && j>=low+1)j--;
    if (i<j)swap(v[i],v[j]);
    }
    swap(v[j],v[low]);
    return j;
}

void QuickSort(vector <ll> &v, int low, int high){
    if (low>=high)return;
    int partition = pivot(v, low, high);
    QuickSort(v, low, partition-1);
    QuickSort(v, partition+1, high);
}

int main() 
{
    int arr[] = {5,4,4,3,2,1};
    vector <ll> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    QuickSort(v,0,v.size()-1);
    for (auto d:v)cout<<d<<" ";cout<<"\n";
    return 0;
}