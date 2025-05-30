 1. Hello World
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


#include<studio.h>
int main(){
printf("Hello world!");
return 0;
}


#include <stdio.h>
int main(){
	int age=23;
	printf("%d",age);
	return 0;
}
printf(age);


assign new value
#include <stdio.h>
int main(){
	int age=23;
	printf("%d",age);
	age = 31;
	printf("\n %d",age);
	return 0;
}

#include <stdio.h>
int main(){
	int num1 = 25;
	printf("The first number is: %d",num1);
	
	int num2 = num1;
	printf("The second number is: %d",num2);
	
	return 0;
}


#include <stdio.h>
int main(){
	int num1,num2=25;
	printf("%d",num1);
	printf("\n %d", num2);
	return 0;
}


#include <stdio.h>
int main(){
	int age = 10;
	printf("%d", age);
	printf("size: %zu", sizeof(age));
}


#include <stdio.h>
int main(){
	double number=12.45;
	printf("%.2lf",number);
	printf("size: %zu", sizeof(number));
}



#include <stdio.h>
int main(){
	float number1=10.9f;
	printf("%f",number1);
	printf("%.1f",number1);
	return 0;
}


#include <stdio.h>
int main(){
	char charac='z';
	printf("%c",charac);
	printf("\n%d",charac);
	return 0;
}

user input

#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Age = %d", age);
	return 0;
}

#include <stdio.h>
int main(){
	double number;
	printf("Enter the number: ");
	scanf("%lf", &number);
	printf("\nYour double input is:%lf", number);
	
	char alpha;
	printf("Enter a character");
	scanf("%C", &alpha);
	printf("character input = %C",alpha);
	
	
	double number2;
	char beta;
	printf("Enter inputs:");
	scanf("%lf  %c", &number2,&beta);
	
	return 0;
} 

// - single line command

/* multi
line
command */


#include <stdio.h>
int main(){
	int num2,num1,sum,sub,multi,rem;
	double div;
	printf("Enter int inputs 2numbers:");
	scanf("%d  %d", &num2,&num1);
	sum = num2+num1;
	sub = num2-num1;
	multi = num2*num1;
	div = (double)num2/num1;
	rem = num2%num1;
	
	printf("sum: %d\n", sum);
	printf("sub: %d\n", sub);
	printf("multi: %d\n", multi);
	printf("div: %lf \n", div);
	printf("rem: %d\n", rem);
	return 0;
} 
	



























