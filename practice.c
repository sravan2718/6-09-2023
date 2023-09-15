//factorial of n number with recursion;


int factorial(int);
int main()
{
    int num,fac;
    printf("/n enter the number:");
    scanf("%d", &num);
    fac = factorial(num);
    printf("/n factorial of %d  %d",num,fac);
    return 0;
    
}
int factorial(int num)
{
    int fact;
  if(num == 1)
    
        return 1;
    else
    
  
      return (num * factorial (num-1));
     
}

//fibonacci series without recursion;

#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;
}


//prime numbers;

#include <stdio.h> 

 int main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
  return 0;
}


//palindrone  number;

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}


//sum of n natural numbers;

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}