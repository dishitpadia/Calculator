#include<stdio.h>
int main()
{
    int a, b, ans;
    char op;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    getchar();
    printf("Enter the operator(+, -, *, / or %) : ");
    scanf("%c", &op);

    switch(op)
    {
        case '+': ans = a + b;
        printf("\n%d", ans);
        break;

        case '-': ans = a - b;
        printf("\n%d", ans);
        break;

        case '*': ans = a * b;
        printf("\n%d", ans);
        break;

        case '/': ans = a / b;
        printf("\n%d", ans);
        break;

        case '%': ans = a % b;
        printf("\n%d", ans);
        break;

        default: printf("Enter a valid operator");
    }
    return 0;
}
