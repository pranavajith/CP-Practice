#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
#define ll long long

void solveTestCase()
{
    ll n, k;
    cin >> n >> k;

    for (ll j = k; j > 0; j--)
    {
        if (n % j == 0)
        {
            cout << n / j << endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}