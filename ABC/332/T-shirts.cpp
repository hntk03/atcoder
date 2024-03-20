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
	string S; cin >> S;

	int ans = 0;

	int one = 0;
	int second = 0;
	for(auto s : S){
		if(s == '0'){
			int n = one + second - min(one, M);
			ans = max(n, ans);
			one = second = 0;
		}else if(s == '1') one++;
		else second++;
	}

	int n = one + second - min(one, M);
	ans = max(n, ans);

	cout << ans << endl;

	return 0;

}
