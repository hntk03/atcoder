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

	string s; cin >> s;
	bool c = false;
	bool f = false;

	REP(i, s.length()){
		if(s[i] == 'C' and c == false) c = true;
		else if(s[i] == 'F' and c == true) f = true;
	}

	if(c == true and f == true) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
