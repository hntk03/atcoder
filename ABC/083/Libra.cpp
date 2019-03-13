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

	int A, B, C, D; cin >> A >> B >> C >> D;

	int left = A + B;
	int right = C + D;
	string s;
	if(left < right) s = "Right";
	else if(left > right) s = "Left";
	else s = "Balanced";

	cout << s << endl;


	return 0;

}
