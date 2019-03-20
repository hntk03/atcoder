#include <stdio.h>
#include <cmath>
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
	int max_value = -1;
	int min_value = 1 << 30;

	REP(i,N){
		int A; cin >> A;
		max_value = max(max_value, A);
		min_value = min(min_value, A);
	}

	cout << max_value - min_value << endl;

	return 0;

}
