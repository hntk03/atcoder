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

	int N; cin >> N;
	vector<int> h(N);
	REP(i,N) cin >> h[i];

	int ans = 0;
	int active = 0;

	REP(i,N){
		if(active >= h[i]){
			active = h[i];
		}else{
			ans += h[i] - active;
			active = h[i];
		}
	}
	cout << ans << endl;


	return 0;

}
