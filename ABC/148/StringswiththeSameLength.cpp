#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int N; cin >> N;
	string s, t; cin >> s >> t;

	REP(i,N){
		cout << s[i] << t[i];
	}
	cout << endl;

	return 0;

}
