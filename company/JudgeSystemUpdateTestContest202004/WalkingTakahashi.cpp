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

	int S, L, R; cin >> S >> L >> R;

	if(S >= L and S <= R) cout << S << endl;
	else if(abs(S-R)<abs(S-L)) cout << R << endl;
	else  cout << L << endl;


	return 0;

}
