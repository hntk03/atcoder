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

	int N; cin >> N;
	vector<int> red;
	vector<int> blue;

	REP(i,N){
		int X; cin >> X;
		char C; cin >> C;
		if(C == 'R') red.push_back(X);
		else blue.push_back(X);
	}

	SORT(red);
	SORT(blue);

	REP(i,red.size()){
		cout << red[i] << endl;
	}

	REP(i,blue.size()){
		cout << blue[i] << endl;
	}

	return 0;

}
