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
	
	int A, B, T; cin >> A >> B >> T;

	int p = T / A;
	int ans = p * B;
	cout << ans << endl;


	return 0;

}
