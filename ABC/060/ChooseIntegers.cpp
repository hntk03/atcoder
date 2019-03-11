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

	int A, B, C; cin >> A >> B >> C;

	FOR(i,A,A*B){
		if(i%B == 1){
			cout << "YES" << endl;
			return 0;
		}

	}

	cout << "NO" << endl;
	return 0;

	return 0;

}
