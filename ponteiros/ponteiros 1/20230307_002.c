#include <stdio.h>


/* define const values*/
#define SIZE1 10
#define SIZE2 2
#define SIZE3 3


int search (int *start, int *end, int x){
	
	int pos = 0;
	
	while (start < end){
		pos ++;
	
		if (*start == x){
			printf("position: %d  address: %d\n", pos, start);
			return start;
			
			break;
		}
		
		start++;	
	}
	printf("NULL\n");
	return NULL;
}

int main(){
	int list1[SIZE1]= {1, 2, 3, 2, 5 ,6 ,7, 8, 9 ,2 };
	int list2[SIZE2]= {2, 2};
	int list3[SIZE3]= {1111111 ,   21341, 3};
	
	// Pointers 				 
	int *p1 = list1; 			 /* *p1 receves the address of the first term of list1 */
	int *q1 = p1 + SIZE1;		 /* *q1 receves the address of the last term of list1 */
	
	int *p2 = list2; 
	int *q2 = p2 + SIZE2;
	
	int *p3 = list3; 
	int *q3 = p3 + SIZE3;
	
	
	search(p1, q1, 2);
	search(p2, q2, 3);
	search(p3, q3, 3);
}
