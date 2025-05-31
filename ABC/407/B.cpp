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

	int X, Y; cin >> X >> Y;

	int all = 0;
	int cnt = 0;
	FOR(i,1,7){
		FOR(j,1,7){
			int sum = i + j;
			if(sum >= X or abs(i-j) >= Y) cnt++;
			all++;
		}
	}

	printf("%.10f\n", (double)cnt/all);

	return 0;

}
