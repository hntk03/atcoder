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
	vector<bool> from_1(N, false);
	vector<bool> to_N(N, false);

	REP(i,M){
		int a, b; cin >> a >> b; a--; b--;
		int sum = a + b; a = min(a, b); b = sum - a;
		if(a == 0) from_1[b] = true;
		if(b == N-1) to_N[a] = true;
	}

	REP(i,N){
		if(from_1[i] == true and to_N[i] == true){
			cout << "POSSIBLE" << endl;
			return 0;
		}

	}

	cout << "IMPOSSIBLE" << endl;
	return 0;

}
