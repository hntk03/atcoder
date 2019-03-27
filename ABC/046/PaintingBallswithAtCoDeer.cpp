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

	int ans = 1;
	FOR(i,1,N){
		ans *= (K-1);
	}
	ans *= K;

	cout << ans << endl;

	return 0;

}
