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

	int i;
	for(i=1;;i++){
		int sum = (i*(i+1))/2;
		if(sum >= X) break;
	}


	cout << i << endl;


	return 0;

}
