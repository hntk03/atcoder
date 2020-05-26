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

	vector<int> k(M);
	int s[15][15];
	REP(i,M){
		cin >> k[i];
		REP(j,k[i]) cin >> s[i][j];
	}

	vector<int> p(M);
	REP(i,M) cin >> p[i];





	return 0;

}
