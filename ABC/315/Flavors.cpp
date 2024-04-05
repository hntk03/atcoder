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
	vector<pair<ll, int> > F(N);

	REP(i,N){
		int f;
		ll S;
		cin >> f >> S;
		F[i] = make_pair(S, f);
	}

	sort(F.begin(), F.end());

	REP(i,N){
		if(i == N-1) continue;
		if(F[i].second != F.back().second) continue;
		F[i].first /= 2;
	}

	sort(F.begin(), F.end());

	int last = F.size()-1;
	ll ans = F[last].first + F[last-1].first;

	cout << ans << endl;

	return 0;

}
