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

	int N;
	char c1, c2; cin >> N >> c1 >> c2;

	string S; cin >> S;

	for(char c : S){
		char t = c == c1 ? c1 : c2;
		cout << t;
	}

	cout << endl;

	return 0;

}
