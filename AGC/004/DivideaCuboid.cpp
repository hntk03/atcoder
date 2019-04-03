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

	long long A, B, C; cin >> A >> B >> C;
	if(A%2 == 0 or B%2 == 0 or C%2 == 0)  cout << 0 << endl;
	else{
		cout << min(A*B, min(B*C, C*A)) << endl;
	}

	return 0;

}
