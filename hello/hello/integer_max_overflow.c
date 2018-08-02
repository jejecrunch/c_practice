#include <stdio.h>
#include <limits.h>		// �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main() {
	char num1 = CHAR_MAX + 1;		// char�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	short num2 = SHRT_MAX + 1;		// short�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	int num3 = INT_MAX + 1;		// int�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	long num4 = LONG_MAX + 1;		// long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	long long num5 = LLONG_MAX + 1;	// long long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�

	// char, short, int�� %d�� ���
	// long�� %ld, long long�� %lld�� ���
	// ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� ����
	printf("%d %d %d %l %ld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -9223372036854775808

	unsigned char num6 = UCHAR_MAX + 1;		// unsigned char�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	unsigned short num7 = USHRT_MAX + 1;		// unsigned short�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	unsigned int num8 = UINT_MAX + 1;		// unsigned int�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	unsigned long num9 = ULONG_MAX + 1;		// unsigned long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	unsigned long long num10 = ULLONG_MAX + 1;	// unsigned long long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�

	// char, short, int�� %d�� ���
	// long�� %ld, long long�� %lld�� ���
	// ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ� 0 ���� �ٽ� ����
	printf("%d %d %d %l %ld\n", num6, num7, num8, num9, num10);	// 0 0 0 0

	return 0;
}