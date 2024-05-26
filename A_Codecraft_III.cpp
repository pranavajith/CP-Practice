#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string cm;
	cin >> cm;
	int m;
 
		if(cm == "January")
		{m = 1;}
		if(cm == "February")
		{m = 2;}
		if(cm =="March")
		{m = 3;}
		if(cm =="April")
		{m = 4;}
		if(cm == "May")
		{m = 5;}
		if(cm == "June")
		{m = 6;}
		if(cm == "July")
		{m = 7;}
		if(cm == "August")
		{m = 8;}
		if(cm == "September")
		{m = 9;}
		if(cm == "October")
		{m = 10;}
		if(cm == "November")
		{m = 11;}
		if(cm == "December")
		{m = 12;}
 
	int k; 
	cin >> k;
 
    m += k % 12;
    if(m!=12) {m = m %12;}
 
	// if(k >= 12)
	// {
	// 	m += k % 12;
	// }
 
	// else {m += k;}
 
	switch(m)
	{
		case 1:
		cout << "January";break;
		case 2: 
		cout << "February";break;
		case 3:
		cout << "March";break;
		case 4:
		cout << "April";break;
		case 5:
		cout << "May";break;
		case 6: 
		cout << "June";break;
		case 7:
		cout << "July";break;
		case 8:
		cout << "August";break;
		case 9:
		cout << "September";break;
		case 10:
		cout << "October";break;
		case 11:
		cout << "November";break;
		case 12:
		cout << "December";break;
	}
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();x
    return 0;
}