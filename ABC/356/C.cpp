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

	int N, M, K; cin >> N >> M >> K;	

	vector<int> C(M);
	vector<bool> R(M);
	vector<vector<bool> > A(M, vector<bool>(16, false));

	REP(i,M){
		cin >> C[i];
		REP(j,C[i]){
			int key; cin >> key;
			key--;
			A[i][key] = true;
		}
		char r; cin >> r;
		R[i] = r == 'o';
	}

	int ans = 0;
	REP(i,1<<N){
		bitset<16> keys(i);
		bool ok = true;
		REP(j,M){
			int cnt = 0;
			REP(k,16){
				if(A[j][k] and keys[k]) cnt++;
			}

			bool cntflag = cnt >= K;

			if(cntflag != R[j]) ok = false;
		}

		if(ok) ans++;

	}


	cout << ans << endl;

	return 0;

}
