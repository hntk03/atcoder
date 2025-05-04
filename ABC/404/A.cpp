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

	vector<int> v(26);
	string S; cin >> S;

	for(char c : S){
		int d = c - 'a';
		v[d]++;
	}

	REP(i,26){
		if(v[i] == 0){
			cout << (char)(i + 'a') << endl;
			return 0;
		}
	}

	return 0;

}
