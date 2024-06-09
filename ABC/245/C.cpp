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

	int N, K; cin >> N >> K;
	vector<int> A(N), B(N);
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];

	vector<vector<bool> > memo(N, vector<bool>(2, false));
	memo[0][0] = memo[0][1] = true;

	FOR(i,1,N){
		if(memo[i-1][0]){
			memo[i][0] = memo[i][0] | (abs(A[i-1] - A[i]) <= K);
			memo[i][1] = memo[i][1] | (abs(A[i-1] - B[i]) <= K);
		}

		if(memo[i-1][1]){
			memo[i][0] = memo[i][0] | (abs(B[i-1] - A[i]) <= K);
			memo[i][1] = memo[i][1] | (abs(B[i-1] - B[i]) <= K);
		}
	}

	if(memo[N-1][0] or memo[N-1][1]) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
