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

	int N, M; cin >> N >> M;

	int ans = 0;
	if((M/2) >= N){
		ans += (N);
		M -= (2*N);
		ans += (M/4);
	}else{
		ans += (M/2);
		M -= (M/2)*2;
		ans += (M/4);
	}

	cout << ans << endl;

	return 0;

}
