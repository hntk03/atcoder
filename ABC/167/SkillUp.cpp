#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, M, X; cin >> N >> M >> X;
	vector<int> C(N);
	int A[14][14];

	REP(i, N){
		cin >> C[i];
		REP(j,M){
			cin >> A[i][j];
		}
	}

	int ans = INF;
	int MAX = pow(2, N);

	REP(i,MAX){
		bitset<14> b(i);
		vector<int> ab(M, 0);
		int sum = 0;
		REP(j,N){
			if(b[j]){
				sum += C[j];
				REP(k,M){
					ab[k] += A[j][k];
				}
			}
		}
		bool ok = true;
		REP(j,M){
			if(ab[j] < X) ok = false;
		}

		if(ok) ans = min(ans, sum);
	}

	if(ans == INF) ans = -1;
	cout << ans << endl;



	return 0;

}
