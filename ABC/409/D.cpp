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

void solve(){
	int N; cin >> N;
	string S; cin >> S;

	int l = -1;
	REP(i,N-1){
		if(S[i] > S[i+1]){
			l = i;
			break;
		}
	}

	if(l != -1){
		int r = N-1;
		FOR(i,l+1,N-1){
			if(S[l] < S[i+1]){
				r = i;
				break;
			}
		}

		rotate(S.begin()+l, S.begin()+(l+1), S.begin()+(r+1));
	}
	cout << S << endl;
}

int main(void){

	int T; cin >> T;
	REP(i,T){
		solve();
	}

	return 0;

}
