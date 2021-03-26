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

	int A, B; cin >> A >> B;
	int X = A+B;

	if(X >= 15 and B >= 8) cout << 1 << endl;
	else if(X >= 10 and B >= 3) cout << 2 << endl;
	else if(X >= 3) cout << 3 << endl;
	else cout << 4 << endl;



	return 0;

}
