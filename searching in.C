#include<stdio.h>
#include<conio.h>
void main() {
	int arr[40], i, key, n, flag = 0;
	printf_s("ENTER THE ARRAY SIZE \n");
	scanf_s("%d", &n);
	printf_s("ENTER ELEMENTS \n");
	for (i = 0; i < n; i++) {

		scanf_s("%d", &arr[i]);
	}
	printf_s("ENTER THE VALUE YOU WANT TO SEARCH IN THE ARRAY \n");
	scanf_s("%d", &key);
	for (i = 0; i < n; i++) {
		if (key == arr[i]) {
			flag = 1;
		}
	}
	if (flag == 1) {
		printf_s("%d found \n",key);
	}
	else {
		printf_s("%d not found",key);
	}
	
}