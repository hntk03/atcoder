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

	ll ans = 0;
	int r = 0;
	REP(l,N){
		while(r < N){
			if(r > (l+1) and A[r]-A[r-1] != A[r-1] - A[r-2]) break;
			r++;
		}
		ans += r - l;
	}

	cout << ans << endl;
	return 0;

}
