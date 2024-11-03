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

	int ans = 0;

	auto add = [&](int i, int co=1){
		if(i < 0) return ;
		if(S.substr(i,3) == "ABC") ans += co;
	};

	auto add3 = [&](int i, int co=1){
		add(i-2, co);
		add(i-1, co);
		add(i, co);
	};

	REP(i,N-2) add(i);

	REP(i,Q){
		int X;
		char C; cin >> X >> C;
		X--;

		add3(X, -1);
		S[X] = C;
		add3(X);

		cout << ans << endl;
	}

	return 0;

}
