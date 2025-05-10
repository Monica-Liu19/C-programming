/*
=============================================
 Author:Liu luoyu
 Student id:2430033032
 Description:lab10
 Date:2025/4/30
=============================================
*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void task35(void)
{
    printf("\n Output of task35:\n");
    int a = 10, b = 20;
    printf("before exchange: a = %d, b = %d\n", a, b);
    exchange(&a, &b);
    printf("after exchange: a = %d, b = %d\n", a, b);
}

struct Student
{
    char str[50];
    int marks;
};

void task36(void)
{
    printf("\n Output of task36:\n");

    int values[5] = {5, 10, 15, 20, 22};
    char str[10], *p;
    int n = 0, i;
    struct Student stu[20], *ps;
    strcpy(str, "UVWXYZ");
    p = str;

    printf("%d%d\n", values[2], *(values + 2));
    printf("%c%c\n", str[2], *(p + 2));
    printf("%s,%s\n", str, p);
    for (i = 0; i < 20; i++)
    {
        scanf("%s %d", stu[i].str, &stu[i].marks);

        if (stu[i].marks == -1)

            break;
    }
    n = i - 1;
    ps = stu;
    printf("firststudent\'sname:%s,marks:%d\n", ps->str, ps->marks);
}
void removeNewline(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}
void stringCombine(char *dest, char *src)
{
    size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);
    if (dest_len + src_len + 1 > sizeof(dest)) {
        printf("Destination buffer is not large enough.\n");
        return;
    }
    char *p = dest + dest_len;
    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
}
void task37(void)
{
    printf("\n Output of task37:\n");

    char str1[100], str2[256];
    printf("Enter str1 and end with pressing enter\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter str2 and end with pressing enter\n");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str1);
    removeNewline(str2);
    stringCombine(str1, str2);
    printf("The stringcombinedis:\n%s", str1);
}

int main()
{

    task35();
    task36();
    task37();

    return 0;
}