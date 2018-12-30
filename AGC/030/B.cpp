#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

// bool check(int burn[], int n){
//
// 	REP(i,n){
// 		if(burn[i] == 0) return 1;
// 	}
//
// 	return 0;
// }


int main(void){

	long long int l,n; scanf("%lld %lld", &l, &n);
	long long int x[n];
	int burn[n] = {0};

	REP(i,n) scanf("%lld", &x[i]);

	long long int left = n-1;
	long long int right = 0;
	long long ans = 0;
	long long int now = 0;
	long long int m = 0;
	while(1){

		long long int diff_right = min(llabs(x[right]-now),l-llabs(x[right]-now));
		// printf(":%lld\n",diff_right);
		long long int diff_left = min(llabs(x[left]-now),l-llabs(x[left]-now));
		// printf(":%lld\n",diff_left);
		m = max(diff_left,diff_right);
		ans += m;
		if(m == diff_right){ 
			burn[right] = 1;
			now = x[right];
		}
		else{ 
			burn[left] = 1;
			now = x[left];
			}
		while(burn[left]) left = ((left+l)-1) % n; 
		// printf(" %d", burn[i])
		while(burn[right]) right= (right+1) % n; 
		// printf("m:%d\n",m);
		// printf("::%d %d\n",left, right);
		if (right == left){
			m = max(llabs(x[right]-now),l-llabs(x[right]-now));
		// 	printf("----\n");
		// 	printf("m:%d\n",now);
		// printf("::%d %d\n",llabs(x[right]-now),l-llabs(x[right]-now));
		// 	printf("m:%d\n",m);
			ans += m;

			break;
		}

		// break;



		// printf(":%lld\n", max(diff_left,diff_right));
		// now = max(diff_right, diff_left);
		// if(left == right) break;
		// while(burn[left]) left--; 
		// while(burn[right]) right++;
	}


	printf("%lld\n", ans);

	return 0;

}
