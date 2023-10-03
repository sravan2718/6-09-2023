//size of pointers

# include <stdio.h>

    struct emp
    {
        int eno;
        float esalary;
        char *ename;
    }temp;
void main()
    { 
    char  *cp;
    int *ip;
    
    struct emp * sep;
    
printf("size of char* is:%d/n", sizeof (cp));
printf("size of int* is:%d/n", sizeof (ip));
printf("size of emp* is:%d/n",sizeof (temp));

    }
	
	
	// call by value
	
# include <stdio.h>
void main()
{
    int a = 10, b = 20;
    printf("Before swap:\t %d \t %d",a,b);
    swap (a,b);
}
   
    void swap(int x, int y)
    {
        int temp=x;
        x = y;
        y = temp;
    printf("After swap:\t %d \t %d",x,y);
}

// call by reference

# include <stdio.h>
void swap (int*, int*);
void main()
{
    int a =10, b =20;
    printf("before swap:\t%d\t%d",a,b);
    swap(&a, &b);
}

void swap(int*x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("after swap:%d\t%d",*x,*y);
}



