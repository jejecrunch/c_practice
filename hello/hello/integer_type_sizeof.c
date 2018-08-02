#include <stdio.h>

int main() {
	printf("char : %d, short : %d, int : %d, long : %d, longlong: %d\n",
		sizeof(char),		// 1: sizeof로 char 자료형의 크기를 구함
		sizeof(short),		// 2: sizeof로 short 자료형의 크기를 구함
		sizeof(int),		// 3: sizeof로 int 자료형의 크기를 구함
		sizeof(long),		// 4: sizeof로 long 자료형의 크기를 구함
		sizeof(long long)	// 5: sizeof로 long long 자료형의 크기를 구함
	);

	return 0;
}