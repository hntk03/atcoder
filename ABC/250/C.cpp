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

	vector<int> balls(N), idx(N);
	REP(i,N) balls[i] = i, idx[i] = i;

	REP(i,Q){
		int x; cin >> x;
		x--;
		int bidx = idx[x];
		if(bidx == N-1){
			int otherball = balls[bidx-1];
			swap(balls[bidx-1], balls[bidx]);
			idx[x] = bidx-1;
			idx[otherball] = bidx;
		}else{
			int otherball = balls[bidx+1];
			swap(balls[bidx], balls[bidx+1]);
			idx[x] = bidx+1;
			idx[otherball] = bidx;
		}
	}

	REP(i,N) cout << balls[i]+1 << " ";
	cout << endl;

	return 0;

}
