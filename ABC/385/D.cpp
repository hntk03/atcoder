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

	int N, M; 
	ll Sx, Sy; cin >> N >> M >> Sx >> Sy;

	using D = map<ll, set<ll>>;
	map<ll, set<ll>> xs, ys;

	REP(i,N){
		int x, y; cin >> x >> y;
		xs[y].insert(x);
		ys[x].insert(y);
	}

	int ans = 0;

	auto f = [&](D& xs, D&ys, ll y, ll l, ll r){
		if(r < l) swap(l, r);
		auto &st  = xs[y];
		while(1){
			auto it = st.lower_bound(l);
			if(it == st.end()) break;
			if(*it > r) break;
			ys[*it].erase(y);
			st.erase(it);
			ans++;
		}

	};

	REP(i,M){
		char d; ll c;
		cin >> d >> c;

		ll nx = Sx, ny = Sy;
		if(d == 'U') ny += c;
		if(d == 'D') ny -= c;
		if(d == 'R') nx += c;
		if(d == 'L') nx -= c;
		if(Sy == ny) f(xs, ys, Sy, Sx, nx);
		else f(ys, xs, Sx, Sy, ny);

		Sx = nx; Sy = ny;
	}

	printf("%lld %lld %d\n", Sx, Sy, ans);

	return 0;

}
