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

	long long int A, B, C, K; cin >> A >> B >> C >> K;
	if(K % 2 == 0) cout << A - B << endl;
	else cout << B - A << endl;


	return 0;

}
