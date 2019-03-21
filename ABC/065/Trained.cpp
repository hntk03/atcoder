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
	VI a(N);
	REP(i,N) cin >> a[i];

	int idx = 1;
	int ans = 1;
	REP(i,N-1){
		idx = a[idx-1];
		if(idx == 2){
			cout <<  ans << endl;
			return 0;
		}
		ans++;
	}

			cout << -1 << endl;
	return 0;

}
