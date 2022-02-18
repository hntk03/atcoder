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

	string S, T; cin >> S >> T;
	int N = S.length();

	bool ok = false;

	REP(i,N-1){
		string tmp = S;
		swap(tmp[i], tmp[i+1]);
		if(tmp == T) ok = true;
	}

	if(S == T) ok = true;

	if(ok) cout << "Yes"  << endl;
	else cout << "No" << endl;



	return 0;

}
