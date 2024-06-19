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

	int N, K; cin >> N >> K;
	vector<int> P(N);
	REP(i,N) cin >> P[i];
	REP(i,N) P[i]--;

	vector<int> Q(N+1);
	REP(i,N) Q[P[i]] = i;

	int ans = N;
	set<int> st;
	REP(i,N){
		st.insert(Q[i]);
		if(st.size() > K) st.erase(Q[i-K]);
		if(st.size() == K){
			int now = *st.rbegin() - *st.begin();
			ans = min(ans, now);
		}
	}

	cout << ans << endl;


	return 0;

}
