#include <stdio.h>

int main() {
	printf("Hello, world!\n");
	printf("%s\n", "Hello, world!");
	printf("%s %s\n", "Hello", "1234");
	printf("%s %s\n", "Hello,", "1234"); // "Hello,"처럼 문자열 안에 콤마를 넣어줌
	printf("%s, %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello,", "1234");
	printf("%s%s\n", "Hello", "1234"); // %s 두 개가 붙어있음
	printf("%s%s\n", "Hello ", "1234");  // Hello에 공백을 넣음
	printf("%s%s\n", "Hello", " 1234"); // 1234에 공백을 넣음

	return 0;
}