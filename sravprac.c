# include <stdio.h>
int main()
{
	int n1,n2;
	printf("Enter 2 numbers");
	scanf("%d %d", &n1,&n2);
	if(n1 > n2)
		printf("%d is the largest",n1);
	else
		printf("%d is the largest",n2);
}


// example even or odd

# include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    if(n %2 == 0)
        printf("%d is a even \n",n);
    else
    printf("%d is a odd  \n",n);
}

//second greatest number using if 

int main() {
    
  int a=10;
  int b=23;
  int c=54;
    if(a>b) {// a>b && a>c
        if(a>c) {
            if(b>c)
                printf("2nd greatest is %d",c);
            else
                printf("2nd greatest is %d",b);
        }
    } else

    {
        if(b>c) {
            if(c>a)
                printf("2nd greatest is %d",a);
            else
                printf("2nd greatest is %d",c);
        } else
            printf("2nd greatest is %d",b);
    }
}


# include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    
    a = 4;
    b = 2;
    c = 6;
    d = 7;
    e = 1;
    
    if(a > b){
      if(a > c){
        if(b > c){
          if(c > d){
            if(d > e)
    printf("second highest number" %d, a);
    else
    printf("second highest number" %d, c);
    else
    printf("second highest number" %d, e);
          }
      } 
   }      
}
    else
 if(a > c){
     if(c > e){
         if(d > a)
         printf("second highest number" %d, b);
    else
         printf("second highest number" %d, a);
    else
         printf("sexond highest number" %d, d;);
        }
     }
      
#include <stdio.h>

int main() {
    int num = 10;
    
    if (num > 5) {
        printf("The number is greater than 5.\n");
    } else {
        printf("The number is not greater than 5.\n");
    }
    
    return 0;
}


Loops:

e
#include <stdio.h>

int main() {
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
    
    return 0;
}
This example uses a for loop to repeat a block of code.

//Functions:

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    printf("The result is %d\n", result);
    return 0;
}


     