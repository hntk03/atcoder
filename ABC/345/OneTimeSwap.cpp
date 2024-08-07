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

ll c2(ll n){
	return n*(n-1)/2;
}

int main(void){

	string S; cin >> S;	

	int N = S.size();

	ll same = 0;
	map<char, int> cnt;
	for(char c : S) cnt[c]++;
	for(auto p : cnt){
		int m = p.second;
		same += c2(m);
	}

	ll diff = c2(N) - same;

	ll ans = diff;
	if(same) ans++;

	cout << ans << endl;

	return 0;

}
