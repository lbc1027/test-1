#include <stdio.h>

// ������������
long factorial(int n); //Ҳ����д�� long factorial(int);
long sum(long n); //Ҳ����д�� long sum(long);

int main() {
	printf("1!+2!+...+9!+10! = %ld\n", sum(10));
	return 0;
}

//�������岿��
//��׳�
long factorial(int n) {
	int i;
	long result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	
	}
	return result;
}

// ���ۼӵĺ�
long sum(long n) {
	int i;
	long result = 0;
	for (i = 1; i <= n; i++) {
		result += factorial(i);

	}
	return result;
}