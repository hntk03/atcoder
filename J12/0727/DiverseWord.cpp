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

	string S; cin >> S;

	S += char('a'-1);

	reverse(all(S));
	map<char, bool> alpha;
	REP(i,S.length()) alpha[S[i]] = true;


	REP(i,S.length()){
		REP(j,26){
			char m = j + 'a';
			if(!alpha[m] and m > S[i]){
				S[i] = m;
				S.erase(S.begin(), S.begin() + i);
				reverse(all(S));
				cout << S << endl;
				return 0;
			}
		}
		alpha[S[i]] = false;
	}


	cout << -1 << endl;
	return 0;

}
