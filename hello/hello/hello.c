#include <stdio.h>

int main() {
	printf("Hello, world!\n");
	printf("%s\n", "Hello, world!");
	printf("%s %s\n", "Hello", "1234");
	printf("%s %s\n", "Hello,", "1234"); // "Hello,"ó�� ���ڿ� �ȿ� �޸��� �־���
	printf("%s, %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello,", "1234");
	printf("%s%s\n", "Hello", "1234"); // %s �� ���� �پ�����
	printf("%s%s\n", "Hello ", "1234");  // Hello�� ������ ����
	printf("%s%s\n", "Hello", " 1234"); // 1234�� ������ ����

	return 0;
}