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

	int A, B, C; cin >> A >> B >> C;
	if(B < A) swap(A, B);
	if(A < C and C < B) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
