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
	string S;
	REP(i,N){
		char c;
		ll l; cin >> c >> l;
		ll now = S.length() + l;
		if(now > 100){
			cout << "Too Long" << endl;
			return 0;
		}
		for(ll i=0;i<l;i++) S += c;
	}
	
	cout << S << endl;
	return 0;

}
