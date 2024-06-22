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

	string T;
	REP(i,S.length()){
		T += S[i];

		if(T.back() == 'C' and T.size() >= 3){
			if(T.substr(T.size()-3) == "ABC"){
				T.pop_back();
				T.pop_back();
				T.pop_back();
			}
		}
	}

	cout << T << endl;

	return 0;

}
