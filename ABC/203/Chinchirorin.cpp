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

	int a, b, c; cin >> a >> b >> c;
	if(a == b and b != c) cout << c << endl;
	else if(c == b and b != a) cout << a << endl;
	else if(c == a and b != a) cout << b << endl;
	else if(c == a and b == a) cout << a << endl;
	else cout << 0 << endl;


	return 0;

}
