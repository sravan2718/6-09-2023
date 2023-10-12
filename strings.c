/*# include<stdio.h>
int main()
{
	char str1[]="apple";
	char str2[]="banana";
	int result = strcmp(str1,str2);
	    if(result<0){
		    printf("%s comes before %S in the dictionary.\n",str1,str2);
	   }else if(result>0){
		    printf("%s comes after %s in the dictionary.\n",str1,str2);
	   } else{
		    printf("%s comes same %s in the dictionary.\n",str1,str2);
	    return 0;
	   }
}
// program to work  of strcmp() function*/
/*# include <stdio.h>
int main(void) 
{
	char str1[10],str2[10];
	printf("enter two strings : ");
	gets(str1);
	gets(str2);
	if((strcmp(str1,str2))==0)
		printf("strings are same\n");
	else
		printf("strings are not same\n");
	return 0;
}*/

/* strcat() function/
# include <stdio.h>
int main(void)
{
	char str1[20], str2[20];
	printf("enter two strings : ");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("first string : %s\tsecond string : %S\n",str1,str2);
	strcat(str1, "one");
	printf("now first string isd : \n",str1);
	return 0;
}*/

//strings of two dimensional arrays//
# include <stdio.h>
# define N 5
# define LEN 10
int main(void)
{
	char arr[N] [LEN]={
		               "white"
			       "red"
			       "green"
			       "yellow"
			       "blue"
			    };
	int i;
	for(i=0; i<N; i++)
	{
	        printf("string = %s\t",arr[i]);
		printf("address of string = %p\n",arr[i]);
        }
return 0;
}


