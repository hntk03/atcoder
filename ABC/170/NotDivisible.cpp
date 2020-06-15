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

	int _max = -1;
	REP(i,N) _max = max(_max, A[i]);

	vector<int> cnt(_max+1, 0);

	REP(i,N){
		int tmp = A[i];
		while(tmp <= _max){
			cnt[tmp]++;
			tmp += A[i];
		}
	}

	int ans = 0;
	REP(i,N) if(cnt[A[i]] == 1) ans++;

	cout << ans << endl;

	return 0;

}
