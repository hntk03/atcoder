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

	string S; cin >> S;
	int N = S.length();

	vector<vector<int>> x(N+1, vector<int>(10));

	REP(i,N){
		int c = S[i] - '0';
		x[i+1] = x[i];
		x[i+1][c] ^= 1;
	}

	map<vector<int>, int> mp;
	REP(i,N+1) mp[x[i]]++;
	
	ll ans = 0;
	for(auto p : mp){
		ll n = p.second;
		ans += n*(n-1) / 2;
	}

	cout << ans << endl;

	return 0;

}
