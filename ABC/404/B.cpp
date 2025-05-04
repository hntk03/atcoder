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

int diff(vector<string> S, vector<string> T){
	int cnt = 0;
	int N = S.size();
	REP(i,N){
		int M = S[i].size();
		REP(j,M){
			if(S[i][j] != T[i][j]) cnt++;
		}
	}
	return cnt;
}

vector<string> rotate(vector<string> S){

	int N = S.size();
	int M = S[0].size();

	vector<string> ret(S);

	REP(i,N){
		REP(j,M){
			ret[j][N-i-1] = S[i][j];
		}
	}

	return ret;
}

int main(void){

	int N; cin >> N;
	vector<string> S(N), T(N);

	REP(i,N) cin >> S[i];
	REP(i,N) cin >> T[i];
	
	int ans = diff(S, T);

	vector<string> tmp = rotate(S);
	ans = min(ans, diff(tmp, T)+1);

	tmp = rotate(S);
	tmp = rotate(tmp);
	ans = min(ans, diff(tmp, T)+2);

	tmp = rotate(S);
	tmp = rotate(tmp);
	tmp = rotate(tmp);
	ans = min(ans, diff(tmp, T)+3);

	cout << ans << endl;
	return 0;

}
