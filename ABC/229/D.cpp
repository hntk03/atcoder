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

	string S; cin >> S;
	int K; cin >> K;

	int N = S.length();

	vector<int> A(N);
	REP(i,N) A[i] = (S[i] == '.');

	int ans = 0;
	int r = 0, sum = 0;
	REP(l,N){
		while(r < N and sum+A[r] <= K){
			sum += A[r];
			r++;
		}

		ans = max(ans, r-l);
		sum -= A[l];
	}

	cout << ans << endl;

	return 0;

}
