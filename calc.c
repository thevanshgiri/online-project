#include<stdio.h>

int main(void)
{
    //menu for the user to choose from
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    //Switch statement to perform the operation
    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The sum is %d", a+b);
            break;
        case 2:
            printf("Enter two numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The difference is %d", a-b);
            break;
        case 3:
            printf("Enter two numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The product is %d", a*b);
            break;
        case 4:
            printf("Enter two numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The quotient is %d", a/b);
            break;
        case 5:
            printf("Thank you for using the calculator");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}