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

	int A, B;
	cin >> A >> B;

	FOR(C,1,4){
		if((A*B*C)%2 == 1){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;

}
