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

	if(N == 1){
		cout << 0 << endl;
		return 0;
	}

	N--;

	for(int keta = 1;;keta++){
		int l = (keta+1)/2;
		ll num = 9;
		REP(i,l-1) num *= 10;
		if(N > num){
			N -= num;
			continue;
		}

		N += num/9-1;
		string s = to_string(N);
		string rs = s;
		reverse(rs.begin(), rs.end());
		if(keta%2 == 1) s.pop_back();
		s += rs;
		cout << s << endl;
		return 0;

	}

	return 0;

}
