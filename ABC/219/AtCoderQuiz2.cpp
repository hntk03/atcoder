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

	int X; cin >> X;
	int ans = 0;

	if(X<40) ans = 40 - X;
	else if(X < 70) ans = 70 - X;
	else if(X < 90) ans = 90 - X;
	else{
		cout << "expert" << endl;
		return 0;
	}

	cout << ans << endl;

	return 0;

}
