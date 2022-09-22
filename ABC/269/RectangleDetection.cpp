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

	vector<string> S(10);
	REP(i,10) cin >> S[i];
	
	int y_min = 10, y_max = 0;
	int x_min = 10, x_max = 0;
	REP(i,10){
		REP(j,10){
			if(S[i][j] == '#'){
				y_min = min(y_min, i+1);
				y_max = max(y_max, i+1);

				x_min = min(x_min, j+1);
				x_max = max(x_max, j+1);
			}
		}
	}

	cout << y_min << ' '  << y_max << endl;
	cout << x_min << ' '  << x_max << endl;

	return 0;

}
