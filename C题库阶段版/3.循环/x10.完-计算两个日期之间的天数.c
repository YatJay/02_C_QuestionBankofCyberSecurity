/*计算两个日期之间的天数。注：判断年份是否为闰年的方法——为400的倍数为闰年，如2000年；若非100的倍数，而是4的倍数，为闰年，如1996年。*/

#include <stdio.h>

int days(int year,int month,int day);
int main(void){
    int year1,month1,day1,year2,month2,day2;
    int days1,days2;
    printf("Please input first date yyyy/mm/dd:");
    scanf("%d/%d/%d",&year1,&month1,&day1);
    printf("\nPlease input second date yyyy/mm/dd:");
    scanf("%d/%d/%d",&year2,&month2,&day2);
    days1=days(year1,month1,day1);
    days2=days(year2,month2,day2);
    
    printf("The gap is %d days.",days2-days1);
    
    
    return 0;
}
int days(int year,int month,int day){
	int sumdays=0,yeardays=0,monthdays=0;
	int i,pingyeardays=365,runyeardays=366;
	int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<year;i++){
		if(i%400==0||(i%400!=0&&i%4==0)){
			yeardays+=runyeardays;
		}
		else{
			yeardays+=pingyeardays;
		}
	}
	if(year%400==0||(year%400!=0&&year%4==0)){
		for(i=1;i<month;i++){
			monthdays+=run[i];
			}
	}
	else{
		for(i=1;i<month;i++){
			monthdays+=ping[i];
			}
		}
	sumdays=yeardays+monthdays+day;
	return sumdays;
}
