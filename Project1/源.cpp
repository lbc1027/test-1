#include <stdio.h>

// 函数声明部分
long factorial(int n); //也可以写作 long factorial(int);
long sum(long n); //也可以写作 long sum(long);

int main() {
	printf("1!+2!+...+9!+10! = %ld\n", sum(10));
	return 0;
}

//函数定义部分
//求阶乘
long factorial(int n) {
	int i;
	long result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	
	}
	return result;
}

// 求累加的和
long sum(long n) {
	int i;
	long result = 0;
	for (i = 1; i <= n; i++) {
		result += factorial(i);

	}
	return result;
}