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

int f(vector<ll> v, ll x){

	ll sum = 0;
	REP(i,v.size()){
		sum += v[i];
		if(sum > x){
			return i+1;
		}
	}

	return v.size();
}

int main(void){

	int N; cin >> N;
	ll X, Y; cin >> X >> Y;

	vector<ll> A(N), B(N);
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];

	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	
	sort(B.begin(), B.end());
	reverse(B.begin(), B.end());

	int ans = min(f(A, X), f(B, Y));
	cout << ans << endl;


	return 0;

}
