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

	
	if(A >= 13) cout << B << endl;
	else if(A >= 6) cout << B / 2 << endl;
	else cout << 0 << endl;
	
	


	return 0;

}
