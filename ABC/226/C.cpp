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
vector<vector<ll> > A;
vector<bool> visited;

void dfs(int v){
	if(visited[v]) return;
	visited[v] = true;
	for(int to : A[v]){
		dfs(to);
	}
}

int main(void){

	int N; cin >> N;	
	vector<int> T(N), K(N);
	A.resize(N);
	visited.resize(N);

	REP(i,N){
		cin >> T[i] >> K[i];
		REP(j,K[i]){
			ll a; cin >> a;
			a--;
			A[i].push_back(a);
		}
	}

	dfs(N-1);

	ll ans = 0;
	REP(i,N){
		if(!visited[i]) continue;
		ans += T[i];
	}

	cout << ans << endl;


	return 0;

}
