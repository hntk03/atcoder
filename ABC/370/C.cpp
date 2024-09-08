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
	vector<string> X;

	int N = S.length();
	REP(i,N){
		if(S[i] == T[i]) continue;
		if(S[i] > T[i]){
			S[i] = T[i];
			X.push_back(S);
		}
	}

	for(int i=N-1;i>=0;i--){
		if(S[i] == T[i]) continue;
		S[i] = T[i];
		X.push_back(S);
	}

	cout << X.size() << endl;
	for(auto s : X) cout << s << endl;

	return 0;

}
