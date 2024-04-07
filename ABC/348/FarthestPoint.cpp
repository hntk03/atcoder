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

	vector<int> X(N), Y(N);
	REP(i,N) cin >> X[i] >> Y[i];

	REP(i,N){
		int ans = 0;
		int dmax = 0;
		REP(j,N){
			if(i == j) continue;
			int dx = X[i] - X[j];
			int dy = Y[i] - Y[j];
			int d = dx*dx + dy *dy;
			if(d > dmax){
				ans = j;
				dmax = d;
			}
		}
		cout << ans+1 << endl;
	}

	return 0;

}
