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

	string X; cin >> X;

	int x = (X[0] - '0');
	x *= 10;
	x += (X[1] - '0');
	x *= 10;
	x += (X[3] - '0');
	
	if(x >= 380) cout << 1 << endl;
	else if(375 <= x and x < 380) cout << 2 << endl;
	else cout << 3 << endl;

	return 0;

}
