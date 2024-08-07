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

	ll sum = 0;
	REP(i,N) sum += A[i];

	sort(A.begin(), A.end());

	vector<int> B(N, sum/N);

	ll amari = sum % N;
	REP(i,N){

		if(amari){
			B[N-i-1]++;
			amari--;
		} 
		if(amari == 0) break;
	}

	ll ans = 0;
	REP(i,N) ans += abs(A[i] - B[i]);
	ans /= 2;

	cout << ans << endl;

	return 0;

}
