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

	string s1, s2, s3; cin >> s1 >> s2 >> s3;

	cout << (char)(s1[0] - 'a' + 'A');
	cout << (char)(s2[0] - 'a' + 'A');
	cout << (char)(s3[0] - 'a' + 'A');
	cout << endl;


	return 0;

}
