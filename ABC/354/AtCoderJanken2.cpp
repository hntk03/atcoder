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

	vector<pair<string, int> > v(N);
	int sum = 0;
	REP(i,N){
		string S;
		int C;
		cin >> S >> C;
		v[i] = make_pair(S, C);
		sum += C;
	}

	sort(v.begin(), v.end());

	int ans = sum % N;
	cout << v[ans].first << endl;

	return 0;

}
