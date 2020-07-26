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

	int N; cin >> N;

	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<pair<int, int>> diff;
	int _min = 400;
	REP(i,N){
		if(_min > A[i]) _min = A[i];
		else if(A[i-1] <= A[i]) continue;
		else{
			diff.push_back(make_pair(_min, A[i-1]));
			_min = A[i];
		}
	}
	if(_min != 400) diff.push_back(make_pair(_min, A.back()));


	REP(i,diff.size()){
		printf("%d %d\n", diff[i].first, diff[i].second);
	
	}

	int money = 1000;
	REP(i,diff.size()){
		int f = diff[i].first;
		int s = diff[i].second;
		int cnt = money / f;
		money += cnt * (s-f);

	}

	cout << money << endl;



	return 0;

}
