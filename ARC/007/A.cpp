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

	char X; cin >> X;
	string s; cin >> s;

	REP(i,s.length()){
		if(X == s[i]) continue;
		cout << s[i];
	}

	cout << endl;
	return 0;

}
