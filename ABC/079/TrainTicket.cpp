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

	char a[5]; scanf("%s", a);
	char s[20] = "";

	s[0] = a[0];
	s[2] = a[1];
	s[4] = a[2];
	s[6] = a[3];
	s[7] = '=';
	s[8] = '7';
	REP(i,8){
	int ans = (a[0] - '0');
		bitset<3> b(i);
		REP(j,3){
			switch(b[j]){
				case true:
					ans += a[j+1] - '0';
					s[2*j+1] = '+';
					break;
				case false:
					ans -= a[j+1] - '0';
					s[2*j+1] = '-';
					break;
			}
			}
			if(ans == 7){ 
				printf("%s\n", s);
				return 0;
		}

	}



	return 0;

}
