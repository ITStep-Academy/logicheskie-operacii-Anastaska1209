#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include < math.h >
#include<stdbool.h>



int main() {
	int a;
	
	scanf_s("%d", &a);
	

	printf("%d\n",!(a>=-10&&a<=-1)||!(a>=2&&a<=15));
	


	return 0;

}