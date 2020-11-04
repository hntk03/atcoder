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


ll f(ll x){
	return x*(x+1)/2;
}

int main(void){

	int N; cin >> N;
	vector<int> A(N), B(N);

	REP(i,N) cin >> A[i] >> B[i];

	ll sum = 0;
	REP(i,N) sum += f(B[i]) - f(A[i]-1);

	cout << sum << endl;


	return 0;

}
