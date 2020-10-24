/**
 * Author  : BurninTiles
 * Created : 2020-10-24 10:54:01
 * Link    : GitHub.com/BurninTiles
 * Program : 
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	for(auto &x:s){
		if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='Y' || x=='y');
		else
			cout << "." << char(x<97? x+32 : x);
	}

	return 0;
}

/**

Question : 
http://codeforces.com/problemset/problem/118/A

**/