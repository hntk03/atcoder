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

	int Y; cin >> Y;
	bool ans = false;

	if(Y % 400 == 0) ans = true;
	else if(Y % 100 == 0) ans = false;
	else if(Y % 4 == 0) ans = true;
	else ans = false;

	cout << (ans ? "YES" : "NO") << endl;

	return 0;

}
