#include <stdio.h>
#include <algorithm>
#include <cstring>	//�Ǵ� #include <string.h> 
using namespace std;

int main(){
	
	//���ڿ� �Է� 
	char s1[100], s2[100];
	int i, flag=1, max=-2147000000;
	
	scanf("%s", &s1);
	scanf("%s", &s2);
		

	//���̸�ŭ �������� ���� 
	sort(s1, s1+(int)strlen(s1));
	sort(s2, s2+(int)strlen(s2));
	
	//�Ƴ��׷� 
	if((int)strlen(s1) == (int)strlen(s2)){
		for(i=0; i<(int)strlen(s1); i++){
			if(s1[i]!=s2[i]){
				flag=0;
				printf("NO");
				exit(0); //���� 
			}
		}
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}
