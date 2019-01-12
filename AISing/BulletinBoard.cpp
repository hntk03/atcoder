#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N; scanf("%d", &N);
	int H,W; scanf("%d %d", &H, &W);

	int ans = 0;
	REP(i,N){
		int leftdown = i+H;
		REP(j,N){
			int right = j+W; 
			if(leftdown <= N && right <= N) ans++;
		}
	}

	printf("%d\n", ans);

	return 0;

}
