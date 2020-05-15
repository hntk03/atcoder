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

	string S; cin >> S;
	string m; 

	REP(i,S.length()){
		if(S[i] == '*') continue;
		else m += S[i];
	}

	int i = 0;
	int N = m.length();
	bool haszero = false;
	int ans = 0;

	while(i <= N){
		if(m[i] == '+' or i == N){
			if(!haszero) ans++;
			haszero = false;
		}
		else if(m[i] == '0') haszero = true;
		i++;
	}

	cout << ans << endl;
	


	return 0;

}
