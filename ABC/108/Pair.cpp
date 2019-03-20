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

	int K; cin >> K;

	int ans = 0;
	FOR(i,1,K+1){
		FOR(j,1,K+1){
			if(i != j and i%2 != j%2) ans++;
		}
	}
	ans /= 2;
	cout << ans << endl;


	return 0;

}
