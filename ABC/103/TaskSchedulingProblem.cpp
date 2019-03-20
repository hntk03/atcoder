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

	int A, B, C; cin >> A >> B >> C;

	int ans = min(
			{abs(A-B) + abs(B-C),
			abs(A-C) + abs(C-B),
			abs(B-A) + abs(A-C),
			abs(B-C) + abs(C-A),
			abs(C-A) + abs(A-B),
			abs(C-B) + abs(B-A)}
			);


	cout << ans << endl;
	return 0;

}
