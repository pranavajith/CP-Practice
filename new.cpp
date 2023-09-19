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


#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ll long long

int main()
{
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while (k--)
    {
        int ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;
        int tc, fc1, fc2, fm;

        fc1 = max(max(0, (a - fa)), (fa - b));
        if (fc1 == 0)
        {
            fm = fa;
        }

        else if (fc1 == a - fa)
        {
            fm = fa + fc1;
        }

        else
        {
            fm = fa - fc1;
        }

        fc2 = abs(fm - fb);

        tc = tb - ta;

        cout << tc + fc1 + fc2 << endl;
    }
    return 0;
}
