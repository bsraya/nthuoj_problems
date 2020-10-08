#include <stdio.h>

int main(void) {
  int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int month, date, total_days = 0, i;
	scanf("%d/%d", &month, &date);

	total_days = date;

	if(month > 1) {
		for(i=0; i < month - 1;i++) {
			total_days = total_days + days[i];
		}
	}

	printf("%d\n", total_days);

  return 0;
}