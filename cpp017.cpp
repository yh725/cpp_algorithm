#include <stdio.h>
using namespace std;

int main() {
	int i, n, num, sum=0;
	
	scanf("%d", &n);
	
	while(n>0){
		
		sum=0;
		
		scanf("%d", &num);
		
		for(i=1; i<=num; i++){
			sum+=i;
		}
		
		scanf("%d", &num);
		
		if(num==sum){
			printf("YES");
		}else{
			printf("NO");
		}
		n--;
	}
	
	return 0;
}
