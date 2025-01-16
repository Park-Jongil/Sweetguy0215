#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int		months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int		year,month,i;
	int		weeks = 1;		// 1900년 1월 1일 => 월요일(1)  
	
	printf("Input Year and Month = ");
	scanf("%d %d",&year,&month);

	for(i=1900;i<year;i++) {
		weeks += 1 + (i%4==0?(i%100==0?(i%400==0?1:0):1):0);	// 년도별 1일증가, 윤년일 경우에는 1일 추가 (365일 % 7 = 1 요일하나 증가) 
	}
	months[2] = months[2] + (year%4==0?(year%100==0?(year%400==0?1:0):1):0); // 2월 윤년계산 
	
	for(i=1;i<month;i++) weeks += months[i];
	weeks = weeks %7;
	// 출력 시작
	printf("\t%4d년 %2d월\n\n",year,month);
	printf(" 월 화 수 목 금 토 일 \n");
	for(i=0;i<weeks;i++) printf("   ");
	for(i=1;i<=months[month];i++) {
		printf(" %2d",i);
		if ((weeks+i)%7==0) printf("\n");
	}	
	return 0;
}
