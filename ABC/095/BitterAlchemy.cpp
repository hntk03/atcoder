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

	int N, X; cin >> N >> X;
	vector<int> m(N);
	int sum = 0;
	REP(i,N){ 
		cin >> m[i];
		sum += m[i];
	}

	SORT(m);
	int x = X - sum;
	int ans = N + x/m.front();

	cout << ans << endl;


	return 0;

}
