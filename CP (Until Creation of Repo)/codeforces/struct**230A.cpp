// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// #define ll long long

// int check(ll s, vector <ll> life, vector <ll> bonus){
//     if (life.size() == 0){
//         return 1;
//     }
//     auto min = *min_element(life.begin(),life.end());
//     // cout<<min<<endl;
//     auto it = find(life.begin(),life.end(),min);
//     int ind = it - life.begin();
//     // cout<<s+bonus[ind]<<endl<<endl;
    
//     auto it2 = find(bonus.begin(),bonus.end(),bonus[ind]);
//     int ind2 = it2 - bonus.begin();
//     if (s<=min){
//         // cout<<endl<<"lol"<<endl;
//         return 0;
//     }
//     s+=bonus[ind];
//     life.erase(it);
//     bonus.erase(it2);
//     // cout<<endl<<bonus.size()<<endl<<endl;
//     return check(s,life,bonus);
// }



// void solve(){
//     ll s,n;
//     vector <ll> life;
//     vector <ll> bonus;
//     cin>>s>>n;
//     for (int i=0;i<n;i++){
//         ll life1, bonus1;
//         cin>>life1>>bonus1;
//         life.push_back(life1);
//         bonus.push_back(bonus1);
//     }
//     if(check(s,life,bonus)){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }


// }

// int main() 
// {

//         solve();
    
//     return 0;
// }


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

struct Dragon {
    ll strength;
    ll bonus;
};

bool compareDragons(const Dragon &a, const Dragon &b) {
    return a.strength < b.strength;
}

void solve() {
    ll s, n;
    cin >> s >> n;

    vector<Dragon> dragons(n);
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }

    sort(dragons.begin(), dragons.end(), compareDragons);

    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].strength) {
            cout << "NO" << endl;
            return;
        }
        s += dragons[i].bonus;
    }

    cout << "YES" << endl;
}

int main() {
    solve();
    return 0;
}
