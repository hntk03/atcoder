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

	int A, B; cin >> A >> B;

	bool ans = false;
	if(A%3 == 0) ans = true;
	else if(B%3 == 0) ans = true;
	else if((A+B)%3 == 0) ans = true;

	if(ans == true) cout << "Possible" << endl;
	else cout << "Impossible" << endl;


	return 0;

}
