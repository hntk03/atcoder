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

	int N; cin >> N;

	vector<string> A(N), B(N);
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];

	REP(i,N) {
		REP(j,N){
			if(A[i][j] != B[i][j]){
				cout << i+1 << " " << j+1 << endl;
				return 0;
			}
		}
	}

	return 0;

}
