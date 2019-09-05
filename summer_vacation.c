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

/*  6064 - 카잉달력
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
*/
/* 
#include <stdio.h>
#include <stdlib.h>

int isPrime(int test[],int num);

int main(){

int num;
int result;

scanf("%d",&num);
int test[num];

for(int i=0;i<num;i++){
    scanf("%d",test+i);
}

result = isPrime(test,num);

printf("%d\n",result);

return 0;

}

int isPrime(int test[],int num){
    int count=0;
    int* array;
    array = (int*)malloc(sizeof(int*)*num);
    int i,j;

    for(i=0;i<=num;i++){
        array[i]=i;
    }

    for(i=2;i*i<=num;i++){
        if(array[i]==0) continue;
        for(j=2*i;j<=num;j+=i){ 
            array[j] = 0;
        }
    }

    for(i=2;i<num;i++){
        for(j=0;j<num;j++){
            if(array[i]==test[j] && array[i]!=0){
                count++;
        }
    }
    }

    return count;

}
}
*/

/* 1016 - 제곱 ㄴㄴ수
#include <stdio.h>
#include <stdbool.h>

bool chk[1000001], aux[1000001];

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	
	int ans = b - a + 1; // 구간내의 숫자의 수

	for (long long i = 2; i*i <= b; i++) {
		if (aux[i]) continue; // 1이면 무시해라
		for (long long j = i; j*j <= b; j += i){
             aux[j] = 1; // 배수 체크 => 에라토스테네스의 체
        }
        // continue가 아닌놈 즉, 에라토스테네스의 체에 걸러지지 않은 놈이 밑의 루프로 내려온다.
		for (long long j = ((a-1)/(i*i)+1)*i*i; j <= b; j += i*i){ // ((a-1)/(i*i)+1)*i*i => 구간 점프, 나누기 연산 즉, 소수의 제곱 * 배수를 통해 min이 속한 구간으로 이동했다. i는 2부터 시작하잖나
            // 
			if (!chk[j - a]){
            chk[j - a] = 1;
            ans--;
            }
        }
	}
	
	printf("%d\n", ans);

	return 0;
}
*/

/* 2442 별찍기 -5
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/* 2751 - 수 정렬하기 2
#include <stdio.h>
#include <stdlib.h>
#define MAX_INDEX 1000000
void Quicksort(int arr[],int left,int right);

int main(){
    int arr[MAX_INDEX];

    int tc;
    scanf("%d",&tc);

    for(int i=0;i<tc;i++){
        scanf("%d",arr+i);
    }

    Quicksort(arr,0,tc-1);

    for(int i=0;i<tc;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}

void Quicksort(int arr[], int left, int right) {
  int L = left, R = right;
  int temp;
  int pivot = arr[(left + right) / 2]; //피봇 위치(중앙)의 값을 받음.

  //아래의 while문을 통하여 pivot 기준으로 좌, 우 크고 작은 값 나열. = Partition
  while (L <= R) {

  //pivot이 중간 값이고, 비교 대상 arr[L], arr[R]은 pivot과 비교하니 중간 지점을 넘어가면 종료로 볼 수 있음.
    while (arr[L] < pivot) //left부터 증가하며 pivot 이상의 값을 찾음.
      L++;
    while (arr[R] > pivot) //right부터 감소하며 pivot 이하 값을 찾음.
      R--;
    //L, R 모두 최대 pivot 위치까지 이동.

    if (L <= R) { //현재 L이 R이하면. (이유 : L>R 부분은 이미 정리가 된 상태임).
      if (L != R) { //같지 않은 경우만.
        temp = arr[L];
        arr[L] = arr[R];
        arr[R] = temp;
      } //L과 R이 같다면 교환(SWAP)은 필요 없고 한 칸씩 진행만 해주면 됨.
      L++; R--; //그리고 L,R 한 칸 더 진행.
    }
  }
  if (left < R)
    Quicksort(arr, left, R);
  if (L < right)
    Quicksort(arr, L, right);
}
*/

