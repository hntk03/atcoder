#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<int> X(M);
	REP(i,M) cin >> X[i];
	SORT(X);

	int ans = 0;
	if(N >= M) ans = 0;
	else{
		vector<int> d(M-1, 0);
		REP(i,M-1){
			d[i] = (X[i+1] - X[i]);
		}
		SORT(d);

		REP(i,M-N){
			ans += d[i];
		}

	}

	cout << ans << endl;




	return 0;

}
