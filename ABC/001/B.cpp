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

	int m; cin >> m;

	if(m < 100){
		cout << "00" << endl;
	}else if(m >= 100 and m < 5001){
		if(m < 1000) cout << "0" << m / 100 << endl;
		else cout << m / 100 << endl;
	}else if(m >= 6000 and m < 30001){
		m /= 1000;
		m += 50;
		cout << m << endl;
	}else if(m >= 35000 and m < 70001){
		m /= 1000;
		m -= 30;
		m /= 5;
		m += 80;
		cout << m << endl;
	}else{
		cout << "89" << endl;
	}


	return 0;

}
