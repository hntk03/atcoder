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

bool isP(string s){
	REP(i,s.length()/2){
		if(s[i] != s[s.length()-i-1]) return false;
	}
	return true;
}


int main(void){

	int N, K; cin >> N >> K;
	string S; cin >> S;
	vector<int> idx(N);
	REP(i,N) idx[i] = i;
	set<string> st;

	do{
		string s;
		REP(i,N) s += S[idx[i]];
		st.insert(s);
	}while(next_permutation(idx.begin(), idx.end()));
	
	int ans = 0;
	for(string t : st){
		bool ok = true;
		REP(i,N-K+1){
			if(isP(t.substr(i,K))) ok = false;
		}
		if(ok) ans++;
	}

	cout << ans << endl;

	return 0;

}
