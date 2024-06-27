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

bool isok(char c, vector<bool>& box){
	if(c < 'a' or c > 'z') return true;
	if(box[c-'a']) return false;
	box[c-'a'] = true;
	return true;
}


int main(void){

	string S; cin >> S;

	vector<string> v;
	v.push_back("");

	bool ans = true;
	vector<vector<bool>> scope;
	scope.push_back(vector<bool>(26, false));

	REP(i,S.size()){
		if(S[i] == '('){
			scope.push_back(scope.back());
		} 
		else if(S[i] == ')'){
			scope.pop_back();
		}else{
			bool used = scope.back()[S[i]-'a'];
			if(used){
				ans = false;
				break;
			} 
			scope.back()[S[i]-'a'] = true;
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
