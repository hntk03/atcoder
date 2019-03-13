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

	int A, B; cin >> A >> B;
	string S; cin >> S;

	if(S[A] != '-'){
		cout << "No" << endl;
		return 0;
	}else{
		REP(i,A) if(S[i] < '0' or S[i] > '9'){
			cout << "No" << endl;
			return 0;
		}
		REP(i,B) if(S[A+i+1] < '0' or S[A+i+1] > '9'){
			cout << "No" << endl;
			return 0;
		}
	}


	cout << "Yes" << endl;

	return 0;

}
