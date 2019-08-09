#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int A, B, C; cin >> A >> B >> C;

	int d = max(A - B, 0);
	int ans = max(C - d, 0);

	cout << ans << endl;

	return 0;

}
