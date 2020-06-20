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
	
	double ans = -1;
	REP(i,N){
		int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
		double sum = 0.0;
		sum += a;
		sum += b;
		sum += c;
		sum += d;
		sum += e * 110.0 / 900;
		ans = max(ans, sum);

	}
	printf("%.10f\n", ans);


	return 0;

}
