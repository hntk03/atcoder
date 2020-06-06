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

const int INF = 1e9+5;
vector<int> A(10005);
vector<int> B(10005);
int N; 
ll T;
bool ok = false;
int ans = INF;

void dfs(int i,ll sum, int cnt){
	if(i == N){
		if(sum <= T){
			ok = true;
			ans = min(ans, cnt);
		}
		return;
	}

	dfs(i+1,sum+A[i], cnt);
	dfs(i+1,sum+B[i], cnt+1);

}

int main(void){

	cin >> N >> T;

	REP(i,N) cin >> A[i] >> B[i];

	dfs(0,0,0);

	if(ok) cout << ans << endl;
	else cout <<  -1 << endl;







		return 0;

}
