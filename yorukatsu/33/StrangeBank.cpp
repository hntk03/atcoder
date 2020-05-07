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

	int N; cin >> N;

	int ans = 0;
	while(N > 0){
		int n = 9;
		while(n <= N) n *= 9;
		n /= 9;
		int s = 6;
		while(s <= N) s *= 6;
		s /= 6;
		if(max(n, s) == 1){
			n = s = 0;
			ans--;
		}
		pv(max(n, s));
		N -= max(n, s);
		ans++;
		if(N < 6){
			ans += N;
			N = 0;
		}
	}

	cout << ans << endl;



	return 0;

}
