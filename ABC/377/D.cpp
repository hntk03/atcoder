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
	vector<int> maxL(M+1, -1);
	REP(i,N){
		int L, R; cin >> L >> R;
		maxL[R] = max(maxL[R], L);
	}

	ll ans = 0;
	int l = 1;
	FOR(r,1,M+1){
		while(l <= maxL[r]) l++;
		ans += r - l + 1;
	}

	cout << ans << endl;
	return 0;

}
