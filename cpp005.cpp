/*주민번호로 나이, 성별 구하기*/

#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int year, age;
	char rrNum[14];
	
	//현재 날짜 기 
	time_t curr_time;
	struct tm *curr_tm;
	curr_time = time(NULL);
	curr_tm = localtime(&curr_time);
	
	cin >> rrNum ;
	
	if(rrNum[7]=='1'||rrNum[7]=='2'){
		year = 1900 + ((rrNum[0]-48)*10+(rrNum[1]-48));
		age = curr_tm->tm_year + 1900 - year + 1;
		
		if(rrNum[7]=='1'){
			cout << age << " M" << endl;
		}else if(rrNum[7]=='2'){
			cout << age << " W" << endl;
		}
	}else if(rrNum[7]=='3'||rrNum[7]=='4'){
		year = 2000 + ((rrNum[0]-48)*10+(rrNum[1]-48));
		age = curr_tm->tm_year + 1900 - year + 1;
		
		if(rrNum[7]=='3'){
			cout << age << " M" << endl;
		}else if(rrNum[7]=='4'){
			cout << age << " W" << endl;
		}
	}
	
	return 0;
}
