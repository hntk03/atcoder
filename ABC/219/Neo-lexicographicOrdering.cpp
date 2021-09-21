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

#define MAX 50005


int main(void){

	string X;
	int N; 

	cin >> X;
	cin >> N;
	vector<string> S(N);

	REP(i,N) cin >> S[i];

	map<char, char> encode;
	map<char, char> decode;

	REP(i,26){
		encode[X[i]] = 'a'+ i;
		decode['a'+i] = X[i];
	}

	REP(i,N){
		REP(j,S[i].length()){
			S[i][j] = encode[S[i][j]];
		}
	}

	SORT(S);

	REP(i,N){
		REP(j,S[i].length()){
			S[i][j] = decode[S[i][j]];
		}
		cout << S[i] << endl;
	}


	return 0;

}
