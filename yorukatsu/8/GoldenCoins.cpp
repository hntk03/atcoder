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
	int num_500 = X / 500;
	X %= 500;
	int num_5 = X / 5;

	int ans = num_500 * 1000 + num_5 * 5;
	cout << ans << endl;
	


	return 0;

}
