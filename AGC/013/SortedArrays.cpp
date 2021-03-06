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
	vector<int> A(N);

	REP(i,N) cin >> A[i];

	bool dec = false;
	bool inc = false;
	int ans = 0;

	FOR(i,1,N){
		if(A[i] == A[i-1]) continue;
		else if(A[i] > A[i-1] and !dec) inc = true;
		else if(A[i] < A[i-1] and !inc) dec = true;
		else if(A[i] > A[i-1] and dec){
			ans++;
			inc = false;
			dec = false;
		}else if(A[i] < A[i-1] and inc){
			ans++;
			inc = false;
			dec = false;
		}
	}
	ans++;
	cout << ans << endl;


	return 0;

}
