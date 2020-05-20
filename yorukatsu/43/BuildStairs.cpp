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

	int N; cin >> N;
	vector<int> H(N);

	REP(i,N) cin >> H[i];
	reverse(H.begin(), H.end());

	bool ok = true;
	FOR(i,1,N){
		if(H[i-1] >= H[i]) continue;
		else if(H[i-1] >= H[i] -1) H[i]--;
		else ok = false;
	}


	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}
