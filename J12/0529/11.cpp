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

	string S; cin >> S;
	reverse(all(S));

	int even = 0, odd = 0;
	REP(i,S.length()){
		if(i%2 == 0) odd += S[i] - '0';
		else even += S[i] - '0';
	}

	printf("%d %d\n", even, odd);

	return 0;

}
