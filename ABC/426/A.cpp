#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string X, Y; cin >> X >> Y;

	map<string, int> mp;
	mp["Ocelot"] = 1;
	mp["Serval"] = 2;
	mp["Lynx"] = 3;

	cout << (mp[X] >= mp[Y] ? "Yes" : "No") << endl;

	return 0;

}
