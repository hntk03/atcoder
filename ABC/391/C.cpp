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

	int N, Q; cin >> N >> Q;

	vector<int> hato(N);
	REP(i,N) hato[i] = i;

	vector<int> su(N);
	REP(i,N) su[i] = 1;

	int cnt = 0;
	REP(i,Q){
		int q; cin >> q;

		if(q == 1){
			int P, H; cin >> P >> H;
			P--; H--;
			int place = hato[P];

			if(su[place] == 2) cnt--;
			su[place]--;

			if(su[H] == 1) cnt++;
			su[H]++;
			hato[P] = H;

		}else{
			cout << cnt << endl;
		}
	}

	return 0;

}
