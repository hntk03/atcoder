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

int ham(string s, string t){
	int d = 0;
	if(s.size() != t.size()) return 999;
	REP(i,s.size()){
		if(s[i] != t[i]) d++;
	}
	return d;
}


int main(void){

	int N, M; cin >> N >> M;	

	vector<string> S(N);
	REP(i,N) cin >> S[i];

	vector<int> idx(N);
	REP(i,N) idx[i] = i;

	bool ans = false;
	do{
		bool ok = true;
		REP(i,N-1){
			if(ham(S[idx[i]], S[idx[i+1]]) != 1) ok = false;
		}

		if(ok) ans = true;

	}while(next_permutation(idx.begin(), idx.end()));

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
