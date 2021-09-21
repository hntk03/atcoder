#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	string T; cin >> T;


	REP(i,T.length()){
		switch(T[i]){
			case '1':
				cout << S1;
				break;
			case '2':
				cout << S2;
				break;
			case '3':
				cout << S3;
				break;
		}

	}
	cout << endl;


	return 0;

}
