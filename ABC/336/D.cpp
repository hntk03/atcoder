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
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	A.push_back(0);
	A.insert(A.begin(), 0);
	N += 2;
	
	vector<int> dl(N), dr(N);
	FOR(i,1,N){
		dl[i] = min(dl[i-1]+1,A[i]);
	}

	for(int i = N-2; i>=0;i--){
		dr[i] = min(dr[i+1]+1,A[i]);
	}

	int ans = 0;
	REP(i,N){
		int now = min(dl[i], dr[i]);
		ans = max(ans, now);
	}

	cout << ans << endl;
	return 0;

}
