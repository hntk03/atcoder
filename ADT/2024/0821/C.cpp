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
	
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	const int size = 9;

	auto solve = [&](int i, int j) -> bool{

		FOR(a, i, i+3){
			FOR(b, j, j+3){
				if(S[a][b] != '#') return false;
			}
		}

		FOR(a, i+6, i+9){
			FOR(b, j+6, j+9){
				if(S[a][b] != '#') return false;
			}
		}

		REP(a,4){
			if(S[i+3][j+a] != '.') return false;
			if(S[i+a][j+3] != '.') return false;
			if(S[i+5][j+a+5] != '.') return false;
			if(S[i+a+5][j+5] != '.') return false;
		}

		return true;
	};

	REP(i,N){
		int endi = i+size;
		if(endi > N) continue;
		REP(j,M){
			int endj = j + size;
			if(endj > M) continue;

			if(solve(i, j)){
				printf("%d %d\n", i+1, j+1);
			}
		}
	}

	return 0;

}
