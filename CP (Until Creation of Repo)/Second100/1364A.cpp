#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
#define MOD 1000000007
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// void solve(){
//     ll n,x, sum=0,len_sub=0,count_x=0;
//     cin>>n>>x;
//     vector <ll> v;
//     for (int i=0;i<n;i++){
//         ll a;
//         cin>>a;
//         sum+=a;
//         len_sub++;
        
//         if (sum%x==0){
//             count_x++;
//             // cout<<len_sub<<" "<<sum<<endl;
//             len_sub=1;
//             sum=a;
//         }
//         v.push_back(len_sub);

//         // if (a==x){
//         //     count_x++;
//         // }
//     }
//     v.push_back(len_sub);
//     // if (count_x==n){
//     //     cout<<
//     // }
//     // cout<<endl;
//     ll sol = *max_element(v.begin(),v.end());
//     if (count_x!=n)cout<<sol<<endl;
//     else cout<<-1<<endl;
// }

void solve()
	{
		int n, x;
		cin >> n >> x;
		vector<int> v(n);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		if (sum % x != 0)cout << n << endl;
		else 
       	    {
			int ans = -1;
			for (int i = 0; i < n; i++)
			{
                // cout<<ans<<" "<<i<<" "<<n-i-1<<endl;
				if (v[i] % x)
					ans = max(ans, max(i, n - i - 1));
                    // cout<<"YES"<<endl;
	        }
			cout << ans << endl;
		}
	}


int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}