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
	int _min = 100;
	int _max = -1;
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	SORT(a);

	cout << a.back() - a.front() << endl;



	return 0;

}
