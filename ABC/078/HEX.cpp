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

	char x, y; cin >> x >> y;
	if(x<y) cout << '<' << endl;
	else if(x>y) cout << '>' << endl;
	else cout << '=' << endl;


	return 0;

}
