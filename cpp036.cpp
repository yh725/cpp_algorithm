#include <stdio.h>

int main(){
	//»ğÀÔ Á¤·Ä  
	int n, i, j, tmp;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}

	for(i=1; i<n; i++){
		tmp=num[i];
		for(j=i-1; j>=0; j--){
			if(num[j]>tmp){
				num[j+1]=num[j];
			}else{
				break;
			}
		}
		num[j+1]=tmp;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", num[i]);
	}
	
	
	return 0;
}
