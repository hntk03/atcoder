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

vector<int> count(string s){
	vector<int> res(27);
	for(char c : s){
		if(c == '@') res[26]++;
		else res[c-'a']++;
	}

	return res;
}


bool solve(){
	
	string S, T; cin >> S >> T;

	vector<int> cs = count(S);
	vector<int> ct = count(T);

	string A = "atcoder";
	vector<bool> inA(26);
	for(char c : A) inA[c-'a'] = true;

	REP(i,26){
		if(!inA[i]) {
			if(cs[i] != ct[i]) return false;
		}
	}

	REP(i,26){
		if(!inA[i]) continue;

		if(cs[i] < ct[i]){
			cs[26] -= ct[i] - cs[i];
		}else{
			ct[26] -= cs[i] - ct[i];
		}
	}

	if(cs[26] < 0 or ct[26] < 0) return false;
	return true;

}


int main(void){

	if(solve()) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
