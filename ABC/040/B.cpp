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

	int n; cin >> n;

	int ans = 1 << 30;
	FOR(i,1,n+1){
		int x = n / i;
		ans = min(ans, abs(i-x)+n-(i*x));
	}

	cout << ans << endl;

	


	return 0;

}
