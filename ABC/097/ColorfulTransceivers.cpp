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

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(abs(a-b) <= d and abs(b-c) <= d) cout << "Yes" << endl;
	else if(abs(a-c) <= d) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
