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

	int N, T; cin >> N >> T;

	vector<ll> p(N+1);
	map<ll, int> m;

	m[0] = N;

	REP(i,T){
		int A, B; cin >> A >> B;
		ll prev = p[A];
		ll now = B + p[A];
		p[A] = now;

		m[prev]--;
		m[now]++;

		if(m[prev] == 0){
			m.erase(prev);

		}

		cout << m.size() << endl;
	}




	return 0;

}
