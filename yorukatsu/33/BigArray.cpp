#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	ll N, K; cin >> N >> K;
	vector<ll> cnt(100005, 0);

	REP(i,N){
		int a, b; cin >> a >> b;
		cnt[a] += b;

	}

	ll sum = 0;
	REP(i,100005){
		if(sum + cnt[i] < K) sum += cnt[i];
		else{
			cout << i << endl;
			break;
		}
	} 



	return 0;

}
