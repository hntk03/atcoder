#include <stdio.h>
#include <cmath>
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

	int A, B, C, K; cin >> A >> B >> C >> K;

	vector<int> v{A,B,C};
	SORT(v);
	int max_value = v.back();
	REP(i,K) max_value *= 2;
	



	int ans = 0;
	REP(i,2) ans += v[i];
	ans += max_value;

	cout << ans << endl;




	return 0;

}
