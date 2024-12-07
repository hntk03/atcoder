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

	int N, D; cin >> N >> D;
	string S; cin >> S;

	for(int i = N-1;i >= 0; i--){
		if(D > 0 and S[i] == '@'){
			D--;
			S[i] = '.';
		}
	}

	cout << S << endl;

	return 0;

}
