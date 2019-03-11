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

int manhatan(int a, int b, int c, int d){
	return abs(a-b)+abs(c-d);
}


int main(void){

	int N, M; cin >> N >> M;

	vector<int> a(N);
	vector<int> b(N);
	REP(i,N) cin >> a[i] >> b[i];

	vector<int> c(M);
	vector<int> d(M);
	REP(i,M) cin >> c[i] >> d[i];


	REP(i,N){
		vector<pair<int, int>> dist(M);
		REP(j,M){
			dist[j] = make_pair(manhatan(a[i], c[j], b[i], d[j]), j+1);
		}
		SORT(dist);
		cout << dist.front().second << endl;


	}



	return 0;

}
