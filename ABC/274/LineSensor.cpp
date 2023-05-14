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
	vector<int> ans(W, 0);
	
	REP(i,H){
		REP(j,W){
			char s; cin >> s;
			if(s == '#') ans[j]++;
		}
	}

	REP(i,W){
		cout << ans[i] << ' ';
	}
	cout << endl;

	return 0;

}
