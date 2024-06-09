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
int N;
vector<string> S;

bool ok(int i, int j, int di, int dj){

	int white = 0;
	REP(c,6){
		if(i < 0 or j < 0 or i == N or j == N) return false;
		if(S[i][j] == '.') white++;
		i += di * 1;
		j += dj * 1;
	}

	return white <= 2;
}

int main(void){

	cin >> N;
	S.resize(N);
	REP(i,N) cin >> S[i];

	REP(i,N){
		REP(j,N){
			if(ok(i,j, 1, 0) or ok(i,j,0,1) or ok(i,j,1,1) or ok(i,j,-1,1)){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;

}
