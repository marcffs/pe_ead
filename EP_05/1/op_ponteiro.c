#include "stdio.h"
//#include "op_ponteiro.h"

void operacao_int(int a, int b, char op, int *res)
{
    if (op=='+')
    {
        *res=a+b;
    }
    if (op=='-')
    {
        *res=a-b;
    }
    if (op=='*')
    {
        *res=a*b;
    }
    if (op=='/')
    {
        *res=a/b;
    }
    if (op=='%')
    {
        *res=b%a;
    }
    if (op=='|')
    {
        *res=b|a;
    }
    if (op=='&')
    {
        *res=a&b;
    }
    if (op=='^')
    {
        *res=a^b;
    }
}

int main()
{
    int a=2, b=3, res;
    char op;
    scanf("%c", &op);
    operacao_int(a,b,op,&res);
    printf("%d\n", res);
    return 0;
}