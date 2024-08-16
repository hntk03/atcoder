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
	vector<vector<int>> B(N, vector<int>(M));
	REP(i,N){
		REP(j,M){
			cin >> B[i][j];
		}
	}

	int startI = (B[0][0]-1) / 7;
	int startJ = (B[0][0]-1) % 7;

	if(startJ+M > 7){
		cout << "No" << endl;
		return 0;
	}
	
	bool ans = true;
	FOR(i,startI, startI+N){
		FOR(j,startJ,startJ+M){
			int target = (i)*7+j+1;
			if(B[i-startI][j-startJ] != target) ans = false;
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
