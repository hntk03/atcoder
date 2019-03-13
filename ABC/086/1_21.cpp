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

	string a, b; cin >> a >> b;
	string s = a + b;

	int x = 0;
	REP(i,s.length()){
		x = x*10 + (s[i] - '0');
	}

	bool ans = false;
	REP(i,1000){
		if((i*i) == x) ans = true;
	}

	if(ans == true) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
