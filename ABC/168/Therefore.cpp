#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string N; cin >> N;

	char s = N.back();
	if(s == '2' or s == '4' or s == '5' or s == '7' or s == '9') cout << "hon" << endl;
	else if(s == '0' or s == '1' or s == '6' or s == '8') cout << "pon" << endl;
	else if(s == '3') cout << "bon" << endl;

	return 0;

}
