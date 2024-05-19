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

	int H, W; cin >> H >> W;	
	vector<string> G(H);
	REP(i,H) cin >> G[i];

	vector<vector<bool> > was(H, vector<bool>(W, false));

	int h,w;
	h = w = 0;
	was[h][w] = true;
	while(true){
		int prevH = h, prevW = w;
		if(G[h][w] == 'U') h--;
		else if(G[h][w] == 'D') h++;
		else if(G[h][w] == 'L') w--;
		else w++;

		if(h < 0 or w < 0 or h == H or w == W){
			cout << prevH+1 << " " << prevW+1 << endl;
			return 0;
		}
		if(was[h][w]){
			break;
		}
		was[h][w] = true;
	}

	cout << -1 << endl;
	return 0;

}
