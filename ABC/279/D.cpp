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

	ll A, B; cin >> A >> B;

	ll n3 = (A*A) / (4*B*B);

	ll n = 1;
	for(;n*n*n<n3;n++);

	double ans = A / sqrt(n);
	printf("%f\n", ans);

	return 0;
}

