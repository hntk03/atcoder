#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	string a;
	string b;
	cin >> a;
	cin >> b;
	if(a.size()>b.size()) cout << a << endl;
	else cout << b << endl;

	return 0;

}
