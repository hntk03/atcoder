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

const int mod = 1e9 + 7;


int main(void){

	long long A, B, C; cin >> A >> B >> C;

	cout << A * B % mod * C % mod << endl;



	return 0;

}
