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

	int sum = 0;
	int tmp = N;

	while(tmp){
		sum += tmp%10;
		tmp /= 10;
	}

	if(N%sum == 0) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
