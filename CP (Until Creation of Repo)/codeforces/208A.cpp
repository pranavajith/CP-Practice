#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s1;
    string s2;
    cin>>s1;
    int count = 0;
    int count2=0;
    s1+="   ";
    ll i = 0;
    while (i<s1.size()){
        if (s1.substr(i,3)=="WUB"){
            count = 0;
            i+=3;
            continue;
        }
        else{
            if (count == 0){
                if (count2==0){
                    s2.append(s1,i,1);
                    count2++;
                }
                count++;
                s2+=" ";
                s2.append(s1,i,1);

            }
            else{
                s2.append(s1,i,1);

            }
        i+=1;
        
    }
    }
    cout<<s2.substr(2,s2.size()-1)<<endl;
}

int main() 
{

        solve();
    
    return 0;
}