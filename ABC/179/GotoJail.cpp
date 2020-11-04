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

	vector<bool> same(N);

	REP(i,N){
		int D1, D2; cin >> D1 >> D2;
		same[i] = (D1 == D2);
	}

	bool ans = false;
	FOR(i,1,N-1){
		if(same[i-1] and same[i] and same[i+1]) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}
