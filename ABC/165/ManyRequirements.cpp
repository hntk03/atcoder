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

int N, M, Q;
vector<int> a;
vector<int> b;
vector<int> c;
vector<int> d;

ll ans = 0;

void dfs(int x, vector<int> A){
	A.push_back(x);
	if(A.size() == N){
		ll tmp = 0;
		REP(i,Q){
			if(A[b[i]-1]-A[a[i]-1] == c[i]) tmp += d[i];
		}
		ans = max(ans, tmp);
		return ;
	}else{
		FOR(i,x,M+1){
			dfs(i, A);
		}
	}
	return ;

}



int main(void){

	cin >> N >> M >> Q;
	REP(i,Q){
		int x, y, z, w; cin >> x >> y >> z >> w;
		a.push_back(x);
		b.push_back(y);
		c.push_back(z);
		d.push_back(w);
	}
	vector<int> A;
	dfs(1, A);
	cout << ans << endl;







	return 0;

}
