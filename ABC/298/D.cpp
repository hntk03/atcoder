#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

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

	int Q; cin >> Q;

	queue<int> q;
	q.push(1);
	mint ans = 1;

	REP(qi,Q){
		int type; cin >> type;
		if(type == 1){
			int x; cin >> x;
			q.push(x);
			ans = ans * 10 + x;
		}
		else if(type == 2){
			int x = q.front(); q.pop();
			ans -= mint(10).pow(q.size()) * x;
		}else{
			cout << ans.val() << endl;
		}
	}

	return 0;

}
