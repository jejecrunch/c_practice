#include <stdio.h>
#include <limits.h>		// 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main() {
	char num1 = CHAR_MAX + 1;		// char의 최댓값보다 큰 수를 할당. 오버플로우 발생
	short num2 = SHRT_MAX + 1;		// short의 최댓값보다 큰 수를 할당. 오버플로우 발생
	int num3 = INT_MAX + 1;		// int의 최댓값보다 큰 수를 할당. 오버플로우 발생
	long num4 = LONG_MAX + 1;		// long의 최댓값보다 큰 수를 할당. 오버플로우 발생
	long long num5 = LLONG_MAX + 1;	// long long의 최댓값보다 큰 수를 할당. 오버플로우 발생

	// char, short, int은 %d로 출력
	// long은 %ld, long long은 %lld로 출력
	// 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작
	printf("%d %d %d %l %ld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -9223372036854775808

	unsigned char num6 = UCHAR_MAX + 1;		// unsigned char의 최댓값보다 큰 수를 할당. 오버플로우 발생
	unsigned short num7 = USHRT_MAX + 1;		// unsigned short의 최댓값보다 큰 수를 할당. 오버플로우 발생
	unsigned int num8 = UINT_MAX + 1;		// unsigned int의 최댓값보다 큰 수를 할당. 오버플로우 발생
	unsigned long num9 = ULONG_MAX + 1;		// unsigned long의 최댓값보다 큰 수를 할당. 오버플로우 발생
	unsigned long long num10 = ULLONG_MAX + 1;	// unsigned long long의 최댓값보다 큰 수를 할당. 오버플로우 발생

	// char, short, int은 %d로 출력
	// long은 %ld, long long은 %lld로 출력
	// 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값 0 부터 다시 시작
	printf("%d %d %d %l %ld\n", num6, num7, num8, num9, num10);	// 0 0 0 0

	return 0;
}