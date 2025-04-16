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

	int ans = 0;
	REP(start,N){
		REP(interval,N){
			int i = start;
			int j = i + interval;
			int k = j + interval;

			if(i >= N or j >= N or k >= N) continue;
			if(S[i] == 'A' and S[j] == 'B' and S[k] == 'C') ans++;
		}
	}

	cout << ans << endl;

	return 0;

}
