#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string s; cin >> s;		

	char a = s[0];
	FOR(i,1,4){
		if(a == s[i]){
			cout << "Bad" << endl;
			return 0;
		}else{
			a = s[i];
		}
	}

	cout << "Good" << endl;

	return 0;

}
