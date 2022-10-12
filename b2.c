#include<stdio.h>

int main() {
	int n;
	int tach;
	int sum = 0;
	scanf("%d", &n);
	for (;n != 0;) {
		tach = n % 10;
		sum += tach;
		n /= 10;
	}
	printf("%d", sum);
	return 0;
}
