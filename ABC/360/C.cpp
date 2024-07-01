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

	vector<int> A(N), W(N);
	REP(i,N) cin >> A[i];
	REP(i,N) A[i]--;
	REP(i,N) cin >> W[i];

	map<int, vector<int>> box;

	REP(i,N){
		box[A[i]].push_back(W[i]);
	}

	ll ans = 0;
	for(auto [box, ws] : box){
		if(ws.size() == 1) continue;
		sort(ws.begin(), ws.end());
		REP(i,ws.size()-1) ans += ws[i];
	}

	cout << ans << endl;

	return 0;

}
