#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, K; cin >> N >> K;
	vector<int> x(N);
	REP(i,N) cin >> x[i];

	int l = 0;
	int r = K-1;

	int ans = 1 << 30;
	REP(i,N-K+1){

		ans = min(ans, abs(x[r]-x[l])+abs(x[l]));
		ans = min(ans, abs(x[r]-x[l])+abs(x[r]));

		l++;
		r++;
	}

	cout << ans << endl;

	return 0;

}
