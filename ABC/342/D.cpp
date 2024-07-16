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


ll c2(ll n){
	return n*(n-1)/2;
}

int main(void){

	int N; cin >> N;
	vector<int> A(N);
	
	REP(i,N) cin >> A[i];

	map<int, int> mp;
	int zero = 0;
	REP(i,N){
		if(A[i] == 0) zero++;
		else{
			int na = 1;
			for(int p = 2;p*p<=A[i];p++){
				int cnt = 0;
				while(A[i]%p == 0){
					A[i] /= p;
					cnt++;
				}
				cnt %= 2;
				if(cnt == 1) na *= p;
			}
			if(A[i] != 1)  na *= A[i];
			mp[na]++;
		}
	}

	ll ans = c2(N) - c2(N-zero);
	for(auto [x, y] : mp){
		ans += c2(y);
	}
	
	cout << ans << endl;

	return 0;

}
