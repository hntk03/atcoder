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
int ceil(int x, int y){
	return (x + y - 1) / y;
}

int main(void){

	int N; cin >> N;

	int ans = 1000 * ceil(N, 1000) - N;
	cout << ans << endl;



	return 0;

}
