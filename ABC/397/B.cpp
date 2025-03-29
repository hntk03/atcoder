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

	int ans = 0;
	REP(i,S.size()){
		if(i%2 == 0){
			if(S[i] != 'i'){
				S.insert(i, "i");
				ans++;
			}
		}else{
			if(S[i] != 'o'){
				S.insert(i, "o");
				ans++;
			}
		}
	}

	if(S.back() != 'o'){
		S += "o";
		ans++;
	}

	cout << ans << endl;

	return 0;

}
