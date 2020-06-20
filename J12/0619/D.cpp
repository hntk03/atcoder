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

	vector<int> x(N);
	vector<int> y(N);

	REP(i,N) cin >> x[i] >> y[i];

	vector<int> idx(N);
	REP(i,N) idx[i] = i;
	int cnt = 1;
	REP(i,N){
		cnt *= (N-i);
	}

	double ans = 0.0;
	do{
		double sum = 0.0;
		FOR(i,1,N){
			int prev = idx[i-1];
			int now = idx[i];
			sum += sqrt(pow(x[prev]-x[now], 2) + pow(y[prev]-y[now], 2));
		}
		ans += sum;
	}while(next_permutation(all(idx)));

	ans /= cnt;
	printf("%.10f\n", ans);

	return 0;

}
