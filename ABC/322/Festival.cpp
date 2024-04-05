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

	int N, M; cin >> N >> M;
	vector<int> A(M);

	REP(i,M){
		cin >> A[i];
	}

	int now = 0;
	REP(i,N){
		int d = i+1;
		int ans = 0;
		if(d < A[now]){
			ans = A[now] - d;
		}else{
			now++;
		}

		cout << ans << endl;
	}

	return 0;

}
