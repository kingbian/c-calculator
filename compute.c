#include <stdio.h>

int compute(char input[])
{

    // convert the asci values into an int
    int a = input[0] - '0';
    int b = input[1] - '0';

    return a + b;
}
// main
void main()
{
    char input[10];
    printf("Enter a equation: ");
    scanf("%s", input);

    int result = compute(input);

    printf("your answer is: %d\n", result);
}
