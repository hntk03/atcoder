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
	vector<int> h(N);
	REP(i,N) cin >> h[i];
	SORT(h);

	int l = 0, r = K - 1;
	int ans = 1 << 30;
	REP(i,N-K+1){
		
		ans = min(ans, h[r] - h[l]);
		l++;
		r++;

	}

	cout << ans << endl;

	return 0;

}
