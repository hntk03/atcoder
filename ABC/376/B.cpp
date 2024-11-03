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

	int L = 0, R = 1;

	int ans = 0;
	REP(i,Q){
		char H;
		int T; cin >> H >> T;
		T--;

		if(H == 'L'){
			bool found = false;

			int nL = L;
			for(int i=0;;i++){
				nL = (nL + 1) % N;
				if(R == nL) break;
				if(nL == T){
					found = true;
					L = T;
					ans += i+1;
					break;
				}
			}

			if(found) continue;

			nL = L;
			for(int i=0;;i++){
				nL = (nL + N-1) %N;
				if(R == nL) break;
				if(nL == T){
					found = true;
					L = T;
					ans += i+1;
					break;
				}
			}
		}else{

			bool found = false;

			int nR = R;
			for(int i=0;;i++){
				nR = (nR + 1) % N;
				if(L == nR) break;
				if(nR == T){
					found = true;
					R = T;
					ans += i+1;
					break;
				}
			}

			if(found) continue;

			nR = R;
			for(int i=0;;i++){
				nR = (nR + N-1) %N;
				if(L == nR) break;
				if(nR == T){
					found = true;
					R = T;
					ans += i+1;
					break;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;

}
