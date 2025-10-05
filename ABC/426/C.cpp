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

	vector<ll> pc(N+1, 1);
	pc[N] = 0;

	int l = 0;
	REP(i,Q){
		int X, Y; cin >> X >> Y;
		X--;
		Y--;
		ll cnt = 0;
		while(l <= X and l < N){
			cnt += pc[l];
			pc[l] = 0;
			l++;
		}
		cout << cnt << endl;
		pc[Y] += cnt;
	}

	return 0;

}
