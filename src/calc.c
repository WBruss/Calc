/*
Program Calculator

-Give 2 values and an operator, it applies the two with an operator
-Example: 
	./calc 10 + 10
	output
		10+10=20

Break down:
-How doi capture the three parameters?
-How do i apply the operator to the two parameters
-How do i display the result

Break down 2.0
-How do i capture the three parameters?
	Positional arguements
	Assign the three params to variables x, o, y

-How do i apply the operator to the two parameters
	create functions with different operator methods
	If statement is created and the char input is compared to the corresponding operator function
	eg if(o==+)
        return x+y
    for sum = +
    for difference = -
    for product = x (letter x)
    for quotient = /

-How do i display the result
    The result is displayed using the printf() function
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function prototyping

int sum(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int quotient(int x, int y);

int main(int argc, char *argv[]){

    //Checks if the required number of arguements is entered
    if(argc < 4){
        printf("Not enough arguements \n");
        printf("Run the command. Enter two integers and an operator between them. \n \t eg. ./calc 1 + 1 \n");
        return 1;
    }
    
    
    /*
    Variable declaration
    Variable initialization
    */

    int x = atoi(argv[1]); //Input coverted to integer
    int y = atoi(argv[3]); //Input coverted to integer
    int z = 0;
    char *arg = argv[2];
    
    
    //printf("%d", argc);
    /*
    If statement compares the user entered  operator to select 
    the appropriate function
    */

    if(!strcmp(arg, "+")){  //Calls the sum() function
        z = sum(x , y);
    }
    else if(!strcmp(arg, "-")){  //Calls the difference() function
        z = difference(x , y);
    }
    else if(!strcmp(arg, "x")){  //Calls the product() function
        z = product(x , y);
    }
    else if(!strcmp(arg, "/")){  //Calls the quotient() function
        z = quotient(x , y);
    }
    else
        printf("Invalid operator.\n");  // Informs the user of an invalid operator.

    printf("%d %s %d = %d \n", x, argv[2], y, z);
    
    return 0;
}

//Addition function. Called when operator + is selected
int sum(int x, int y){
    return x + y;
}

//Subtraction function. Called when operator - is selected
int difference(int x, int y){
    return x - y;
}

//Multiplication function. Called when operator x is selected
int product(int x, int y){
    return x * y;
}

//Division function. Called when operator / is selected
int quotient(int x, int y){
    return x / y;
}