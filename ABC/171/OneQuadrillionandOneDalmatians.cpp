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

	vector<int> p;

	while(N > 0){
		N--;
		p.push_back(N%26);
		N /= 26;
	}

	reverse(all(p));

	REP(i,p.size()) cout << (char)(p[i] + 'a');
	cout << endl;

	return 0;

}
