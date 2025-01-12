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

	int N, X; cin >> N >> X;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int idx = lower_bound(A.begin(), A.end(), X) - A.begin();
	cout << idx + 1 << endl;

	return 0;

}
