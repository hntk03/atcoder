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

	
	int N, M; cin >> N >> M;
	vector<int> H(N);
	REP(i,N) cin >> H[i];
	vector<int> ok(N, true);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		if(H[A] > H[B]) ok[B] = false;
		else if(H[B] > H[A]) ok[A] = false;
		else{
			ok[A] = ok[B] = false;
		}
	}

	int ans = 0;
	REP(i,N){
		if(ok[i]) ans++;
	}

	cout << ans << endl;
	return 0;

}
