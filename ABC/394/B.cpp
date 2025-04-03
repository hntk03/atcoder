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

	vector<pair<int, string>> S(N);
	REP(i,N){
		string s; cin >> s;
		S[i] = make_pair(s.length(), s);
	}

	sort(S.begin(), S.end());

	REP(i,N) cout << S[i].second;
	cout << endl;

	return 0;

}