/* 11650 좌표 정렬하기 1
#include <stdio.h>

typedef struct xy
{
    int x;
    int y;
}Map;
 
Map map[100001];
 
void SwapX(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionX(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.x >= map[low].x && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.x <= map[high].x && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapX(low, high); //low와 high를 스왑 
        }
 
    }
    SwapX(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
}
 
void QuickSortX(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionX(left, right); // 둘로 나누어서
        QuickSortX(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortX(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

void SwapY(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionY(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.y >= map[low].y && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.y <= map[high].y && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapY(low, high); //low와 high를 스왑 
        }
 
    }
    SwapY(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
 
}
 
void QuickSortY(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionY(left, right); // 둘로 나누어서
        QuickSortY(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortY(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

int main()
{
 
    int n, i;
    int start, end;
    int cnt = 0;
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
        scanf("%d %d", &map[i].x, &map[i].y);
 
 
    QuickSortX(0, n - 1);
 
    i = 1;
    start = 0;
    end = n - 1;
    while (i < n)
    {
        if (map[i].x == map[i - 1].x)
        {
            cnt = 1;
            start = i - 1;
            while (map[i].x == map[i - 1].x)
            {
                end = i;
                i++;
            }
        }
 
        if (cnt >= 1)
        {
            QuickSortY(start, end);
            start = i;
 
        }
        cnt = 0;
        i++;
    }
    for (i = 0; i < n; i++)
        printf("%d %d\n", map[i].x, map[i].y);
}
*/

/* 11651 - 좌표 정렬하기 2
#include <stdio.h>

typedef struct xy
{
    int x;
    int y;
}Map;
 
Map map[100001];
 
void SwapX(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionX(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.x >= map[low].x && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.x <= map[high].x && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapX(low, high); //low와 high를 스왑 
        }
 
    }
    SwapX(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
 
}

void QuickSortX(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionX(left, right); // 둘로 나누어서
        QuickSortX(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortX(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

void SwapY(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionY(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.y >= map[low].y && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.y <= map[high].y && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapY(low, high); //low와 high를 스왑 
        }
 
    }
    SwapY(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
 
}

void QuickSortY(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionY(left, right); // 둘로 나누어서
        QuickSortY(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortY(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

int main()
{
 
    int n, i;
    int start, end;
    int cnt = 0;
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
        scanf("%d %d", &map[i].x, &map[i].y);
 
 
    QuickSortY(0, n - 1);
 
    i = 1;
    start = 0;
    end = n - 1;
    while (i < n)
    {
        if (map[i].y == map[i - 1].y)
        {
            cnt = 1;
            start = i - 1;
            while (map[i].y == map[i - 1].y)
            {
                end = i;
                i++;
            }
        }
 
        if (cnt >= 1)
        {
            QuickSortX(start, end);
            start = i;
 
        }
        cnt = 0;
        i++;
    }
    for (i = 0; i < n; i++)
        printf("%d %d\n", map[i].x, map[i].y);
}
*/

/* 10814 - 나이순 정렬
#include <stdio.h>

typedef struct person{
    int age;
    char name[101];
    int order;
}people;

people p[100000];

void Swap(int a, int b) // a,b 스왑 함수 
{
    people temp = p[a];
    p[a] = p[b];
    p[b] = temp;
}

int PartitionAge(int left, int right)
{
    people pivot = p[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.age >= p[low].age && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.age <= p[high].age && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            Swap(low, high); //low와 high를 스왑 
        }
    }
    Swap(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
}

int PartitionOrder(int left, int right)
{
    people pivot = p[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.order >= p[low].order && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
 
        while (pivot.order <= p[high].order && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
 
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            Swap(low, high); //low와 high를 스왑 
        }
    }
    Swap(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
}

void QuickSortAge(int left, int right){
    if (left <= right)
    {
        int pivot = PartitionAge(left, right);
        QuickSortAge(left, pivot - 1);
        QuickSortAge(pivot + 1, right);
    }
}

void QuickSortOrder(int left, int right){
    if(left<=right){
        int pivot = PartitionOrder(left,right);
        QuickSortOrder(left,pivot-1);
        QuickSortOrder(pivot+1,right);
    }
}

// 입력시에 순서도 ++ 해서 구조체에 집어넣고 좌표정렬하기 문제랑 다를게 없을듯...

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %s",&p[i].age,p[i].name);
        p[i].order = i;
    }

    QuickSortAge(0,n-1);

    int i = 1;
    int start = 0;
    int end = n - 1;
    int cnt = 0;

    while (i < n)
    {
        if (p[i].age == p[i - 1].age)
        {
            cnt = 1;
            start = i - 1;
            while (p[i].age == p[i - 1].age)
            {
                end = i;
                i++;
            }
        }
 
        if (cnt >= 1)
        {
            QuickSortOrder(start, end);
            start = i;
 
        }
        cnt = 0;
        i++;
    }

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d %s\n",p[i].age,p[i].name);
    }

    return 0;
}
*/

#include <stdio.h>

int main(){
    
}

