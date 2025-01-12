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

	int idx = 0;
	int ans = 0;
	vector<bool> used(N);
	REP(i,N){
		if(used[i]) continue;
		int up = A[i]/2;
		if(A[idx] <= up){
			idx++;
			while(idx < N-1 and idx < i-1 and used[idx]){
				idx++;
			}
			used[i] = true;
			ans++;
		}
		if(idx == N) break;
	}

	cout << ans << endl;

	return 0;

}
