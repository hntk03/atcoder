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

	string S, T; cin >> S;
	cin	>> T;	

	int idx = 0;
	REP(i,S.length()){
		FOR(j,idx,T.length()){
			if(S[i] == T[j]){
				cout << j + 1 << " ";
				idx = j + 1;
				break;
			}
		}
	}
	cout << endl;

	return 0;

}
