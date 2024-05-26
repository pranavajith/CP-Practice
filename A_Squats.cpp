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

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int cnt_X = 0, cnt_x = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'X') {
            cnt_X++;
        } else {
            cnt_x++;
        }
    }
    
    if (cnt_X == n / 2 && cnt_x == n / 2) {
        cout << "0\n" << s << endl;
    } else {
        int changes = abs(cnt_X - cnt_x) / 2;
        cout << changes << endl;
 
        if (cnt_X > cnt_x) {
            for (int i = 0; i < n && changes > 0; i++) {
                if (s[i] == 'X') {
                    s[i] = 'x';
                    changes--;
                }
            }
        } else {
            for (int i = 0; i < n && changes > 0; i++) {
                if (s[i] == 'x') {
                    s[i] = 'X';
                    changes--;
                }
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}