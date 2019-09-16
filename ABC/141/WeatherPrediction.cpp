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

	string ans;
	if(s == "Sunny"){
		ans = "Cloudy";
	}else if(s == "Cloudy"){
		ans = "Rainy";
	}else{
		ans = "Sunny";
	}

	cout << ans << endl;

	return 0;

}
