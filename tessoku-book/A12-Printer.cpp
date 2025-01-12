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

ll calc(vector<ll> A, ll n){

	ll sum = 0;
	REP(i,A.size()){
		sum += n / A[i];
	}

	return sum;
}

int main(void){

	ll N, K; cin >> N >> K;
	vector<ll> A(N);
	REP(i,N) cin >> A[i];
	
	ll l = 0, r = 1e9;
	while(l < r){
		ll mid = (l + r) / 2;
		ll now = calc(A, mid);
		ll res = now >= K;
		
		if(!res) l = mid + 1;
		if(res) r = mid;
	}

	cout << l << endl;
	return 0;
}
