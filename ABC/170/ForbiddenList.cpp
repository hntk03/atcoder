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

	int X, N; cin >> X >> N;
	map<int, int> mp;


	REP(i,N){
		int p; cin >> p;
		mp[p]++;
	}

	int ans = 0;
	int diff = INF;
	FOR(i,-101,102){
		if(mp[i] == 0){
			int now = abs(i-X);
			if(now < diff){
				ans = i;
				diff = now;
			}
		}
	}

	cout << ans << endl;



	return 0;

}
