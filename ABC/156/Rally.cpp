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

	int N; cin >> N;
	vector<int> X(N);

	REP(i,N) cin >> X[i];

	int ans = INF;
	REP(i, 100){
		int sum = 0;
		REP(j,N) sum += pow(i - X[j], 2);
		ans = min(ans, sum);
	}

	cout << ans << endl;


	return 0;

}
