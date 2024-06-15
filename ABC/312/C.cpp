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

	int N, M; cin >> N >> M;
	
	vector<int> A(N), B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];

	vector<pair<int, int> > events;
	REP(i,N) events.push_back(make_pair(A[i],0));
	REP(i,M) events.push_back(make_pair(B[i]+1,1));

	sort(events.begin(), events.end());

	int NA = 0, NB = M;

	for(auto [p, type] : events){
		if(type == 0) NA++;
		else NB--;

		if(NA >= NB){
			cout << p << endl;
			return 0;
		}
	}

	return 0;

}
