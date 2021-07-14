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
	vector<pair<int, string> > ST(N);

	REP(i,N) {
		int T;
		string S; 
		cin >> S >> T;
		ST[i] = make_pair(T, S);
	}

	SORT(ST);

	cout << ST[N-2].second << endl;

	return 0;

}
