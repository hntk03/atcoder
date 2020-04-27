#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	int SIZE = S.length();
	ll N = stoll(S);

	ll ans = 0;
	ll num = 2019;
	while(to_string(num).length() < 200001){
		string n = to_string(num);
		int size = n.length();
		REP(i,SIZE-size+1){
			if(n == S.substr(i, size)) ans++;
		}
		num += 2019;
	}

	cout << ans << endl;

	return 0;

}
