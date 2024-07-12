#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S; cin >> S;	

	bool upper = false, lower = false;
	for(char c : S) if(isupper(c)) upper = true;
	for(char c : S) if(islower(c)) lower = true;

	int N = S.length();
	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());

	if(lower and upper and N == S.length()) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
