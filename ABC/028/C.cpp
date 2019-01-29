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

	int n[5];
	int ans[20] = {0};
	REP(i,5) scanf("%d", &n[i]);

	int p = 0;
	REP(i,5){
		FOR(j,i+1,5){
			FOR(k,j+1,5){
				ans[p] = n[i]+n[j]+n[k];
					p++;
			}
		}
	}

	sort(ans,ans+20);
	printf("%d\n",ans[17]);

	return 0;

}
