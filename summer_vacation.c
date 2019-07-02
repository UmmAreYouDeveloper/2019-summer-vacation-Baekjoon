/* 2558 - 곱셈
#include <stdio.h>
int main() {
	int input1, input2;
	int first, second, third;
	int result;
	printf("곱셈시킬 두 수를 입력하세요\n");
	scanf("%d %d", &input1, &input2);

	first = input2 % 10;
	second = ((input2 % 100) - first)/10;
	third = (input2 - (input2 % 100)) / 100;

	printf("%d\n", first*input1);
	printf("%d\n", second*input1);
	printf("%d\n", third*input1);

	result = (third*input1*100)+(second*input1*10)+(first*input1);
	printf("%d\n", result);

	return 0;
}
*/

/* 10171번 - 고양이
#include <stdio.h>
int main()
{
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|\n");
}
*/

/* 1330 - 두 수 비교하기
#include <stdio.h>
int main() {

	int input1, input2;

	scanf("%d %d", &input1, &input2);

	if (input1 < input2) {
		printf("<\n");
	}
	else if (input1 > input2) {
		printf(">\n");
	}
	else {
		printf("==\n");
	}

	return 0;
}
*/

/* 2753 - 윤년 
#include <stdio.h>

int main() {
	int input;
	scanf("%d",&input);
	if (input % 4 == 0 && input % 100 != 0 || input % 400 ==0) {
		printf("1\n");
	}
	else printf("0\n");

	return 0;
}
*/

/* 10817 - 세 수
#include <stdio.h>
#define MAX2(a,b) a > b ? a : b

int main() {
	int input1, input2, input3;
	int result, max;

	scanf("%d %d %d", &input1, &input2, &input3);

	max = MAX2(input1, input2);
	max = MAX2(max, input3);

	if (max == input1) {
		result = MAX2(input2, input3);
	}
	else if (max == input2) {
		result = MAX2(input1, input3);
	}
	else {
		result = MAX2(input1, input2);
	}

	printf("%d\n", result);

	return 0;
}
*/

/* 2884 - 알람시계
#include <stdio.h>

int main(){
    int hour, minute;
    scanf("%d %d",&hour, &minute);

    minute -= 45;

    if(minute < 0){
        minute += 60;
        hour --;
        if(hour<0){
            hour += 24;
        }
    }

    printf("%d %d\n",hour, minute);

    return 0;
}
*/

/* 10950 - A + B -3
#include <stdio.h>

int main(){
    int test;
    int input1,input2;
    int result;

    scanf("%d",&test);

    while(test--){
        scanf("%d %d",&input1, &input2);
        result = input1 + input2;
        printf("%d\n",result);
    }

    return 0; 
}
*/

/* 11021 - A+B -7
#include <stdio.h>

int main(){
    int test;
    int case_num = 1;
    int input1,input2;
    int result;

    scanf("%d",&test);

    while(test--){
        scanf("%d %d",&input1, &input2);
        result = input1 + input2;
        printf("Case #%d: %d\n",case_num++,result);
    }

    return 0; 
}
*/

/* 11022 - A+B -8
#include <stdio.h>

int main(){
    int test;
    int case_num = 1;
    int input1,input2;
    int result;

    scanf("%d",&test);

    while(test--){
        scanf("%d %d",&input1, &input2);
        result = input1 + input2;
        printf("Case #%d: %d + %d = %d\n",case_num++,input1,input2,result);
    }

    return 0; 
}
*/

/* 10952 - A+B - 5
#include <stdio.h>

int main(){
    int input1,input2;
    int result;

    while(1){
        scanf("%d %d",&input1, &input2);
        if(input1 ==0 && input2 == 0) break;
        result = input1 + input2;
        printf("%d\n",result);
    }

    return 0; 
}
*/

/* 10951 - A+B - 4
#include <stdio.h>

int main(){
    int input1,input2;
    int result;

    while( scanf("%d %d",&input1, &input2) != EOF){
        result = input1 + input2;
        printf("%d\n",result);
}
return 0;
}

