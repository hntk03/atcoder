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
	int N = S.length();
	reverse(all(S));


	int idx = 0;
	while(idx < N){
		if(S.substr(idx, 5) == "maerd") idx += 5;
		else if(S.substr(idx, 7) == "remaerd") idx += 7;
		else if(S.substr(idx, 5) == "esare") idx += 5;
		else if(S.substr(idx, 6) == "resare")	idx += 6;
		else{
			cout << "NO" << endl;
			return 0;
		}

	}

	cout << "YES" << endl;


	return 0;

}
