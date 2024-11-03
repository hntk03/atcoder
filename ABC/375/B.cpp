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

	ll nowX = 0, nowY = 0;
	double ans = 0;
	REP(i,N){
		ll X, Y; cin >> X >> Y;

		ll dx = nowX - X, dy = nowY - Y;
		ll d = dx * dx + dy * dy;

		ans += sqrt(d);
		nowX = X, nowY = Y;
	}

	ll X, Y;
	X = Y = 0;
	ll dx = nowX - X, dy = nowY - Y;
	ll d = dx * dx + dy * dy;

	ans += sqrt(d);


	printf("%.10f\n", ans);

	return 0;

}
