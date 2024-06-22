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

	int N, M; cin >> N >> M;	
	vector<int> L(N);
	REP(i,N) cin >> L[i];

	ll wa = 0, ac = 1e15;
	while(abs(ac-wa) > 1){
		ll wj = (ac + wa)/2;
		auto f = [&](ll w){
			int line = 0;
			ll rem = 0;
			REP(i,N){
				if(rem >= L[i]+1){
					rem -= L[i]+1;
				}else{
					line++;
					rem = w-L[i];
					if(rem < 0) return false;
				}
			}
			return line <= M;
		};

		if(f(wj)){
			ac = wj;
		}else{
			wa = wj;
		}
	}

	cout << ac << endl;


	return 0;

}
