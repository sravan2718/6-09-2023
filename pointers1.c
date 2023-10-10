/*# include <stdio.h>
int main(){
	int x = 10;
	int *ptr = &x;
	printf("value of x: %d\n",*ptr);
	printf("address of x: %d\n",ptr);

return 0;
}

//pointer athimetic//
# include <stdio.h>
int main(){
	int arr[]={1, 2, 3, 4, 5};
	int *ptr = arr;
	for (int i = 0; i<5; i++){
		printf("element %d: %d\n", i, *(ptr+i));
	}
	return 0;
}*/

//dynamic allocation//
# include <stdio.h>
# include <stdlib.h>
int main(){
	int *dynamicArray;
	dynamicArray =(int *)malloc(5 *sizeof(int));
	if (dynamicArray == NULL){
		printf("memory allocation failed\n");
		return 1;
	}
	int i;
	for ( i = 0; i<5; i++){
		dynamicArray[i] = i*2;
	}
	for (int i = 0; i<5; i++){
		printf("element %d: %d/n",i, dynamicArray[i]);
	}
	free(dynamicArray);
	       return 0;
       } 

//pointer to functions//

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);

    operation = add;
    printf("Addition result: %d\n", operation(5, 3));

    operation = subtract;
    printf("Subtraction result: %d\n", operation(5, 3));

    return 0;
}
      

