#include <stdio.h>
using namespace std;

int main() {
	int a[10], b[10], a_cnt=0, b_cnt=0, win=0, i;
	
	
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<10; i++){
		if(a[i]==b[i]){
			a_cnt++;
			b_cnt++;
		}else if(a[i]>b[i]){
			win=1;
			a_cnt+=3;
		}else{
			win=2;
			b_cnt+=3;
		}
	}
	
	printf("%d %d\n", a_cnt, b_cnt);
	
	if(a_cnt==b_cnt){
		if(win==1) printf("A");
		else if(win==2) printf("B");
		else printf("D");
	}else if(a_cnt>b_cnt){
		printf("A");
	}else{
		printf("B");
	}
	

	
	
	return 0;
}
