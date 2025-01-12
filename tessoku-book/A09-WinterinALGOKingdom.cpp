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

	int H, W, N; cin >> H >> W >> N;
	vector<vector<int>> S(H+1, vector<int>(W+1));

	REP(i,N){
		int A, B, C, D; cin >> A >> B >> C >> D;
		A--; B--;
		S[A][B]++;
		S[C][D]++;
		S[A][D]--;
		S[C][B]--;
	}

	FOR(i,1,H+1){
		REP(j,W+1){
			S[i][j] += S[i-1][j];
		}
	}

	REP(i,H+1){
		FOR(j,1,W+1){
			S[i][j] += S[i][j-1];
		}
	}

	REP(i,H){
		REP(j,W){
			cout << S[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
