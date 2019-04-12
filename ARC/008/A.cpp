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

	int a = N * 15;
	int b = N / 10;
	b += (N%10 > 0 ? 1 : 0);
	b *= 100;

	int ans = min(a, b);
	cout << ans << endl;


	return 0;

}
