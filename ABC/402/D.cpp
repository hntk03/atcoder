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
	map<int, int> cnt;
	ll ans = M*(ll)(M-1)/2;
	REP(i,M){
		int A, B; cin >> A >> B;
		int x = (A+B)%N;
		ans -= cnt[x];
		cnt[x]++;
	}

	cout << ans << endl;
	return 0;

}
