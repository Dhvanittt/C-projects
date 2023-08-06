#include<stdio.h>

float far();

int main()
{
    int celsius;
    printf("Enter degree celsius : ");
    scanf("%d", &celsius);
    
    float far();
    printf("%d celsius in fahrenheit is : %f\n", celsius,far(celsius));

    return 0;
}

float far(int x){
    float result = (x * (9/5)) + 32;
    return result; 
}