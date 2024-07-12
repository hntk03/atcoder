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

	int N, K; cin >> N >> K;	

	vector<int> cnt(N, 2);

	REP(i,K){
		int A; cin >> A;
		A--;
		cnt[A]--;
	}

	vector<int> x;
	REP(i,N){
		REP(j,cnt[i]){
			x.push_back(i);
		}
	}

	N = x.size();

	if(N%2 == 0){
		int ans = 0;
		REP(i,N/2){
			ans += x[i*2+1] - x[i*2];
		}
		cout << ans << endl;
	}else{
		int now = 0;
		REP(i,N/2) now += x[i*2+2] - x[i*2+1];
		int ans = now;
		for(int i=2;i<N;i+=2){
			now += x[i-1] - x[i-2];
			now -= x[i] - x[i-1];
			ans = min(ans, now);
		}
		cout << ans << endl;
	}

	return 0;

}
