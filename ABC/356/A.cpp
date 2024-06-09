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

	int N, L, R; cin >> N >> L >> R;							

	vector<int> ans;

	REP(i,N){
		ans.push_back(i+1);
	}

	reverse(ans.begin()+L-1, ans.begin()+R);

	REP(i,N) cout << ans[i] << " ";
	cout << endl;

	return 0;

}
