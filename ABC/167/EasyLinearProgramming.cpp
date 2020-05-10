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

	int A, B, C, K; cin >> A >> B >> C >> K;

	int ans = 0;
	if(K <= A) ans = K;
	else if(K <= A + B ) ans = A;
	else{
		int m = K - A - B;
		ans = A - m;
	}

	cout << ans << endl;


	return 0;

}
