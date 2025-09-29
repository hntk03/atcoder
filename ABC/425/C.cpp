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

	int N, Q; cin >> N >> Q;

	vector<int> A(N);
	REP(i,N) cin >> A[i];
	
	vector<ll> sum(2*N+1);
	REP(i,2*N){
		int ni = i % N;
		sum[i+1] = sum[i] + A[ni];
	}

	int front = 0;
	REP(i,Q){
		int type; cin >> type;
		if(type == 1){
			int c; cin >> c;
			front += c;
			front %= N;
		}else{
			int l, r; cin >> l >> r;
			cout << sum[front+r] - sum[front+l-1] << endl;
		}
	}

	return 0;

}
