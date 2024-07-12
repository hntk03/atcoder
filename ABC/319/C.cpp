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

	vector<int> c(9);
	REP(i,9) cin >> c[i];

	vector<int> p(9);
	REP(i,9) p[i] = i;

	int cnt = 0, total = 0;
	do{
		bool ok = true;
		auto f = [&](int i, int j, int k){
			vector<pair<int, int>> d;
			d.push_back(make_pair(p[i], c[i]));
			d.push_back(make_pair(p[j], c[j]));
			d.push_back(make_pair(p[k], c[k]));
			sort(d.begin(), d.end());
			if(d[0].second == d[1].second) ok = false;
		};
		f(0,1,2);
		f(3,4,5);
		f(6,7,8);

		f(0,3,6);
		f(1,4,7);
		f(2,5,8);

		f(0,4,8);
		f(2,4,6);

		if(ok) cnt++;
		total++;
	}while(next_permutation(p.begin(), p.end()));

	double ans = ((double)cnt) / total;
	printf("%.10f\n", ans);

	return 0;

}
