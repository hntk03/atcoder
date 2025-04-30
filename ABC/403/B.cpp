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

	string T, U; cin >> T >> U;

	REP(i,T.size() - U.size()+1){
		bool ok = true;
		REP(j,U.size()){
			if(T[i+j] == '?') continue;
			if(T[i+j] == U[j]) continue;
			ok = false;
		}

		if(ok){
			cout << "Yes" << endl;
			return 0;
		}
	}


	cout << "No" << endl;
	return 0;

}
