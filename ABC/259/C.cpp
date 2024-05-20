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

vector<pair<char, int>> count(string S){
	vector<pair<char, int> > ret;

	ret.push_back(make_pair(S.front(), 1));
	FOR(i,1,S.size()){
		if(ret.back().first == S[i]) ret.back().second++;
		else ret.push_back(make_pair(S[i], 1));
	}

	return ret;
}

int main(void){

	string S, T; cin >> S >> T;	

	vector<pair<char, int> > vs = count(S), vt = count(T);

	if(vs.size() != vt.size()){
		cout << "No" << endl;
		return 0;
	}

	REP(i,vs.size()){
		if(vs[i].first != vt[i].first){
			cout << "No" << endl;
			return 0;
		}

		if(vs[i].second == vt[i].second) continue;

		if(vs[i].second == 1){
			cout << "No" << endl;
			return 0;
		}

		if(vs[i].second > vt[i].second){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;

}
