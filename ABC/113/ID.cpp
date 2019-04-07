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

	int N, M; cin >> N >> M;
	vector<int> P(M);
	vector<int> Y(M);
	vector<vector<pair<int, int>>> v(N);

	REP(i,M){
		cin >> P[i] >> Y[i];
		v[P[i] - 1].push_back(make_pair(Y[i], i));
	}
	
	REP(i,N){
		SORT(v[i]);
		REP(j,v[i].size()){
			Y[v[i][j].second] = j + 1;
		}
	}

	REP(i,M){
		cout << setfill('0') << setw(6) << right << P[i] << setfill('0') << setw(6) << right << Y[i] << endl;

	}



	return 0;

}
