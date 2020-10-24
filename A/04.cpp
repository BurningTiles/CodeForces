/**
 * Author  : BurninTiles
 * Created : 2020-10-24 11:01:30
 * Link    : GitHub.com/BurninTiles
 * Program : 
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1,s2;
	cin >> s1 >> s2;

	for(auto &x:s1)
		x = x<97 ? x+32 : x;
		
	for(auto &x:s2)
		x = x<97 ? x+32 : x;

	cout << (s1==s2? 0 : s1>s2? 1 : -1); 

	return 0;
}

/**

Question : 
http://codeforces.com/problemset/problem/112/A

**/