#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, i, a=1, cnt=0, tmp;
	
	scanf("%d", &n);
	
	tmp=n;
	n--;
	
	while(n>0){
		a++;
		n=n-a;
		if(n%a==0){
			for(i=1; i<a; i++){
				printf("%d + ", (n/a)+i);
			}
			
			printf("%d = %d\n", (n/a)+i, tmp);
			
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
