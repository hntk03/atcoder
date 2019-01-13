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


#define NUM 4

int main(void){

	int n[NUM];
	scanf("%d %d %d %d", &n[0],&n[1],&n[2],&n[3]);


	int flag[NUM]={0};

	REP(i,NUM){
		switch(n[i]){
			case 1:
				if(flag[0] == 1){
					printf("NO\n");
					return 0;
				}else{
					flag[0]++;
					break;
				}

			case 4:
				if(flag[1] == 1){
					printf("NO\n");
					return 0;
				}else{
					flag[1]++;
					break;
				}

			case 7:
				if(flag[2] == 1){
					printf("NO\n");
					return 0;
				}else{
					flag[2]++;
					break;
				}

			case 9:
				if(flag[3] == 1){
					printf("NO\n");
					return 0;
				}else{
					flag[3]++;
					break;
				}
			default:
				printf("NO\n");
				return 0;
		}


	}

	printf("YES\n");
	return 0;

}
