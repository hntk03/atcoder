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

	int N = 5;
	vector<int> v(N);
	REP(i,N) cin >> v[i];
	vector<int> c;

	REP(i,N-2){
		FOR(j, i+1, N-1){
			FOR(k, j+1, N){
				c.push_back(v[i]+v[j]+v[k]);
			}
		}
	}

	SORT(c);
	cout << c[c.size()-3] << endl;

	return 0;

}
