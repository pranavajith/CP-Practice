#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll count_white=0,count_black=0;
    for (int i=0;i<64;i++){
        char c;
        cin>>c;
            if (c=='Q'){
                count_white+=9;
            }
            else if (c=='R'){
                count_white+=5;
            }
            else if (c=='B'){
                count_white+=3;
            }
            else if (c=='N'){
                count_white+=3;
            }
            else if (c=='P'){
                count_white+=1;
            }
            else if (c=='q'){
                count_black+=9;
            }
            else if (c=='r'){
                count_black+=5;
            }
            else if (c=='b'){
                count_black+=3;
            }
            else if (c=='n'){
                count_black+=3;
            }
            else if (c=='p'){
                count_black+=1;
            }
    }
    if (count_black>count_white){
        cout<<"Black"<<endl;
    }
    else if (count_black<count_white){
        cout<<"White"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}