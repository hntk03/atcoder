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

	int N; cin >> N;
	string S; cin >> S;
	vector<int> sc(10);
	for(char c : S) sc[c-'0']++;

	int ans = 0;
	for(ll x = 0;;x++){
		string T = to_string(x*x);
		if(T.size() > S.size()) break;
		vector<int> tc(10);
		for(char c : T) tc[c-'0']++;
		tc[0] += S.size() - T.size();
		if(sc == tc) ans++;
	}

	cout << ans << endl;

	return 0;

}
