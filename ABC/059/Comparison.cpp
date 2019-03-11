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

	string A,B;
	cin >> A;
	cin >> B;

	if(A.size() > B.size()) cout << "GREATER" << endl;
	else if(A.size() < B.size()) cout << "LESS" << endl;

	else if(A>B) cout << "GREATER" << endl;
	else if(A < B) cout << "LESS" << endl;
	else cout << "EQUAL" << endl;


	return 0;

}
