#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int W, H, x, y; cin >> W >> H >> x >> y;

	double ans = (double)W*H/2;
	int cnt = (x*2 == W and y*2 == H) ? 1 : 0;

	printf("%.10f %d\n", ans, cnt);

	return 0;

}
