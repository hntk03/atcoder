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

	int N; cin >> N;
	string S; cin >> S;

	int Q; cin >> Q;
	vector<char> to(26);

	REP(i,26){
		to[i] = i+'a';
	}

	REP(i,Q){
		char c, d; cin >> c >> d;
		REP(j,26){
			if(to[j] == c){
				to[j] = d;
			}
		}
	}

	REP(i,N){
		cout << to[S[i]-'a'];
	}
	cout << endl;

	return 0;

}
