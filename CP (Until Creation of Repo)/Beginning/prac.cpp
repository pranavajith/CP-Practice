#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <map>
#define ll long long
using namespace std;

int dec_to_ter(ll a){
    ll s=0;
    while (a){
        s=s*10 + (a%3);
        a/=3;
    }
    ll s_rev=0;
    ll lol = floor(log10(s-1)+1);
    for (int i=0;i<lol;i++){
        s_rev = s%10 + 10*s_rev;
        s/=10;
    }
    return s_rev;
}

int ter_to_dec(ll a){
    ll s=0;
    ll lol = floor(log10(a-1)+1);
    for(int i=0;i<lol;i++){
        s+=pow(3,i)*(a%10);
        a/=10;
    }
    return s;
}

int subtr_ter(ll c, ll a){
    string sc;
    ll c_copy=c, a_copy=a, s=0;
    ll max_len = max(floor(log10(c-1)+1), floor(log10(a-1)+1));
    for (int i=0;i<max_len;i++){
        int a1,c1;
        if (i>=c_copy){
            c1=0;
        }
        else{
            c1=c%10;
            c/=10;
        }
        if (i>=a_copy){
            a1=0;
        }
        else{
            a1=a%10;
            a/=10;
        }
        if (a1==0){
            s=s*10 + c1;
        }
        else if (c1==a1){
            s*=10;
        } 
        else if ((c1==2 && a1==1) || ((c1==1 && a1==0))){
            s=s*10 + 1;
        }
        else if ((c1==1 && a1==2) || ((c1==0 && a1==1))){
            s=s*10 + 2;
        }


        // string x,y;
        // if (i>floor(log10(c-1)+1)-1){
        //     x="0";
        // }
        // else{
        //     if (c%10==0){
        //         sc.append("0");
        //         c/=10;
        //     }
        //     else if (c%10==1){
        //         sc.append("1");
        //         c/=10;
        //     }
        //     else if (c%10==2){
        //         sc.append("2");
        //         c/=10;
        //     }
        // }
        // if (i>floor(log10(a-1)+1)-1){
        //     y="0";
        // }
        // else{
        //     if (a%10==0){
        //         sa.append("0");
        //         c/=10;
        //     }
        //     else if (a%10==1){
        //         sa.append("1");
        //         a/=10;
        //     }
        //     else if (a%10==2){
        //         sa.append("2");
        //         a/=10;
        //     }
        // }
    }
    ll s_rev=0;
    ll lol = floor(log10(s-1)+1);
    for (int i=0;i<lol;i++){
        s_rev = s%10 + 10*s_rev;
        s/=10;
    }
    return s_rev;
    // return 0;
}

// int is_distinct(ll a){
//     ll b = floor(log10(a)+1);
//     set <ll> s;
//     for (int i=0; i<b;i++){
//         s.insert(a%10);
//         a/=10;
//     }
//     if (s.size()==b){
//         return 1;
//     }
//     return 0;
// }

int main(){
    // string s = "";
    // s.insert(2,"Hello!");
    // cout<<s;
    // s.insert(2,"abcdef!");
    // cout<<s;

    // vector <int> v;
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(2);
    // v.insert(v.begin(),1);


    // vector <ll> v1;
    // vector <ll> v2;
    // for (int i=0;i<5;i++){
    //     v1.push_back(i);
    //     v2.push_back(i);
    // }

    // for (int i=0;i<5;i++){
    //     cout<<v1[i]<<" "<<v2[i]<<endl;
    // }

    // v2[1]=3;
    // cout<<v2[1];

    // string s1 = "Hello";
    // cout<<s1.substr(1,1);

    // cout<<ceil(10.6/2);
    // float i = 5.2;
    // cout<<int(i);
    
    // cout<<10*(-100003/100)<<endl;

    // vector <ll> v;
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(38);
    // v.push_back(4);
    // v.push_back(5);
    // auto t = *min_element(v.begin(), v.end());
    // cout<<t<<endl;
    // auto it = find(v.begin(), v.end(), t);
    // cout<<int(it-v.begin())<<endl;

    // vector <ll> v;
    // v.push_back(5);
    // v.push_back(7);
    // v.pop_back();
    // v.pop_back();
    // cout<<v.size();

    // cout<<floor(log10(107)+1);

    // ll a = 2013;
    // cout<<is_distinct(a);
    // cout<<"!"+"+";

    // map <ll,ll> m;
    // m[4]=11;
    // m[3]=2;

    // auto it = m.begin();
    // while (it!=m.end()){
    //     cout<<it->second<<" ";
    //     it++;
    // }

    // string s1;
    // s1 = "ABCDEF";
    // s1[0],s1[1]=s1[1],s1[0];
    // cout<<s1[0]<<" "<<s1[1]<<endl;

    // ll n = 5014325675;
    // cout<<floor(log10(n-1)+1);

    // ll n = 110010;
    // cout<<int(n/(pow(10,2)))*pow(10,1)<<endl;

    // char c;
    // c='2';
    // cout<<c-'0';
    // ll s=0;
    // for (int i=1;i<9;i++){
    //     s+=i*(i);
    // }
    // cout<<s<<endl;
    // int a[3]={3,2,1};
    // int b[3];
    // copy(a,a+3,b);
    // sort(b,b+3);
    // for (auto d:a){
    //     cout<<d<<" ";
    // }
    // cout<<endl;
    // for (auto d:b){
    //     cout<<d<<" ";
    // }
    // cout<<endl;

    // cout<<abs((-2))%3<<endl;

    // int arr[] = {1,2,3,4,5};
    // cout<<*max_element(arr,arr+5);

    // ll a = dec_to_ter(14);
    // cout<<a<<endl;

    // ll a = ter_to_dec(1212);
    // cout<<a<<endl;

    // ll a = subtr_ter(1021, 1212);
    // cout<<a<<endl;
    ll a=5;
    ll b=2;
    cout<<double(a)/b;
    }

    

    
    
    

    

