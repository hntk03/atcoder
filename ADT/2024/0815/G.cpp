#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

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
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	mint sum = 0;
	REP(i,N) sum += A[i];

	vector<mint> ten(N, 1);
	REP(i,N){
		int tmp = A[i];
		while(tmp > 0){
			ten[i] *= 10;
			tmp /= 10;
		} 
	}

	mint tenSum = 0;
	REP(i,N) tenSum += ten[i];

	mint ans = 0;
	FOR(i,1,N){
		sum -= A[i-1];
		tenSum -= ten[i-1];
		ans += sum;
		ans += tenSum * A[i-1];
	}

	cout << ans.val() << endl;
	return 0;

}
