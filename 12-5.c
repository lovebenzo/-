#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int x = printf("Hello world!\n");
//    printf("%d", x);
//    return 0;
//}

//int main()
//{
//    long n;
//    float x, y, z;
//    scanf("%ld;%f,%f,%f", &n, &x, &y, &z);
//    printf("The each subject score of  No. %ld is %0.2f ,%0.2f, %0.2f.", n, x, y, z);
//    return 0;
//}

int main()
{
    char c;

    while (scanf("%c", &c))
    {
        getchar();
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            printf("YES\n");
        }
        else { printf("NO\n"); }
    }
    return 0;
}