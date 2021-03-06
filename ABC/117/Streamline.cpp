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

	vector<int> Y(M-1);
	FOR(i,1,M){
		Y[i-1] = X[i] - X[i-1];
	}

	SORT(Y);

	int ans = 0;
	REP(i,M-(N-1)-1){
		ans += Y[i];
	}

	cout << ans << endl;


	return 0;

}
