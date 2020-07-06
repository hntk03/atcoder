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

	SORT(A);

	ll ans = A.back();
	int cnt = -1;
	int idx = N-2;
	REP(i,N-2){
		ans += A[idx];
		cnt++;	
		if(cnt%2 == 1) idx--;
	}

	cout << ans << endl;

	return 0;

}
