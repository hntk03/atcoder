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

	int R, G, B; cin >> R >> G >> B;
	string C; cin >> C;

	int ans =0;
	if(C == "Red"){
		ans = min(G, B);
	}else if(C == "Green"){
		ans = min(R, B);
	}else{
		ans = min(R, G);
	}

	cout << ans << endl;

	return 0;

}
