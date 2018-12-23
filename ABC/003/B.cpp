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

	char s[11];
	char t[11];
	scanf("%s",s);
	scanf("%s",t);


	char d;
	for(int i=0;s[i] != '\0';++i){

		if(s[i] != t[i]){

			if(s[i] == '@') d = t[i];
			else if(t[i] == '@') d = s[i];
			else{
				printf("You will lose\n");
				return 0;
			}

			switch(d){
				case 'a':
				case 't':
				case 'c':
				case 'o':
				case 'd':
				case 'e':
				case 'r':
					continue;
				default:
					printf("You will lose\n");
					return 0;
			}



		}

	}

	printf("You can win\n");

	return 0;

}
