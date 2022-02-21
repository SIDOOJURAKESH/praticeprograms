#include <stdio.h>
#define pi 3.14
#define area_circle(pi,r) pi*r*r
#define area_square(s) s*s
#define area_rectangle(l,b) l*b


int main()
{
    enum area{circle=1,square,rectangle,all};
    enum area i;
    int r,s,l,b;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("Enter Side of your square: ");
    scanf("%d",&s);
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    while(1)
    {
        printf("1.Area of circle\n2.Area of square\n3.Area of rectangle\n4.All Areas\n0.Exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case circle: printf("area of circle: %f\n",area_circle(pi,r));
                         break;
            case square: printf("area of square: %d\n",area_square(s));
                         break;
            case rectangle: printf("area of rectangle: %d\n",area_rectangle(l,b));
                            break;
            case all: printf("area of circle: %f\n",area_circle(pi,r));
                            printf("area of square: %d\n",area_square(s));
                            printf("area of rectangle: %d\n",area_rectangle(l,b));
                            break;
            default:  goto EXIT;
        }
    }
    EXIT: printf("Executed Successfully\n");
    return 0;
}
