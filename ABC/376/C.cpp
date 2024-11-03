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

const int INF = 1e9+1;

int main(void){

	int N;  cin >> N;
	vector<int> A(N), B(N-1);

	REP(i,N) cin >> A[i];
	REP(i,N-1) cin >> B[i];

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	auto judge = [&](int x) -> bool {
		auto nb = B;
		nb.push_back(x);

		sort(nb.begin(), nb.end());
		REP(i,N) if(A[i] > nb[i]) return false;
		return true;
	};

	int ac = INF, wa = 0;

	while(ac-wa > 1){
		int wj = (wa+ac)/2;
		if(judge(wj)) ac = wj;
		else wa = wj;
	}

	if(ac == INF) cout << -1 << endl;
	else cout << ac << endl;

	return 0;

}
