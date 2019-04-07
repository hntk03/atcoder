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
	vector<int> x(N);
	vector<int> y(N);
	vector<int> h(N);
	REP(i,N) cin >> x[i] >> y[i] >> h[i];

	int MAX = 100;
	for(int posY = 0; posY <= MAX; posY++){
		for(int posX = 0; posX <= MAX; posX++){
			int needH = -1;

			REP(i,N){
				if(h[i] > 0){
					int tmp = h[i] + abs(posY - y[i]) + abs(posX - x[i]);
					if(needH == -1) needH = tmp;
					else{
						if(needH != tmp){
							needH = -2;
							break;
						}
					}
				}
			}

			if(needH == -2) continue;
			REP(i,N){
				if(h[i] == 0){
					int dist = abs(posY - y[i]) + abs(posX - x[i]);
					if(needH > dist){
						needH = -2;
						break;
					}

				}

			}
			if(needH == -2) continue;
			cout << posX << " " << posY << " " <<  needH << endl;

		}
	}



	return 0;

}
