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

int ham(string& s, string& t){
	if(s.size() != t.size()) return 999;
	int res = 0;
	REP(i,s.size()) if(s[i] != t[i]) res++;
	return res;
}

bool f(string& s, string& t){
	if(s.size() != t.size()+1) return false;
	int si = 0;
	REP(ti, t.size()){
		while(si < s.size() && s[si] != t[ti]) si++;
		if(si == s.size()) return false;
		si++;
	}

	return true;
}

int main(void){

	int N; cin >> N;
	string T; cin >> T;

	vector<int> ans;
	REP(i,N){
		string S; cin >> S;
		bool ok = false;
		if(S.size()+1 >= T.size()){
			if(f(S, T)) ok = true;
			if(f(T, S)) ok = true;
			if(ham(S, T) <= 1) ok = true;
		}

		if(ok) ans.push_back(i+1);
	}

	cout << ans.size() << endl;
	for(int i : ans) cout << i << " ";
	cout << endl;

	return 0;

}
