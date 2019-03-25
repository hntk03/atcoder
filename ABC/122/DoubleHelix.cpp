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

	char b; cin >> b;

	if(b == 'A') cout << 'T' << endl;
	else if(b == 'C') cout << 'G' << endl;
	else if(b == 'T') cout << 'A' << endl;
	else if(b == 'G') cout << 'C' << endl;


	return 0;

}
