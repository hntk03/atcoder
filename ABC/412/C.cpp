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

void solve(){
	int N; cin >> N;
	vector<ll> S(N);
	REP(i,N) cin >> S[i];

	if(N == 2){
		cout << (S[0]*2>=S[1]?2:-1) << endl;
		return ;
	}

	sort(S.begin()+1, S.end()-1);

	int ans = 1;
	int now = 0;
	int idx = 1;
	while(true){
		while(idx < N and S[now]*2 >= S[idx]) idx++;
		idx--;
		if(now == idx){
			cout << -1 << endl;
			return ;
		}
		if(idx == N-1){
			ans++;
			break;
		}
		ans++;
		now = idx;
		idx++;
		if(S[now]*2 >= S[N-1]){
			ans++;
			break;
		}
	}
	cout << ans << endl;
}

int main(void){

	int T; cin >> T;

	REP(i,T){
		solve();
	}

	return 0;

}
