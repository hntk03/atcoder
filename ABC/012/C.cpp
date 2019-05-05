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
	int sum = 0;
	FOR(i,1,10) FOR(j,1,10) sum += (i * j);

	int p = sum - N;

	FOR(i, 1, 10){
		int quotient = p / i;
		if(p % i == 0 and quotient < 10) cout << i << " x " << quotient << endl;
	}


	return 0;

}
