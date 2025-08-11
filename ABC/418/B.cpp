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
	int N = S.size();

	double ans = 0;
	REP(i,N-2){
		FOR(j,i+2,N){
			if(S[i] == 't' and S[j] == 't'){
				int x = 0;
				FOR(k,i,j+1) if(S[k] == 't') x++;
				ans = max(ans, ((double)(x-2))/(j-i+1-2));
			}
		}
	}
	
	printf("%.10f\n", ans);
	return 0;

}
