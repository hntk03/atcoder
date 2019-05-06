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
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int ans = 1 << 30;
	FOR(i,-100,101){
		int sum = 0;
		REP(j,N) sum += abs((int)pow(i-a[j],2));
		ans = min(ans, sum);
	}

	cout << ans << endl;




	return 0;

}
