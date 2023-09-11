#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if (s.size()==2 && s!="11"){
        cout<<"NO"<<"\n";
    }
    else{
        vector <ll> v1;
        ll count1=0, count2=0;
        for (int i=0;i<n;i++){
            if (s[i]=='1'){
                count1++;
            }
            else if (s[i]=='2'){
                count2++;
                v1.push_back(i);
            }
        }
        // for (int i=0;i<v1.size();i++)cout<<v1[i]<<" ";cout<<"\n";
        if (count2==1 || count2==2){
            cout<<"NO"<<"\n";
        }

        else{
            cout<<"YES"<<"\n";
            vector <vector <char> > v_big;
            for (int i=0;i<n;i++){
                vector <char> temp(n,'-');
                v_big.push_back(temp);
            }

            if (v1.size()!=0){
            for (int i=0;i<v1.size()-1;i++){
                // cout<<v1[i]<<" "<<v1[i+1]<<"\n";
                v_big[v1[i]][v1[i+1]]='+';
            }
            v_big[v1[v1.size()-1]][v1[0]]='+';
            }

            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    if (i==j){
                        v_big[i][j]='X';
                    }
                    else if (s[i]=='1' || s[j]=='1'){
                        v_big[i][j]='=';
                    }
                    else if (v_big[j][i]=='-'){
                        v_big[i][j]='+';
                    }
                    else if (v_big[j][i]=='+'){
                        v_big[i][j]='-';
                    }
                }
            }

            for (auto d:v_big){
                for (auto e:d){
                    cout<<e;
                }
                cout<<"\n";
            }



        // for (int i=0;i<n;i++){
        //     for (int j=0;j<n;j++){
        //         if (i==j){
        //             cout<<'X';
        //         }
        //         else if (s[i]=='1' || s[j]=='1'){
        //             cout<<'=';
        //         }
        //         else{
        //             if (i>j/2)cout<<'+';
        //             else cout<<'-';
        //         }
        //     }
        //     cout<<"\n";
        // }
        }
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