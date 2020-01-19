#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int H, W, N; cin >> H >> W >> N;

	int a = (N + H-1) / H;
	int b = (N + W-1) / W;
	int ans = min(a, b);
	cout << ans << endl;


	return 0;

}
