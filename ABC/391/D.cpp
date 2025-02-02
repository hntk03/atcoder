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

	int N, W; cin >> N >> W;
	vector<int> X(N), Y(N);

	REP(i,N){
		cin >> X[i] >> Y[i];
		X[i]--;
	}

	vector<int> idx(N);
	REP(i,N) idx[i] = i;

	sort(idx.begin(), idx.end(), [&](int i, int j){
			return Y[i] < Y[j];
			});

	vector<int> r(N), num(W);

	for(int i : idx){
		r[i] = num[X[i]];
		num[X[i]]++;
	}

	vector<int> d(N, INF);
	{
		vector<vector<int>> blocks(N);
		REP(i,N) blocks[r[i]].push_back(i);
		REP(i,N){
			if(blocks[i].size() != W) continue;
			int mx = 0;
			for(int j : blocks[i]) mx = max(mx, Y[j]-1);
			d[i] = mx+1;
		}
	}

	int Q; cin >> Q;
	REP(qi, Q){
		int t, a; cin >> t >> a;
		a--;
		if(d[r[a]] > t) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;

}
