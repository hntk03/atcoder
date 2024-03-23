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

	int N, Q; cin >> N >> Q;	
	string S; cin >> S;
	vector<int> l(Q), r(Q);

	REP(i,Q) cin >> l[i] >> r[i];

	vector<int> a(N-1);
	REP(i,N-1) a[i] = (S[i] == S[i+1]);

	vector<int> sum(N);
	REP(i,N-1) sum[i+1] = sum[i] + a[i];

	REP(i,Q){
		cout << sum[r[i]-1] - sum[l[i]-1] << endl;
	}

	return 0;

}
