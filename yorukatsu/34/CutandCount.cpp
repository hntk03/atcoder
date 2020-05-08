#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	string S; cin >> S;

	int ans = 0;
	FOR(i,1,N){
		map<char, int> left;
		map<char, int> right;
		string l = S.substr(0, i);
		string r = S.substr(i, N-i);

		REP(j,l.length()){
			left[l[j]]++;
		}
		REP(j,r.length()){
			right[r[j]]++;
		}

		int tmp = 0;
		for(char s = 'a'; s <= 'z'; ++s){
			if(left[s] > 0 and right[s] > 0) tmp++;
		}
		ans = max(ans, tmp);
	}

	cout << ans << endl;



	return 0;

}
