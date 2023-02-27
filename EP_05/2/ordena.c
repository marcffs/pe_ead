void ordena(int* a, int* b, int* c) {
    if (*a>*b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        return ordena(a, b, c);
    }
    if (*b>*c)
    {
        int temp;
        temp=*b;
        *b=*c;
        *c=temp;
        return ordena(a, b, c);
    }
    if (*a>*c)
    {
        int temp;
        temp=*a;
        *a=*c;
        *c=temp;
        return ordena(a, b, c);
    }
}

int main()
{
    int a=4,b=7,c=3;
    ordena(&a,&b,&c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}