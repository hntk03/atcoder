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

	long long N; cin >> N;
	long long A, B, C, D, E; cin >> A >> B >> C >> D >> E;
	long long minnum = min({A, B, C, D, E});

	long long ans = ((N + minnum - 1) / minnum) + 4;

	cout << ans << endl;



	return 0;

}
