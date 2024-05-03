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

	ll N, Q; cin >> N >> Q;	

	vector<ll> T(Q), A(Q), B(Q);
	REP(i,Q) cin >> T[i] >> A[i] >> B[i];

	REP(i,Q) A[i]--;
	REP(i,Q) B[i]--;

	map<ll, set<ll>> mp;
	REP(i,Q){
		if(T[i] == 1){
			mp[A[i]].insert(B[i]);
		}else if(T[i] == 2){
			if(mp[A[i]].find(B[i]) != mp[A[i]].end()){
				mp[A[i]].erase(B[i]);
			}
		}else{
			bool fromA = mp[A[i]].find(B[i]) != mp[A[i]].end();
			bool fromB = mp[B[i]].find(A[i]) != mp[B[i]].end();
			if(fromA and fromB) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;

}
