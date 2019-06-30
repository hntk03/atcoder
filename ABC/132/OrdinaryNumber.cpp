#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int n; cin >> n;
	vector<int> p(n);
	REP(i,n) cin >> p[i];

	int ans = 0;
	FOR(i,1,n-1){
	if(p[i-1] < p[i] and p[i] < p[i+1]) ans++;
	else if(p[i+1] < p[i] and p[i] < p[i-1]) ans++;
	}
	
	cout << ans << endl;


	return 0;

}
