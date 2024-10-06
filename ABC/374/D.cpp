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

struct P {
	int x, y;
};

struct Line {
	P a, b;
};

double dist(P a, P b){
	double dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx*dx + dy*dy);
}

int main(void){

	int N, S, T; cin >> N >> S >> T;
	vector<Line> lines(N);

	REP(i,N){
		int A, B, C, D; cin >> A >> B >> C >> D;

		lines[i] = Line(P(A, B), P(C, D));
	}

	double ans = 1e18;
	vector<int> p(N);
	REP(i,N) p[i] = i;

	do{
		REP(dirs, 1<<N){
			double now = 0;
			P pos(0, 0);
			REP(i,N){
				int dir = (dirs >> i)&1;
				P a = lines[p[i]].a, b = lines[p[i]].b;
				if(dir) swap(a, b);

				now += dist(pos, a) / S;
				now += dist(a, b) / T;
				pos = b;
			}
			ans = min(ans, now);
		}
	}while(next_permutation(p.begin(), p.end()));

	printf("%.10f\n", ans);

	return 0;
}
