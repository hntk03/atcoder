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

	ll N; cin >> N;	

	vector<char> ans;
	while(N > 0){
		if(N%2 == 0){
			ans.push_back('B');
			N /= 2;
		}else {
			ans.push_back('A');
			N--;
		}
	}

	reverse(ans.begin(), ans.end());

	REP(i,ans.size()) cout << ans[i];
	cout << endl;

	return 0;

}
