#include <stdio.h>

void is_leap_year(int year);

void is_leap_year(int year) {
	if(year % 400 == 0) {
		printf("leap year.\n");
	}
	else if(year % 100 == 0) {
		printf("non-leap year.\n");
	}
	else if (year % 4 == 0) {
		printf("leap year.\n");
	}
	else {
		printf("non-leap year.\n");
	}
}

int main(void) {
	int year;
	scanf("%d", &year);
	is_leap_year(year);
  return 0;
}