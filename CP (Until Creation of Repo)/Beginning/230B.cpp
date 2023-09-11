#include <bits/stdc++.h>
#include <iostream>
// #include <set>
// #include <cmath>
// #include <map>
using namespace std;
#define ll long long

// void solve(){
//     ll n;
//     cin>>n;
//     ll ar[n];
//     for (int i=0;i<n;i++){
//         ll d,count1=0;
//         cin>>d;
//         for (int i=2;i<d/2+1;i++){
//             if (d%i==0){    
//                 count1++;
//                 if (count1>1){
//                 break;
//             }
//             }
            
//         }
//         if (count1==1){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// int main() 
// {

//         solve();
    
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// bool isTPrime(ll n) {
//     if (n <= 3) return false;
    
//     // Check if the square root of n is a prime number
//     ll sqrt_n = sqrt(n);
//     if (sqrt_n * sqrt_n != n) return false;
    
//     // Count divisors
//     ll count_divisors = 2; // 1 and n
//     for (ll i = 2; i * i <= sqrt_n; i++) {
//         if (n % i == 0) {
//             count_divisors += 2; // Count both divisors (i and n/i)
//             if (count_divisors > 3) return false;
//         }
//     }
    
//     return true;
// }

// void solve() {
//     ll n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         ll d;
//         cin >> d;
//         if (isTPrime(d)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }

// int main() {
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) {

    if (n==2 || n==3) return true;
    
    for (ll i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) return false;
    }
    
    return true;
}

void solve() {
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll d;
        cin >> d;
        if (d==1 || d==2){
            cout<<"NO"<<endl;
        }
        else if (isPrime(sqrt(d)) && sqrt(d) * sqrt(d) == d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}

