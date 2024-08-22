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
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	
	vector<int> s(N+1);
	REP(i,N) s[i+1] = (s[i]+A[i])%M;

	int L = s[N];

	ll ans = 0;
	vector<int> cnt(M);

	REP(r,N){
		ans += cnt[s[r]];
		ans += cnt[(s[r]-L+M)%M];
		cnt[s[r]]++;
	}

	cout << ans << endl;
	return 0;

}
