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

// class PQ
// {
//     int siz, iter;
//     vector <int> v;
//     public:
//         PQ(int s){
//             v.resize(s);
//             siz = s;
//             iter = 0;
//         }
//         bool enqueue (int a){
//             if (iter == siz) return false;
//             v[iter] = a;
//             int temp = iter-1;
//             while (temp && v[temp]>v[temp+1]) {
//                 swap(v[temp], v[temp+1]); temp--;
//             }
//             iter++;
//             return true;
//         }
//         bool deque (){
//             if (iter == 0) return false;
//             iter--;
//             return true;
//         }
//         void printQ(){
//             for (int i=0; i<iter; i++){
//                 cout<<v[i]<<" ";
//             }
//             cout<<"\n";
//         }
// };

// int countSubStrings(string str, int k) 
// {
//    int cnt = 0, n = str.size();
//    vector <int> check(26, 0);
//    int left = 0, right = 0;
//    int ans = 0;
//    while (right < n) {
//        int temp1 = 1, temp2 = 0;
//        while (right < n && cnt < k) {
//          check[str[right] - 'a']++;
//          if (check[str[right] - 'a'] == 1) cnt++;
//          right++;
//        }
//        if (cnt < k) break;
//        while (right < n && check[str[right] - 'a']) {
//            temp1++; right++;
//        }
//        while (cnt==k){
//            temp2++;
//            check[str[left]-'a']--;
//            if (check[str[left]-'a'] == 0) cnt--;
//            left++; 
//        }
//        ans += temp1*temp2;
//        cout<<ans<<"\n";
//    }
//    return ans;
// }

class PQ
{
    public:
        vector <ll> v;
        PQ() {}
        void add(ll x){
            v.push_back(x);
            ll iter = v.size()-1;
            while (iter != 0){
                int par = (iter-1)/2;
                if (v[par] >= v[iter]) break;
                swap(v[par], v[iter]);
                iter = par;
            }
        }
        ll pop(){
            if (v.empty()) return -1;
            ll end = v.size()-1;
            swap(v[0], v[end]);
            ll ans = v[end];
            v.pop_back();
            ll i = 0;
            while (i<v.size()){
                int largest = i, lc = 2*i+1, rc = 2*i+2;
                if (rc < v.size() && v[rc] > v[largest]) largest = rc;
                if (lc < v.size() && v[lc] > v[largest]) largest = lc;
                if (largest == i) break;
                swap (v[largest], v[i]);
                i = largest;
            }
            return ans;
        }
        void printAll(){
            for (auto d:v) cout<<d<<" "; cout<<"\n";
        }

};


void solve(){
    PQ p;
    p.add(5);
    p.add(4);
    p.add(3);
    p.add(2);
    p.add(1);
    p.printAll();
    // cout<<p.pop()<<" !\n";
    p.pop();
    p.pop();
    p.printAll();
    // countSubStrings("urrrzaxxxhjjquooxzgwzpppavcfaxeefnggtsii", 5);
    // PQ p(5);
    // p.enqueue(1);
    // p.enqueue(5);
    // p.enqueue(4);
    // p.enqueue(3);
    // p.enqueue(2);
    // // if (!p.enqueue(6)) cout<<"Overflow";
    // p.printQ();
    // p.deque();
    // p.deque();
    // p.deque();
    // p.deque();
    // p.deque();
    // if (!p.deque()) cout<<"underfow";
    // p.deque();
    // p.printQ();
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