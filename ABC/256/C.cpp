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

int ans = 0;
int h1, h2, h3, w1, w2, w3;	

void dfs(vector<int>& v){
	if(v.size() == 4){
		int v3 = h1 - (v[0] + v[1]);
		if(v3 <= 0) return;
		int v6 = h2 - (v[2] + v[3]);
		if(v6 <= 0) return;
		int v7 = w1 - (v[0] + v[2]);
		if(v7 <= 0) return;
		int v8 = w2 - (v[1] + v[3]);
		if(v8 <= 0) return;
		int v9_1 = w3 - (v3+v6);
		int v9_2 = h3 - (v7+v8);
		if(v9_1 <= 0 or v9_2 <= 0) return;
		if(v9_1 != v9_2) return;
		ans++;
		return;
	}

   FOR(i,1,31){
		 v.push_back(i);
		 dfs(v);
		 v.pop_back();
	}
}

int main(void){


	cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
	vector<int> v = vector<int>(0);
	dfs(v);

	cout << ans << endl;

	return 0;

}
