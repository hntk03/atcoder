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

	int X; cin >> X;
	int sum = 0;

	REP(i,X){
		if(sum == X){
			cout << i << endl;
			return 0;
		}
	}


	return 0;

}
