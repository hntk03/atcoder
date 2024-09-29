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

	int prev = S.find('A');
	int ans = 0;
	for(char target='B';target <= 'Z';target++){
		int next = S.find(target);
		ans += abs(next-prev);
		prev = next;
	}

	cout << ans << endl;

	return 0;

}
