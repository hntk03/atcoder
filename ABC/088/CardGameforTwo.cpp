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
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	SORT(a);
	int al = 0;
	int bo = 0;
		
	REP(i,N){
		if(i%2 == 0) al += a[N-i-1];
		else bo += a[N-i-1];
	}

	cout << al - bo << endl;


	return 0;

}
