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
	int M = max({A, B, C});
	
	if((3*M)%2 ==  (A+B+C)%2){
		cout << (3*M - (A+B+C))/2 << endl;
	}else{
		cout << (3*(M+1) - (A+B+C))/2 << endl;
	}



	return 0;

}
