#include <stdio.h>
#include <math.h>
void z1();
void z2();
void z3();
int main() 
{
z1();
z2();
z3();
}


void z1()
{
    printf("1 задание\n");
    char c = '!'; 
    int i = 2;
    float f = 3.14f;
    double d= 5e-12;
    printf("введите аргументы типов: char, int, float, double \n");
    scanf("%c %d %f %lf", &c, &i, &f, &d);

    printf("%c %d %.2f %.e\n", c, i,f,d);

    //задача 1а
    printf("задача 1а\n");
    float ff=floor(f);
    printf("Целая: %.0f \nДробная: %.2f\n",f,f-ff);

    //задача 1б
    printf("задача 1б\n");
    printf("%d %x",i,i); //%x - выводит числов 16-ричной сс

    //задача 1в
    printf("\nзадача 1в\n");
    printf("\n%f",1.0/i);
}
void z2()
{
    printf("\n2 задание\n");
    int a=11,b=3,x=a/b;
    float y=(float)a/b;
    double z=(double)a/b;
    printf("%d %f %f",x,y,z);
    printf("\n%d %f %f", a/b, (float)a/b,(double)a/b);
}
void z3()
{
    printf("\n3 задание\n");
    int a=123;
    printf("введите значение трехзначное число\n");
    scanf("%d",&a);
    printf("последняя цифра: %d\nпервая цифра: %d\nсумма цифр: %d\nчисло наоборот: %d%d%d", a%10, a/100, a/100+a/10%10+a%10, a%10,a/10%10,a/100);
}