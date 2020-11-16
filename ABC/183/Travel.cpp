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

ll T[8][8];
ll N, K;
int main(void){

	cin >> N >> K;

	REP(i,N){
		REP(j,N){
			cin >> T[i][j];
		}
	}
	
	vector<int> index;
	FOR(i,1,N) index.push_back(i);

	ll ans = 0;
	do{
		ll sum = 0;
		int prev = 0;
		int now;
		REP(i,N-1){
			now = index[i];
			sum += T[prev][now];
			prev = now;
		}
		sum += T[now][0];
		if(sum == K) ans++;
	}while(next_permutation(index.begin(), index.end()));

	cout << ans << endl;

	return 0;

}
