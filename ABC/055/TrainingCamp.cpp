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

#define D 1000000007


int main(void){

	long long int N; cin >> N;

	long long int ans = 1;
	FOR(i,1,N+1){
		ans = ((ans%D)*(i%D))%D;
	}

	cout << ans << endl;



	return 0;

}
