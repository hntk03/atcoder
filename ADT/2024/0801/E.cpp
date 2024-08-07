#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using namespace atcoder;

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
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	REP(i,N) A[i]--;

	dsu uf(N);
	int from = -1;
	REP(i,N){
		if(uf.same(i,A[i])){
			from = i;
			break;
		}else{
			uf.merge(i,A[i]);
		}
	}

	int now = A[from];
	vector<int> ans;
	ans.push_back(from+1);
	while(now != from){
		ans.push_back(now+1);
		now = A[now];
	}

	cout << ans.size() << endl;
	for(int v : ans) cout << v << " ";
	cout << endl;

	return 0;

}
