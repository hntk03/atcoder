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

	VI p(N);
	int sum = 0;
	REP(i,N){
		cin >> p[i];
		sum += p[i];
	}

	SORT(p);
	int ans = sum - p.back() + p.back()/2;
	cout << ans << endl;


	return 0;

}
