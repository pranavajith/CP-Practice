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



    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size(); int cols = grid[0].size();
        for (int i = 0; i<rows; i++){
            if (grid[i][0]==0){
                for (int j = 0; j<cols; j++)grid[i][j]=1-grid[i][j];
            }
        }
        int ans = rows * pow(2, cols-1);
        // for (int i = 0; i<cols; i++){
        //     ans*=2;
        // }
        for (int i=1; i<cols; i++){
            int count1=0;
            for (int j=0; j<rows; j++){
                if (grid[i][j]==1)count1++;
            }
            if (count1<rows/2)count1 = rows-count1;
            ans+=rows*pow(2, cols-1-count1);
        }
        return ans;
    }


void solve(){

}


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}