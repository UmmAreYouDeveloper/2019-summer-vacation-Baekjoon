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
*/

/* 10818 - 최소, 최대
#include <stdio.h>
#include <stdint.h>

int main(){
    int size;
    int min, max;
    
    scanf("%d",&size);

    int array[size];

    min = INT32_MAX;
    max = INT32_MIN;

    for(int i=0;i<size;i++){
        scanf("%d",array+i);
        if(max<array[i]) max = array[i];
        if(min>array[i]) min = array[i];
    }

    printf("%d %d\n",min, max);

    return 0;
}
*/

/* 2562 -  최댓값
#include <stdio.h>
#include <stdint.h>

int main(){
    int size = 9;
    int locator;
    int max;
    int array[size];

    max = INT32_MIN;

    for(int i=0;i<size;i++){
        scanf("%d",array+i);
        if(max<array[i]){
            max = array[i];
            locator = i;
        }
    }

    printf("%d %d\n",max,locator+1);

    return 0;
}
*/

/* 3052 - 나머지
#include <stdio.h>

int main(){
    int count_diff=0;
    int array[10];
    int remain[42]={0,};

    for(int i=0;i<10;i++){
        scanf("%d",array+i);
        remain[array[i] %= 42]++;
    }

    for(int j=0;j<42;j++){
        if(remain[j] != 0) count_diff++;
    }

    printf("%d\n",count_diff);

    return 0;
}
*/

/* 15596 - 정수  N개의 합
#include <stdio.h>

long long int sum(int *a,int n);

int main(){
int size;
int a[]={0};

printf("n을 입력하시오 : ");
scanf("%d",&size);
printf("\n");
printf("n개의 숫자를 입력하시오 : ");
for(int i=0;i<size;i++) scanf("%d",a+i);

printf("%lld\n",sum(a,size));

return 0;
}

long long int sum(int *a, int n){
    int start, end;
    start = 0;
    end = n;
    long long int result=0;
   for(start;start<end;start++){
       result += a[start];
   }
    return result;
}
*/

/* 10872 - 팩토리얼 
#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    int result;
    scanf("%d",&n);
    result = factorial(n);
    printf("%d\n",result);

    return 0;
}

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
*/

/* 2447 - 별 찍기 - 10
#include <stdio.h>

char p[6562][6562];
void Star(int n,int x,int y);

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n) p[i][j] = '\0';
            else p[i][j] = ' ';
        }
    }
    
    Star(n,(n-1)/2,(n-1)/2);

    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}

void Star(int n,int x, int y){
    if(n==3){
        p[y-1][x-1] = '*';
        p[y-1][x] = '*';
        p[y-1][x+1] = '*';
        p[y][x-1] = '*';
        p[y][x+1] = '*';
        p[y+1][x-1] = '*';
        p[y+1][x] = '*';
        p[y+1][x+1] = '*';
        return;
    }

    Star(n/3,x-(n/3),y-(n/3)); // 1
    Star(n/3,x,y-(n/3));
    Star(n/3,x+(n/3),y-(n/3));
    Star(n/3,x-(n/3),y); // 4
    Star(n/3,x+(n/3),y);
    Star(n/3,x-(n/3),y+(n/3)); // 7
    Star(n/3,x,y+(n/3));
    Star(n/3,x+(n/3),y+(n/3));
}
*/

/* 11729 - 하노이 탑 이동 순서
#include <stdio.h>

void Hanoi(int n, char src, char aux, char dest);

int main(){
    int n;
    int i,cnt=1;
  
    scanf("%d",&n);

    for(i=2;i<=n;++i) cnt = 2*cnt+1;

    printf("%d\n",cnt);

    Hanoi(n, '1', '2', '3');

    return 0;
}

void Hanoi(int n, char src, char aux, char dest){
    if (n == 1)
	{
		printf("%c %c\n", src, dest);
	}

	else
	{
		Hanoi(n - 1, src, dest, aux);
		printf("%c %c\n", src, dest);
		Hanoi(n - 1, aux, src, dest);
	}
}
*/

/* 1712 - 손익분기점
#include <stdio.h>

int main(){
    long long int fix;
    long long int variable;
    long long int benefit;
    long long int find;
    long long int i;

    scanf("%lld %lld %lld",&fix,&variable,&benefit);

    if(variable >= benefit){
        printf("-1\n");
        return 0;
    } 

    find = fix / (benefit - variable) +1;

    printf("%lld\n",find);

    return 0;
}
*/

/* 1193 - 분수 찾기
#include <stdio.h>

int main(){
    int num;
    int n;
    int find;
    int start, end;
    int offset;

    scanf("%d",&num);

    for(n=1;;n++){
        end = n*(n+1);
        if(end > 2*num-2){
            find = n;
            break;
        }
    }

    start = (n*(n-1)+2)/2; // 계차 수열 시작 번호 1 2 4 7 11 ....

    offset = num - start;

    if(n % 2 == 1) printf("%d/%d\n",n-offset,offset+1);
    else printf("%d/%d\n",offset+1,n-offset);

    return 0;

}
*/

/* 2869 - 달팽이는 올라가고 싶다
#include <stdio.h>

int main(){
    long long int up;
    long long int down;
    long long int length;
    long long int count = 0;
    
    scanf("%lld %lld %lld",&up,&down,&length);
    
  
    count = (length-down-1) / (up-down)+1;

    printf("%lld\n",count);

    return 0;

}
*/

/* 10250 - ACM 호텔
#include <stdio.h>

int main(){
    int testcase;
    int h;
    int w;
    int count;
    int x,y;
   scanf("%d",&testcase);

   while(testcase--){
    scanf("%d %d %d",&h,&w,&count);
    
    y=count % h; // 층
    x=count / h; // 엘베 까지 거리
    x++;
    if(y==0){
        x--;
        printf("%d%02d\n",h,x);

    }else{
    printf("%d%02d\n",y,x);
    }
   }

   return 0;
}
*/

/* 1011 - Fly me to the Alpha Centauri
#include <stdio.h>
#include <math.h>

int main(){

    int testcase;
    int start, end;
    long long dist;
    long long i;
    long long cnt;

    scanf("%d", &testcase);
 
    while (testcase--)
    {
        scanf("%d %d", &start, &end);
 
        dist = end - start;
 
        i=1;
        for (;; i++)
            if (i*i > dist)
                break;
        i--;
 
        cnt = dist - (i * i);
        cnt = (long long)ceil((double)cnt / (double)i);
 
        printf("%lld\n", i * 2 - 1 + cnt);
    }
    return 0;
}
*/

#include <stdio.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main(){
  int tc;
  int tmptc;
  int M, N;
  int x, y;
  int cnt;
  int tmp;
  int solution[1000];
  int index=0;
  
  scanf("%d",&tc);
  tmptc = tc;
  while(tc--){

  scanf("%d %d %d %d",&M,&N,&x,&y);
  
  cnt = x % (M + 1);

  for(int i=0;i<N;i++){
      tmp = (x % N == 0) ? N : (x % N);
      if(tmp == y) break; 

      x = tmp + M;
      cnt += M;
  }

  if(cnt > LCM(M,N)) cnt = -1;
  
  solution[index++] = cnt;

  }

  for(int j=0;j<tmptc;j++){ 
    printf("%d\n",solution[j]);
  }

  return 0;
}

int GCD(int a, int b){
    while(b !=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int LCM(int a, int b){
    return a*b / GCD(a,b);
}






