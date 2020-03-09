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

	int A, B, M; cin >> A >> B >> M;
	vector<int> a(A);
	vector<int> b(B);
	REP(i,A) cin >> a[i];
	REP(i,B) cin >> b[i];
	vector<int> x(M);
	vector<int> y(M);
	vector<int> c(M);
	REP(i,M){
		cin >> x[i] >> y[i] >> c[i];
	}

	int ans = INF;
	REP(i,M){
		int tmp = a[x[i]-1] + b[y[i]-1] - c[i];
		ans = min(ans, tmp);
	}
	SORT(a);
	SORT(b);
	ans = min(ans, a.front() + b.front());

	cout << ans << endl;

	return 0;

}
