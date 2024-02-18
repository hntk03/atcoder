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
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int M; cin >> M;
	map<int, bool> B;
	REP(i,M){
		int b; cin >> b;
		B[b] = true;
	}

	int X; cin >> X;

	vector<bool> step(X+1);
	step[0] = true;
	REP(i,X+1){
		if(B[i]) continue;
		if(!step[i]) continue;

		REP(j,N){
			int next = i + A[j];
			if(next > X) continue;

			step[next] = true;
		}
	}


	if(step[X]) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
