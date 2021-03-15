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

	int A, B, W; cin >> A >> B >> W;
	W *= 1000;

	int x_min = 1e9;
	int x_max = 0;
	FOR(i,A,B+1){
		if(W%i == 0){
			x_min = min(x_min, W/i);
			x_max = max(x_max, W/i);
		}

	}
	
	printf("%d %d\n", x_min, x_max);


	return 0;

}
