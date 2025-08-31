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

	vector<int> point(N);

	REP(i,M){
		int x = 0, y = 0;
		REP(j,N){
			if(S[j][i] == '0') x++;
			else y++;
		}
		if(x == 0 || y == 0){
			REP(k,N) point[k]++;
		}else if(x < y){
			REP(k,N) if(S[k][i] == '0') point[k]++;
		}else{
			REP(k,N) if(S[k][i] == '1') point[k]++;
		} 
	}

	int mx = 0;
	REP(i,N) mx = max(mx, point[i]);

	REP(i,N){
		if(point[i] == mx) cout << i+1 << " ";
	}
	cout << endl;

	return 0;

}
