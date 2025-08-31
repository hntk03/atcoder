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
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	int X;
	string Y;
	cin >> X >> Y;
	X--;

	if(S[X] == Y) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
