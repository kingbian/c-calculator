#include <stdio.h>

int compute(char operator, int a, int b);

/*main*/
void main()
{
    char operator;
    int first, second;

    printf("Enter first number: ");
    scanf("%i", &first);

    int a = first;

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("Enter operator: ");
    scanf("%s", &operator);

   /*printf("%i b: %d\n", first, second);*/

    int ans = compute(operator, a, second);

    if ( ans !=-1){
        printf("%d %c %d is: %d\n",a, operator, second, ans);
    }else{
        printf("%c is an invalid operator!!\n", operator);
    }

}

/*
    compute the calculation
*/

int compute(char operator, int a, int b){

    switch(operator){
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '/':
            return a/b;
            break;
        case '*':
            return a*b;
            break;
        default:
            return -1;
    }

}