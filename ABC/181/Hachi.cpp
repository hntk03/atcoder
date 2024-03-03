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

bool solve(string s){

	if(s.size() == 1){
		return s == "8";
	}

	if(s.size() == 2){
		if(stoi(s)%8 == 0) return true;
		swap(s[0], s[1]);
		if(stoi(s)%8 == 0) return true;

		return false;
	}

	vector<int> cnt(10);
	for(char c : s) cnt[c-'0']++;
	for(int i=0;i < 1000;i += 8){
		int x = i;
		vector<int> nc(10);
		REP(j,3){
			nc[x%10]++;
			x /= 10;
		}

		bool ok = true;
		REP(j,10) if(nc[j] > cnt[j]) ok = false;
		if(ok) return true;
	}

	return false;
}

int main(void){

	string s; cin >> s;
	if(solve(s)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
