#include<stdio.h>

int main(void)
{
    //step 1: karna kya hai
    printf("Pick one\n");
    printf("1.Division\n 2.Multiplication\n 3.Addition\n 4.Subtraction\n 5.Okay, I am done playing.");
    printf("Your choice:\n");
    int choice;
    scanf("%d", &choice);
    //Now our dumb pc knows what the user wants to do with his life.
    //but we dont know that yet, so lets define steps for all the possible choices, kyunki koi aur kaam toh hai hi nahi iss zindagi mein.
    if(choice == 5)
    {printf("Thank you for wasting your time.\n");}

    else
    {
    printf("Give the first operand:");
    double a;
    scanf("%lf", &a);
    printf("Give the second operand:");
    double b;
    scanf("%lf", &b);
    //now our dumb pc knows kya kerna hai and kiske sath karna hai.
    //either uv was sleepy and just wanted to waste his time or there is a reason he defined a&b so many times, or he is simply dumb.
    switch(choice)
    {
        case 1:
        printf("The quotient is %lf", a/b);
        break;

        case 2:
        printf("The product is %lf", a*b);
        break;

        case 3:
        printf("The sum is %lf", a+b);
        break;

        case 4:
        printf("The difference is %lf", a-b);
        break;

    }
    }
    return 0;
}