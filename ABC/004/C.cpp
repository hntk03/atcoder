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
	N = N % 30;
	string card = "123456";

	REP(i,N){
		int l = i % 5;
		int r = i % 5 + 1;
		swap(card[l], card[r]);
	}

	cout << card << endl;

	return 0;

}
