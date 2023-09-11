#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    int count = 0;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for (int i=0;i<s.size();i++){
        if (s[i]=='h'){
            for (int j=i+1;j<s.size();j++){
                if (s[j]=='e'){
                    for (int k=j+1;k<s.size();k++){
                        if (s[k]=='l'){
                            for (int l=k+1;l<s.size();l++){
                                if (s[l]=='l'){
                                    for (int m = l+1;m<s.size();m++){
                                        if (s[m]=='o' & count==0){
                                            count++;
                                            cout<<"YES"<<endl;

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}