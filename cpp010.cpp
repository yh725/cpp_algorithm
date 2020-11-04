#include <stdio.h>
using namespace std;

int digit_sum(int x){
	int i, sum=0;
	
	for(i=x; i>0; i=i/10){
		sum = sum + i%10;
	}
	
	return sum;
}

int main(){
	//freopen("input010.txt", "rt", stdin);
	
	int n, num, i, sum, max=-2147000000, res=-2147000000;
	scanf("%d", &n);
	
	for(i=1; i<=n ; i++){
		scanf("%d", &num);
		sum = digit_sum(num);
		
		if(max<sum){
			max = sum;
			res = num;
		}else if(max==sum){
			if(res<num){
				res = num;
			}
		}
	}
	
	printf("%d\n", res);
	
	return 0;
}
