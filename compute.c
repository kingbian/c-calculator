#include <stdio.h>

int compute(char operator, int a, int b);

/*main*/
void main()
{
    char operator;
    int first, second, check;

    printf("Enter first number: ");
    check = scanf("%d", &first);

    while (check != 1)
    {
        while (getchar() != '\n')
        { /* clear the buffer*/
            continue;
        }
        printf("Enter a valid integer: ");
        check = scanf("%d", &first);
    }

    printf("Enter second number: ");
    check = scanf("%d", &second);
    while (check != 1)
    {
        while (getchar() != '\n')
        { /* clear the buffer*/
            continue;
        }
        printf("Enter a valid integer: ");
        check = scanf("%d", &second);
    }

    printf("Enter operator: ");
    scanf("%s", &operator);

    /*printf("%i b: %d\n", first, second);*/

    int ans = compute(operator, first, second);

    if (ans != -1)
    {
        printf("%d %c %d is: %d\n", first, operator, second, ans);
    }
    else
    {
        printf("%c is an invalid operator!!\n", operator);
    }
}

/*
    compute the calculation
*/

int compute(char operator, int a, int b)
{

    switch (operator)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '/':
        if (b <= 0)
        {
            printf("Unable to divide by 0!!\n");
            exit(1);
        }
        return a / b;
        break;
    case '*':
        return a * b;
        break;
    default:
        return -1;
    }
}