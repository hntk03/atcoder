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

	int N, M; cin >> N >> M;		


	vector<int> H(N);
	REP(i,N) cin >> H[i];

	int sum = 0;
	int ans = 0;
	REP(i,N){
		if(M-H[i] >= 0){
			ans++;
			M -= H[i];
		}else{
			break;
		}
	}

	cout << ans << endl;

	return 0;

}
