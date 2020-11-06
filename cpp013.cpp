#include <stdio.h>
using namespace std;

int cnt[11];
int main(){
	int i, max=-2147000000, res;
	char a[101];
	scanf("%s", &a);
	
	for(i=0; a[i]!='\0'; i++){
		cnt[a[i]-48]++;
	}
	
	for(i=0; i<=9; i++){
		if(cnt[i]>=max){
			res = i;
			max = cnt[i];
		}
	}
	
	printf("%d\n", res);	
	
	return 0;
}
