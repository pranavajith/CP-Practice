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
 
int main()
{
    int n; cin>>n;
 
    vector <int> v;
 
    for(int i=0; i<n; i++)
    {
        int k; cin>>k;
        v.push_back(k);
    }
 
    sort(v.begin(),v.end());
 
    // Why aren't you checking if 0 is in the list or not? If not then 0 should be the answer. 
    // ie: if v[0]!=0, cout<<0<<"\n";

    if(v.size()==1)
    cout << v[0]+1 << '\n';
    // Not sure if there is a need to check for this condition above...
    else
    {
        // What about if the input is 0,1,2,3,4? It won't print anything.... Have a condition for that as well.
        for(int i=1; i<n; i++)
        {
            if(v[i]!=v[i-1]+1 && v[i]!=v[i-1])
            {
                cout << v[i-1]+1 << '\n';
                break;
            }
            else continue;
        }
    }
    
 
    return 0;
}