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
	
	int ans = 0;
	FOR(i,1,N-1){
		map<char, int> left;
		map<char, int> right;
		REP(j,N){
			if(j < i) left[S[j]] = 1;
			else right[S[j]] = 1;
		}

		int cnt = 0;
		for(char s='a';s<='z';s++){
			if(left[s] == 1 and right[s] == 1) cnt++;
		}

		ans = max(ans, cnt);
	}


	cout << ans << endl;
	return 0;

}
