#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

int getXOR(int x, int y){
    return (x | y) & (~x | ~y);
}


int main() 
{
    //     int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    // int n = sizeof(arr)/sizeof(arr[0]); 
    // vector<int> vect(arr, arr+n); 
  
    // cout << "Distance between first to max element: ";  
    // cout << distance(vect.begin(), 
    //                  max_element(vect.begin(), vect.end()))<<"\n";
    // cout<<*max_element(vect.begin(), vect.end());
    // return 0;

    // ll n = 2;
    // n+=0.5;
    // cout<<n+0.5;
    // float a = 2.5;
    // int b = a;
    // cout<<b;


    // vector <ll> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // // cout<<v.size()<<endl;
    // // for (auto d:v)cout<<d<<" ";
    // // cout<<endl;
    // // v.erase(v.begin()+1,v.begin()+2);
    // // cout<<v.size()<<endl;
    // // for (auto d:v)cout<<d<<" ";
    // // cout<<endl;
    // // cout<<find(v.begin(),v.end(),90)-v.begin()<<"\n";
    // cout<<"h1"<<"\t\t"<<"everyone!";
    // char s = '0';
    // cout<<s-'0';
    ll a = 1;
    cout<<floor(log10(a)+1);
}