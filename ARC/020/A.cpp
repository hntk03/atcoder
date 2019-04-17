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
	A = abs(A);
	B = abs(B);

	if(A < B) cout << "Ant" << endl;
	else if(B < A) cout << "Bug" << endl;
	else cout << "Draw" << endl;


	return 0;

}
