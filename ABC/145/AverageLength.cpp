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
	vector<int> idx(N);
	REP(i,N){
		cin >> x[i] >> y[i];
		idx[i] = i;
	}

	int cnt = 0;
	double ans = 0.0;
	do{
		double d = 0.0;
		FOR(i,1,N){
			d += sqrt(pow(x[i]-x[i-1],2) + pow(y[i]-y[i-1], 2));
		}
		ans += d;
		cnt++;
	}while(next_permutation(idx.begin(), idx.end()));

	ans /= cnt;
	cout << ans << endl;

	return 0;

}
