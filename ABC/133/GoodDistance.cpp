#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, D; cin >> N >> D;
	int X[11][11];
	REP(i,N){
		REP(j,D){
			cin >> X[i][j];
		}
	}

	int ans = 0;
	REP(i,N-1){
		FOR(j, i+1, N){
			double x = 0.0;
			REP(k,D){
				x += pow(abs(X[i][k]-X[j][k]), 2);
			}
			x = sqrt(x);
			if(floor(x) == ceil(x)) ans++;
		}
	}

	cout << ans << endl;

	return 0;

}
