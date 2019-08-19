#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int a; cin >> a;
	string s; cin >> s;
	if(a >= 3200) cout << s << endl;
	else cout << "red" << endl;


	return 0;

}
