#include <stdio.h>

int main() {
	printf("char : %d, short : %d, int : %d, long : %d, longlong: %d\n",
		sizeof(char),		// 1: sizeof�� char �ڷ����� ũ�⸦ ����
		sizeof(short),		// 2: sizeof�� short �ڷ����� ũ�⸦ ����
		sizeof(int),		// 3: sizeof�� int �ڷ����� ũ�⸦ ����
		sizeof(long),		// 4: sizeof�� long �ڷ����� ũ�⸦ ����
		sizeof(long long)	// 5: sizeof�� long long �ڷ����� ũ�⸦ ����
	);

	return 0;
}