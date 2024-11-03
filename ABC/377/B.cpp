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


	int N = 8;
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	vector<bool> col(N), row(N);

	REP(i,8){
		REP(j,8){
			if(S[i][j] == '.') continue;
			col[j] = true;
			row[i] = true;
		}
	}

	int ans = 0;
	REP(i,8){
		REP(j,8){
			if(S[i][j] == '.' and !col[j] and !row[i]) ans++;
		}
	}
	
	cout << ans << endl;

	return 0;

}
