#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int X; cin >> X;


	int ans = 0;
	ans += (X/500)*1000;
	X -= 500*(X/500);
	ans += (X/5)*5;

	cout << ans << endl;


	return 0;

}
