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

	int N, T, A; cin >> N >> T >> A;
	int H;
	int ans = 1;
	double min_value = 10000000;
	REP(i,N){
		cin >> H;
		double ave_temp = T - (H*0.006);
		if(abs(ave_temp-A) < min_value){
			min_value = abs(ave_temp-A);
			ans = i+1;
		}
	}

	cout << ans << endl;


		return 0;

}
