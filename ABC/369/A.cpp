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

	int d = max(A, B) - min(A, B);

	if(A == B){
		cout << 1 << endl;
		return 0;
	}

	if(d%2 == 1) cout << 2 << endl;
	else cout << 3 << endl;

	return 0;

}
