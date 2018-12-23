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

	int m;
	scanf("%d", &m);

	char vv[] = "00";

	if(m >= 100 && m <= 5000){
		m *= 10;
		vv[1] = m /1000 + '0';
		vv[0] = m /100 + '0';
	}else if(m >= 6000 && m <= 30000){
		vv[1] = (m+50) /1000 + '0';
		vv[0] = (m+50) /100+ '0';
	}else if(m >= 35000 && m <= 70000){
		m = (m - 30)/5 + 80+ '0';
		vv[1] = m /1000+ '0';
		vv[0] = m /100+ '0';
	}else{
		vv[1] = '8';
		vv[0] = '9';
	}

	
	printf("%s\n",vv);


	return 0;

}
