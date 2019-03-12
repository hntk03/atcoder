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


#define MAX 100000

int main(void){

	int N; cin >> N;
	
	int ans = 0;
	REP(i,N){
	 int l, r; cin >> l >> r;
	 FOR(j,l,r+1) ans++;
	}

	cout << ans << endl;

	return 0;

}
