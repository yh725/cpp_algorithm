#include <stdio.h>
using namespace std;

int main() {
	int n, i, tmp, cnt=0, num;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		tmp = i;
		while(tmp>0){
			num = tmp%10;
			if(num==3) cnt++;
			tmp = tmp/10;
		}
			
	}
	
	printf("%d\n", cnt);

	
	return 0;
}
