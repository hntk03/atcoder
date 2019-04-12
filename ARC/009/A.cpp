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

	int N; cin >> N;

	int sum = 0;
	REP(i,N){
		int a, b; cin >> a >> b;
		sum += a * b;
	}
	
	int ans = sum * 1.05;
	cout <<  ans << endl;


	return 0;

}
