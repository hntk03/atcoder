#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


const int MAX = 100000;

int main(void){

	int N, K; cin >> N >> K;
	vector<int> v(MAX, 0);
	REP(i,N){
		int a, b; cin >> a >> b;
		v[a] += b;
	}

	int sum = 0;
	REP(i,MAX){
		if()

	}



	return 0;

}
