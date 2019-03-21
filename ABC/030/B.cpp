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

	int n, m; cin >> n >> m;
	n = n % 12;
	
	double deg;
	deg = abs(30.0*n - 5.5*m);

	if(deg > 180){
		deg = 360 - deg;
	}
	
	cout << deg << endl;


	return 0;

}
