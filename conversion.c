#include <stdio.h>

int main() {
    int n, i;
    double val, res1, res2, res3, res4, res5, res6, res7, res8, res9, res10, res11, res12;
printf(" 1. Kilometres <-> Miles\n 2. Inches <-> Foot\n 3. Centimetres <-> Inches\n 4. Pounds <-> Kilograms\n 5. Metres <-> Inches\n 6. Gallons <-> Litres\n");
scanf("%d", &n);

if (n == 1)
{
    printf(" 1. Kilometres to Miles\n 2. Miles to Kilometres\n");
    scanf("%d", &i);

    if (i == 1){
    printf("Enter value in Kilometres: ");
    scanf("%lf", &val);

    res1 = val * 0.621;
    printf("%lf Kilometres is %lf Miles\n", val, res1);
    }
   else if (i ==2){
        printf("Enter value in Miles: ");
        scanf("%lf", &val);

        res2 = val * 1.609;
        printf("%lf Miles is %lf Kilometres\n", val, res2);

    }

}

if (n == 2)
{
    printf(" 1. Inches to Feet\n 2. Feet to Inches\n");
    scanf("%d", &i);
    
     if (i == 1){
        printf("Enter value in Inches: ");
        scanf("%lf", &val);

        res3 = val * 0.083;
        printf("%lf Inches is %lf Feet\n", val, res3);
    }
   else if (i ==2){
        printf("Enter value in Feet: ");
        scanf("%lf", &val);

        res4 = val * 12;
        printf("%lf Feet is %lf Inches\n", val, res4);

    }

}

if (n == 3)
{
    printf(" 1. Centimetres to Inches\n 2. Inches to Centimetres\n");
    scanf("%d", &i);
    
     if (i == 1){
        printf("Enter value in Centimetres: ");
        scanf("%lf", &val);

        res5 = val * 0.393;
        printf("%lf Centimetres is %lf Inches\n", val, res5);
    }
   else if (i ==2){
        printf("Enter value in Inches: ");
        scanf("%lf", &val);

        res6 = val * 2.54;
        printf("%lf Inches is %lf Centimetres\n", val, res6);

    }
}

if (n == 4)
{
    printf(" 1. Pounds to Kilograms\n 2. Kilograms to Pounds\n");
    scanf("%d", &i);
    
     if (i == 1){
        printf("Enter value in Pounds: ");
        scanf("%lf", &val);

        res7 = val * 0.453;
        printf("%lf Pounds is %lf Kilograms\n", val, res7);
    }
   else if (i ==2){
        printf("Enter value in Kilograms: ");
        scanf("%lf", &val);

        res8 = val * 2.204; 
        printf("%lf Kilograms is %lf Pounds\n", val, res8);

    }

}

if (n == 5)
{
    printf(" 1. Inches to Metres\n 2. Metres to Inches\n");
    scanf("%d", &i);
    
     if (i == 1){
        printf("Enter value in Inches: ");
        scanf("%lf", &val);

        res9 = val * 0.025;
        printf("%lf Inches is %lf Metres\n", val, res9);
    }
   else if (i ==2){
        printf("Enter value in Metres: ");
        scanf("%lf", &val);

        res10 = val *  39.37;
        printf("%lf Metres is %lf Inches\n", val, res10);

    }

}

if (n == 6)
{
    printf(" 1. Gallons to Litres\n 2. Litres to Gallons\n");
    scanf("%d", &i);
    
     if (i == 1){
        printf("Enter value in Gallons: ");
        scanf("%lf", &val);

        res11 = val * 3.785;
        printf("%lf Gallons is %lf Litres\n", val, res11);
    }
    else if (i ==2){
        printf("Enter value in Litres: ");
        scanf("%lf", &val);

        res12 = val * 0.264;
        printf("%lf Litres is %lf Gallons\n", val, res12);

    }

}

return 0;
}







