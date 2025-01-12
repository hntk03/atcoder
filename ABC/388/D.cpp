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
	vector<int> A(N), S(N+1);
	REP(i,N) cin >> A[i];

	int now = 0;
	REP(i,N){
		now += S[i];
		A[i] += now;
		int end = min(N, i+A[i]+1);
		S[i+1]++;
		S[end]--;
		if(end == N) A[i] -= N-(i+1);
		else A[i] = 0;
	}

	REP(i,N) cout << A[i] << " ";
	cout << endl;

	return 0;

}
