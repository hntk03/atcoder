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

	string s; cin >> s;
	int a_idx = s.find_first_of('A');
	int z_idx = s.find_last_of('Z');

	cout << z_idx - a_idx + 1 << endl;

	return 0;

}
