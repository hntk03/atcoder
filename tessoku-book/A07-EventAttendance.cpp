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

	int D, N; cin >> D >> N;
	vector<int> S(D+1);

	REP(i,N){
		int L, R; cin >> L >> R;
		L--; R--;
		S[L] += 1;
		S[R+1] += -1;

	}
	
	FOR(i,1,D){
		S[i] += S[i-1];
	}

	REP(i,D){
		cout << S[i] << endl;
	}

	return 0;

}
