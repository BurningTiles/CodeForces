/**
 * Author  : BurningTiles
 * Created : 2020-10-24 11:14:50
 * Link    : BurningTiles.github.io
 * Program : 
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int tmp;
	while(cin >> tmp){
		v.push_back(tmp);
		if(cin.peek()=='\n') break;
	}

	sort(v.begin(), v.end());

	tmp = v.size()-1;
	for(int i=0; i<=tmp; i++)
		i==tmp ? cout << v[i] : cout << v[i] << "+"; 

	return 0;
}

/**

Question : 
http://codeforces.com/problemset/problem/339/A

**/