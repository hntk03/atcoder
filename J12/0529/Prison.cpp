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

	int N, M; cin >> N >> M;

	vector<int> L(M);
	vector<int> R(M);
	REP(i,M) cin >> L[i] >> R[i];

	REP(i,M) L[i]--;
	REP(i,M) R[i]--;

	vector<int> cnt(N+1, 0);

	REP(i,M){
		cnt[L[i]]++;
		cnt[R[i]+1]--;
	}

	FOR(i,1,N+1){
		cnt[i] += cnt[i-1];
	}

	int ans = 0;
	REP(i,N+1){
		if(cnt[i] == M) ans++;
	}

	cout << ans << endl;


	return 0;

}
