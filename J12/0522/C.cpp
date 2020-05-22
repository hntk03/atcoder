#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, M, K; cin >> N >> M >> K;

	bool ok = false;
	REP(i,N+1){
		REP(j,M+1){
			if((j*N + i*M - 2*i*j) == K) ok = true;
		}
	}

	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
