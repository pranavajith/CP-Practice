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

bool check(ll n){
    string s = to_string(n);
    ll sum1 = 0;
    for (int i=0;i<s.size();i++){
        // if (sum1>=10)break;
        sum1+=s[i]-'0';
        // cout<<s[i];
    }
    if (sum1==10)return true;
    else return false;
}

#include <iostream>
#include <algorithm>
#include <vector>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to find the k-th smallest perfect positive integer
int findKthPerfectNumber(int k) {
    // Digits with a digit sum of 10
    int dig[] = {1,2,3,4,5,6,7,8,9};
    vector<int> digits (dig, dig + 9);

    // Initialize variables
    int n = digits.size();
    std::vector<int> indices(n, 0);
    int result = 0;

    // Iterate through each digit's permutation
    for (int i = n - 1; i >= 0; --i) {
        int idx = k / factorial(i);
        k %= factorial(i);
        result = result * 10 + digits[idx];

        // Update indices for the next iteration
        indices.erase(indices.begin() + idx);
    }

    return result;
}

void solve() {
    int k;
    // std::cout << "Enter the value of k: ";
    cin>>k;
    // std::cin >> k;

    cout<<findKthPerfectNumber(k)<<"\n";

    // std::cout << "The " << k << "-th smallest perfect positive integer is: " << result << std::endl;

    // return 0;
}


// void solve(){
//     ll n, i = 19, k=1;
//     cin>>n;
//     while (true){
//         if (check(i)){
            
//             if (k==n){
//                 cout<<i<<"\n";
//                 break;
//             }
//             else k++;
//             // cout<<"!"<<k;
//         }
//         i++;
//     }
//     // if (check(226))cout<<"YAY!";
// }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}