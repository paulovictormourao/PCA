#include <stdio.h>

/* define const values*/
#define SIZE1 10
#define SIZE2 2
#define SIZE3 3


void print(float *a, float *b){
	
	while (a < b){         /* run until print SIZE values*/
		printf("[ %.1f ]", *a);
		a++;
	}
	printf("\n\n");
}

int main () {
	float list1[SIZE1]= {1, 2, 3, 4, 5 ,6 ,7, 8, 9 ,0 };
	float list2[SIZE2]= {2, 2};
	float list3[SIZE3]= {1111111 ,   21341, 3};
	float *p1 = list1; 			 /* *p1 receves the endress of the first term of list1 */
	float *q1 = p1 + SIZE1;		 /* *q1 receves the endress of the last term of list1 */
	float *p2 = list2; 
	float *q2 = p2 + SIZE2;
	float *p3 = list3; 
	float *q3 = p3 + SIZE3;
	
	print(p1, q1);
	print(p2, q2);
	print(p3, q3);
}


