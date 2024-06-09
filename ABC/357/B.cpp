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

	int upper = 0, lower = 0;
	REP(i,S.length()){
		if(isupper(S[i])) upper++;
		else lower++;
	}

	REP(i,S.length()){
		if(upper > lower and islower(S[i])) S[i] = S[i] - 'a' + 'A';
		else if(lower > upper and isupper(S[i])) S[i] = S[i] - 'A' + 'a';
	}

	cout << S << endl;

	return 0;

}
