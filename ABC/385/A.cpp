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

	vector<int> N(3);
	REP(i,3) cin >> N[i];

	bool ans = false;
	if(N[0]+N[1] == N[2]) ans = true;
	else if(N[1]+N[2] == N[0]) ans = true;
	else if(N[0] + N[2] == N[1]) ans = true;
	else if(N[0] == N[1] and N[1] == N[2]) ans = true;
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
