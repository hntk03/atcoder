#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int N, D; cin >> N >> D;
	int F = D * 2 + 1;
	int ans = (N+F-1) / F;
	cout << ans << endl;


	return 0;

}
