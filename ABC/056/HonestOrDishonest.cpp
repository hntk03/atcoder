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

	char a, b; cin >> a >> b;

	if(a == 'H'){
		cout << b << endl;
	}
	else if(a == 'D'){
		if(b == 'H') cout << 'D' << endl;
		else cout << 'H' << endl;
	}


	return 0;

}
