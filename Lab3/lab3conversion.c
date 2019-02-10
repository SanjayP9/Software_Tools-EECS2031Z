/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/

#include <stdio.h>

float fun_IF(int i, char c, float f);
float fun_II(int i1, char c, int i2);
float fun_FF(float f1, char c, float f2);

int main(int argc, char *argv[])
{
    int i = 0;
    char c = 0;
    float f = 0;

    while (1)
    {

        printf("Enter operand_1 operator operand_2 seperated by blanks>");
        scanf("%d %c %f", &i, &c, &f);

        if (i == -1 && f == -1)
        {
            break;
        }

        printf("Your input '%d %c %f' result in %f (fun_IF) and %f (fun_II) and %f (fun_FF)\n\n", i, c, f, fun_IF(i, c, f), fun_II(i, c, f), fun_FF(i, c, f));
    }

    return 0;
}

float fun_IF(int i, char c, float f)
{
    switch (c)
    {
    case '+':
        return i + f;
        break;

    case '-':
        return i - f;
        break;

    case '*':
        return i * f;
        break;

    case '/':
        return i / f;
        break;
    }
    return 0;
}

float fun_II(int i1, char c, int i2)
{
    switch (c)
    {
    case '+':
        return i1 + i2;
        break;

    case '-':
        return i1 - i2;
        break;

    case '*':
        return i1 * i2;
        break;

    case '/':
        return i1 / i2;
        break;
    }
    return 0;
}

float fun_FF(float f1, char c, float f2)
{
    switch (c)
    {
    case '+':
        return f1 + f2;
        break;

    case '-':
        return f1 - f2;
        break;

    case '*':
        return f1 * f2;
        break;

    case '/':
        return f1 / f2;
        break;
    }
    return 0;
}