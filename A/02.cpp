/**
 * Author  : BurningTiles
 * Created : 2020-10-24 10:41:18
 * Link    : BurningTiles.github.io
 * Program : 
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s.size() > 10)
			cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
		else 
			cout << s << endl;
	}

	return 0;
}

/**

Question : 
http://codeforces.com/problemset/problem/71/A

**/