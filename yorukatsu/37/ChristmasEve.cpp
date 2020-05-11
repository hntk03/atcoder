#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, K; cin >> N >> K;
	vector<int> h(N);

	REP(i,N) cin >> h[i];

	SORT(h);

	int left = 0, right = K - 1;
	int ans = INF;
	REP(i,N-K+1){
		ans = min(ans, h[right++]-h[left++]);
	}

	cout << ans << endl;



	return 0;

}
