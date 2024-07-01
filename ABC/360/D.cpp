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

struct BIT {
  private:
   vector<int> bit;
   int N;

  public:
   BIT(int size) {
     N = size;
     bit.resize(N + 1);
   }

   // 一点更新です
   void add(int a, int w) {
     for (int x = a; x <= N; x += x & -x) bit[x] += w;
   }

   // 1~Nまでの和を求める。
   int sum(int a) {
     int ret = 0;
     for (int x = a; x > 0; x -= x & -x) ret += bit[x];
     return ret;
   }
 };

int main(void){

	int N;
	ll T; cin >> N >> T;
	string S; cin >> S;
	vector<ll> X(N);
	REP(i,N) cin >> X[i];

	sort(X.begin(), X.end());

	vector<pair<ll, int>> moved(N);
	REP(i,N){
		if(S[i] == '1') moved[i] = make_pair(X[i]+T, -i);
		else moved[i] = make_pair(X[i]-T, -i);
	}

	sort(moved.begin(), moved.end());

	REP(i,N) moved[i].second *= -1;

	BIT b(N);
	ll ans = 0;
	REP(i,N){
		int idx = moved[i].second;
		idx++;
		ans += i - b.sum(idx);
		b.add(idx, 1);
	}

	cout << ans << endl;

	return 0;

}
