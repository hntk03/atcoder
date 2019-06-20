#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int u = 3500;

int main(void){

	int N; cin >> N;

	FOR(h,1,u){
		FOR(n,1,u){
			int w1 = (h*n*N);
			int w2 = (4*h*n-n*N-h*N);
			if(w2 > 0){
				int w = w1 / w2;
				int ue = 4*h*n*w;
				int shita = N*n*w + N*h*w + N*h*n;
				if(ue == shita){
					cout << h << " ";
					cout << n << " ";
					cout << w1 / w2 << " ";
					cout << endl;
					return 0;

				}
			}
		}
	}


	return 0;

}
