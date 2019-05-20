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

	double ans = 0.0;
	FOR(i,1,N+1){
		int n = ceil(log2(K/(double)i));
		if(n < 1) ans += 1.0;
		else ans +=  (double)pow(0.5,n);
	}
	ans *= (1.0/N);

	cout << setprecision(15)  << ans << endl;

	


	return 0;

}
