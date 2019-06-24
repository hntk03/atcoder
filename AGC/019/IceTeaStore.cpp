#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int Q, H, S, D; cin >> Q >> H >> S >> D;
	int N; cin >> N;

	vector<pair<double, int>> v;
	v.push_back(make_pair(4.0*Q, 1));
	v.push_back(make_pair(2.0*H, 2));
	v.push_back(make_pair(1.0*S, 3));
	v.push_back(make_pair(0.5*D, 4));

	SORT(v);

	ll ans = 0;
	if(v[0].second == 4){
		if(N%2 == 0) ans += D * (N / 2);
		else{
			int c = (N / 2);
			ans += D * c;
			N -= 2*c;
			ans += N * v[1].first;
		}
	}else{
		ans += N * v[0].first;
	}


	cout << ans << endl;


	return 0;

}
