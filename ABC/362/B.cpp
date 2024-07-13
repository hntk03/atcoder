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

int calc(int x1, int y1, int x2, int y2){
	int dx = x1 - x2;
	int dy = y1 - y2;
	return dx*dx + dy*dy;
}

int main(void){

	vector<int> x(3), y(3);
	REP(i,3) cin >> x[i] >> y[i];

	vector<int> d(3);
	d[0] = calc(x[0], y[0], x[1], y[1]);
	d[1] = calc(x[0], y[0], x[2], y[2]);
	d[2] = calc(x[1], y[1], x[2], y[2]);

	bool ans = false;
	if(d[0] + d[1] == d[2]) ans = true;
	else if(d[1] + d[2] == d[0]) ans = true;
	else if(d[0] + d[2] == d[1]) ans = true;


	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
