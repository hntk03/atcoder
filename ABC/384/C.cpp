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

	vector<int> points(5);
	REP(i,5) cin >> points[i];
	const string names = "ABCDE";

	int N = 31;
	vector<pair<int, string>> pairs;
	FOR(i,1,N+1){
		int p = 0;
		string name = "";
		REP(j,5){
			if((i>>j)&1){
				p += points[j];
				name += names[j];
			} 
		}
		pairs.push_back(make_pair(-p, name));
	}

	sort(pairs.begin(), pairs.end());

	REP(i,N){
		cout << pairs[i].second << endl;
	}

	return 0;

}
