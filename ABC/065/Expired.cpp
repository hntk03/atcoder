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

	int X, A, B; cin >> X >> A >> B;

	int now = B - A;
	if(now <= 0) cout << "delicious" << endl;
	else if(now <= X) cout << "safe" << endl;
	else cout << "dangerous" << endl;


	return 0;

}
