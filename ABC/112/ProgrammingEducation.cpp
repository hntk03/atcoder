#include <stdio.h>
#include <cmath>
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
	if(N == 1){
		cout << "Hello World" << endl;
		
	}else if(N == 2){
		int A, B; cin >> A >> B;
		cout << A+B << endl;
	}


	return 0;

}
