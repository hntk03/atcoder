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

	int N, D; cin >> N >> D;
	vector<int> T(N), L(N);
	REP(i,N) cin >> T[i] >> L[i];

	FOR(k,1,D+1){
		int maxW = 0;
		REP(i,N){
			int w = T[i] * (L[i] + k);
			maxW = max(maxW, w);
		}
		cout << maxW << endl;
	}

	return 0;

}
