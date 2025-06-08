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
	map<int, int> mp;
	int mx = 0;
	REP(i,N){
		int A; cin >> A;
		mx = max(mx, A);
		mp[A]++;
	}

	int now = N;
	int cnt = 0;
	while(cnt <= mx+1){
		if(cnt <= now){
			now -= mp[cnt];
			cnt++;
		} else break;
	}

	cnt--;
	cout << cnt << endl;

	return 0;

}
