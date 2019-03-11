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

	
	int W, a, b; cin >> W >> a >> b;

	int ans = max(a,b) - min(a+W, b+W);
	
	if(ans < 0) cout << 0 << endl;
	else cout << ans  << endl;

	return 0;

}
