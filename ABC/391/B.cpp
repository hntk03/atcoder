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

	int N, M; cin >> N >> M;
	vector<string> S(N), T(M);
	REP(i,N) cin >> S[i];
	REP(i,M) cin >> T[i];

	REP(a,N-M+1){
		REP(b, N-M+1){
			bool ans = true;
			REP(i,M){
				REP(j,M){
					if(S[a+i][b+j] != T[i][j]) ans = false;
				}
			}
			if(ans){
				cout << a+1 << " " << b+1 << endl;
				return 0;
			} 
		}
	}

	return 0;

}
