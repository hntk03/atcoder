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

	int N; cin >> N;
	int X = 0, Y = 0;

	REP(i,N){
		int x, y; cin >> x >> y;
		X += x;
		Y += y;
	}

	if(X > Y) cout << "Takahashi" << endl;
	else if(Y > X) cout << "Aoki" << endl;
	else cout << "Draw" << endl;


	return 0;

}
