#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter 2 numbers: \n");
    printf("Choose an Operation: \n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%f %f",&a,&b);
    scanf("%f",&c);

    if (c==1.0){
        printf("Addition : %.2f",a+b);
    }else if(c==2.0){
        printf("Subtraction : %.2f",a-b);
    }else if(c==3.0){
        printf("Multipiication : %.2f",a*b);
    }else if(c==4.0){
        printf("Division : %.2f",a/b);
    }else{
        printf("Invalid Choice");
    }
    return 0;
}
