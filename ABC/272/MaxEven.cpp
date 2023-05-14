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

	int N; cin >> N;
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	SORT(A);
	reverse(A.begin(), A.end());

	vector<ll> odd;
	vector<ll> even;
	REP(i,N){
		if(A[i]%2) odd.push_back(A[i]);
		else even.push_back(A[i]);
	}


	ll ans = -1;
	if(odd.size() > 1) ans = max(ans, odd[0]+odd[1]);
	if(even.size() > 1) ans = max(ans, even[0]+even[1]);

	cout << ans << endl;


	return 0;

}
