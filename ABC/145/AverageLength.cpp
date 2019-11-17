#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> x(N);
	vector<int> y(N);
	REP(i,N) cin >> x[i] >> y[i];

	double ans = 0.0;
	int cnt = 1;
	int tmp = N;
	while(tmp > 0){
		cnt *= tmp;
		tmp--;
	}

	REP(i,N-1){
		FOR(j,i+1,N){
			ans += sqrt(pow(x[i]-x[j], 2)+pow(y[i]-y[j], 2)) * 2;
		}
	}

	ans *= 2;
	ans /= cnt;
	cout << ans << endl;
	


	return 0;

}
