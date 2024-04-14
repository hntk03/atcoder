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
	int ans = 0;
	REP(i,N-1){
		int A; cin >> A;

		if(A < 0) ans += -A;
		else if (A > 0) ans += -A;
		else ans += 0;
	}

	cout << ans << endl;

	return 0;

}
