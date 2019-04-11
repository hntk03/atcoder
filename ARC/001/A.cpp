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

	int N; cin >> N;
	string s; cin >> s;

	int a = count(s.begin(), s.end(), '1');
	int b = count(s.begin(), s.end(), '2');
	int c = count(s.begin(), s.end(), '3');
	int d = count(s.begin(), s.end(), '4');

	int ans_min = min({a, b, c, d});
	int ans_max = max({a, b, c, d});

	cout << ans_max << ' ' << ans_min << endl;

	return 0;

}
