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


int f(string s){
	int ans = 0;
	ans += s[0] - '0';
	ans += s[1] - '0';
	ans += s[2] - '0';
	return ans;
}

int main(void){

	string A, B; cin >> A >> B;
	int ans = max(f(A), f(B));

	cout << ans << endl;


	return 0;

}
