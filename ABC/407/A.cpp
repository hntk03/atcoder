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

	int A, B; cin >> A >> B;

	int ans = A / B;
	int n = A - (A/B)*B;
	int k = (B+1)/2;

	if(n >= k) ans++;
	cout << ans << endl;

	return 0;

}
