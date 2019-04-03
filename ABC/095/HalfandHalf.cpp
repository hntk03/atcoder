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

	int A, B, C, X, Y; cin >> A >> B >> C >> X >> Y;

	int ans = 1 << 30;
	REP(i,100001){
		ans = min(ans, i*2*C+max(0, X-i)*A+max(0,Y-i)*B);
	}
	cout << ans << endl;

	return 0;

}
