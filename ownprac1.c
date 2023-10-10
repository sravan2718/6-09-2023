#include <stdio.h>
int main()
{
int i,count=0;
int min,max;
scanf("%d%d",&min,&max);
for(min;min<=max;min++)
{
    count=0;
for(i=1;i<=min;i++)
{
    if(min%i==0)
    {
        count=count+1;
    }
}
    if(count==2)
    {
        printf(" %d ",min);
    }
    
}
}

# odd or even//

# include <stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2 == 0)
		printf("%d is a even number\n",n);
	else
		printf("%d is a odd number\n",n);
	return 0;
}

//another example//

# include <stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n&1==1)
		printf("%d is a odd number\n",n);
	else
		printf("%d is a even number\n",n);
	return 0;
}


//examples on if//
#include <stdio.h>

int main() {
    int number = 7;

    if (number > 10) {
        printf("The number is greater than 10.\n");
    } else if (number == 10) {
        printf("The number is equal to 10.\n");
    } else {
        printf("The number is less than 10.\n");
    }

    return 0;
}

//the number is positive//

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not negative.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}