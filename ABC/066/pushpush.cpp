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

	int n; cin >> n;
	vector<int> a(n);

	REP(i,n) cin >> a[i];

	vector<int> b;
	REP(i,n){
		b.push_back(a[i]);
		reverse(b.begin(), b.end());
	}

	REP(i,n-1){
		cout << b[i] << ' ';
	}
	cout << b[n-1] << endl;


	return 0;

}
