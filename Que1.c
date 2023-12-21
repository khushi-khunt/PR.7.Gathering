#include<stdio.h>
/*
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/

int Addition(int X,int Y){

			int sum=X+Y;
			return sum;
	}

int Subtraction(int X,int Y){

		int sub=X-Y;
		return sub;
}

int Multiply(int X,int Y){

		int Multiply=X*Y;
		return Multiply;
}

int division(int X,int Y){

		int division=X/Y;
		return division;
}

int Modulo(int X,int Y){

		int Modulo=X%Y;
		return Modulo;
}


int main()

{

	int n;
	int a,b;

do{

	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for modulo\n");
    printf("Press 0 for exit\n");

    printf("Enter your choice:\n");
    scanf("%d",&n);



    switch(n){

    	case 1:

		        printf("Enter the first number:");
            	scanf("%d",&a);
            	printf("Enter the second number:");
    	        scanf("%d",&b);
    	        printf("Addition of %d and %d number is :%d\n", a,b,Addition(a,b));

	            break;

	    case 2:

		        printf("Enter the first number:");
            	scanf("%d",&a);
            	printf("Enter the second number:");
    	        scanf("%d",&b);
    	        printf("Subtraction of %d and %d number is :%d\n", a,b,Subtraction(a,b));
    	        break;

    	case 3:

		        printf("Enter the first number:");
            	scanf("%d",&a);
            	printf("Enter the second number:");
    	        scanf("%d",&b);
    	        printf("Multiplication of %d and %d number is :%d", a,b,Multiply(a,b));
    	        break;

    	case 4:

		        printf("Enter the first number:");
            	scanf("%d",&a);
            	printf("Enter the second number:");
    	        scanf("%d",&b);
    	        printf("division of %d and %d number is :%d\n", a,b,division(a,b));
    	        break;

    	case 5:

		        printf("Enter the first number:");
            	scanf("%d",&a);
            	printf("Enter the second number:");
    	        scanf("%d",&b);

				printf("modulo of %d and %d number is :%d", a,b,Modulo(a,b));
                break;

        default:
                	printf("you are exited");
}
} while(n != 0);  


}
