#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

int check_if(int square[6][6],int i, int j){
    for (int w=1;w<3;w++){
        if (square[i+1][j]==w && square[i+1][j+1]==w && square[i][j+1]==w){
            return 1;
        }
        else if(square[i-1][j]==w && square[i-1][j-1]==w && square[i][j-1]==w){
            return 1;
        }
        else if(square[i-1][j]==w && square[i-1][j+1]==w && square[i][j+1]==w){
            return 1;
        }
        else if(square[i+1][j]==w && square[i+1][j-1]==w && square[i][j-1]==w){
            return 1;
        }
    }
    return 0;
}

void solve(){
    int square[6][6] = {{0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0}};
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            char a;
            cin>>a;
            if (a=='#'){
                square[i+1][j+1]=2;
            }
            else{
                square[i+1][j+1]=1;
            }
        }
    }
    ll count1=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            count1++;
            if(check_if(square,i+1,j+1)){
                // cout<<"YES"<<endl;
                count1+=100;
                break;
            }
        }
    }
    if (count1==16){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}