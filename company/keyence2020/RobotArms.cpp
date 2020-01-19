#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int N; cin >> N;
	vector<pair<int, int>> v(N);
	REP(i,N){
		int x, l; cin >> x >> l;
		v[i] = make_pair(x, l);
	}

	SORT(v);

	int ans = 0;
	int p = -10010010;
	REP(i,N){
		if(v[i].first - v[i].second > p){
			ans++;
			p = v[i].first + v[i].second - 1;
		}
	}

	cout << ans << endl;

	return 0;

}
