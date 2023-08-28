#include<stdio.h>
#include<conio.h>
int chousing_categorie();
void temperacture_calculaction();// for tempreacture unit's
void speed_calculaction();
void currency_calculaction();
void length_calculaction();
void Weight_calculaction();
void Area_calculaction();
void time_calculaction();
void volume_calculaction();


int main(){
    printf("welcome to unit converter");
    switch (chousing_categorie())
    {
    case 1:
        length_calculaction();
        break;
    
    case 2:
        Weight_calculaction();
        break;

    case 3:
        volume_calculaction();
        break;

    case 4:
        temperacture_calculaction();
        break;

    case 5:
        time_calculaction();
        break;

    case 6:
        speed_calculaction();
        break;

    case 7:
        Area_calculaction();
        break;

    case 8:
        currency_calculaction();
        break;

    default:
        printf("enter the right number");
        break;
    }
    return 0;
}

int chousing_categorie(){
    int categorie;
    printf("chous ono of the bellow categorie\n1. Length:\n2. Weight/Mass:\n3. Volume:\n4. Temperature:\n5. Time:\n6. Speed:\n7. Area:\n8. Currency:\n ");
    printf("enter the categorie number :");
    scanf("%d",&categorie);
    return categorie;
}
//for case 4
void temperacture_calculaction(){
    int from,to;
    float from_value;
    printf("the temperacture unit are as follow\n1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from celsius to fahrenheit is :%.2f",((9/5*from_value)+32));
             
        }
        else
        {
            printf("the conversen from celsius to kelvin is :%.2f",(from_value+273.15));
        }
    }
    else if(from==2)
    {
        if(to==1)
        {
            printf("the conversen from Fahrenheit to celsius is :%.2f",((5/9)*(from_value-32)));
        }
        else
        {
            printf("the conversen from Fahrenheit to kelvin is :%.2f",((from_value-32)*(5*9)+273.15));
        }
    }
    else if(from==3)
    {
        if(to==1)
        {
            printf("the conversen from kelvin to celsius is :%.2f",(from_value-273.15));
        }
        else
        {
            printf("the conversen from kelvin to ferenheit is :%.2f",((from_value-273.15)*9/5+32));
        }
    }
}
void speed_calculaction() // for speed calculaction
{
    int from,to;
    float from_value;
    printf("the speed unit are as follow\n1. Kilometer per hour  \n2. Mile per hour \n");
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    if(from==1){
        printf("the  conversen from Kilometer per hour to Mile per hour is :%.2f",from_value*0.621371);
    }
    else
    {
        printf("the  conversen from Mile per hour to Kilometer per hour is :%.2f",from_value*1.60934);
    }
}
void currency_calculaction()
{
    int from,to;
    float from_value;
    printf("the currency unit are as follow\n1. INDIA Ruppy\n2. Euro\n3. British Pound\n4. Japanese Yen\n5. Us Doller\n");
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)// INDIA Ruppy
    {
        if(to==2)
        {
        printf("the  conversen from INDIA Ruppy to Euro is :%.2f",from_value/90);
        }
        else if(to==3)
        {
        printf("the  conversen from INDIA Ruppy to British Pound is :%.2f",from_value/100);
        }
        else if(to==4)
        {
        printf("the  conversen from INDIA Ruppy to Japanese Yen is :%.2f",from_value*0.60);
        }
        else if(to==5)
        {
        printf("the  conversen from INDIA Ruppy to Us doller is :%.2f",from_value/75);   
        }
    }
    else if (from==2)//Euro
    {
        if(to==1)
        {
        printf("the  conversen from Euro to INDIA Ruppy is :%.2f",from_value*85);
        }
        else if(to==3)
        {
        printf("the  conversen from Euro to pound is :%.2f",from_value*0.85);
        }
        else if(to==4)
        {
        printf("the  conversen from Euro to Japanese Yen is :%.2f",from_value*130);
        }
        else if(to==5)
        {
        printf("the  conversen from Euro to Us Doller is :%.2f",from_value*1.18);
        }
    }
    else if (from==3)// British Pound
    {
        if(to==1)
        {
        printf("the  conversen from British Pound to INDIA Ruppy is :%.2f",from_value*100);
        }
        else if(to==2)
        {
        printf("the  conversen from British Pound to euro is :%.2f",from_value*1.18 );
        }
        else if(to==4)
        {
        printf("the  conversen from British Pound to Japanese Yen is :%.2f",from_value *130);
        }
        else if(to==5)
        {
        printf("the  conversen from British Pound to Us Doller is :%.2f",from_value*1.37);
        }
    }
    else if (from==4)// Japanese Yen
    {
        if(to==1)
        {
        printf("the  conversen from Japanese Yen to INDIA Ruppy is :%.2f",from_value *0.65 );
        }
        else if(to==2)
        {
        printf("the  conversen from Japanese Yen to euro is :%.2f",from_value * 0.0077  );
        }
        else if(to==3)
        {
        printf("the  conversen from Japanese Yen to British Pound  is :%.2f",from_value  * 0.0068);
        }
        else if(to==5)
        {
        printf("the  conversen from Japanese Yen to Us Doller is :%.2f",from_value * 0.0092);
        }
    }
    else if (from==5)// us Doller
    {
        if(to==1)
        {
        printf("the  conversen from us Doller to INDIA Ruppy is :%.2f",from_value * 73 );
        }
        else if(to==2)
        {
        printf("the  conversen from us Doller to euro is :%.2f",from_value  * 0.85);
        }
        else if(to==3)
        {
        printf("the  conversen from us Doller to British Pound  is :%.2f",from_value   * 0.73 );
        }
        else if(to==4)
        {
        printf("the  conversen from us Doller to Japanese Yen is :%.2f",from_value* 110);
        }
    }
}
void length_calculaction()
{
    int from,to;
    float from_value;
    printf("the length unit are as follow\n1. Meter\n2. Kilometer\n3. Inch\n4. Foot\n5. Yard\n6. Mile\n "); 
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from Meter to kilomiter is:%.2f",from_value / 1000);
        }
        else if (to==3)
        {
            printf("the conversen from Meter to Inch is:%.2f",from_value * 39.3701);
        }
        else if (to==4)
        {
            printf("the conversen from Meter to Foot is:%.2f",from_value *3.28084);
        }
        else if (to==5)
        {
            printf("the conversen from Meter to Yard is:%.2f",from_value * 1.09361);            
        }
        else if(to==6)   
        {
            printf("the conversen from Meter to Mile is:%.2f",from_value / 1609.34);
        }
    }
    else if (from==2)
    {
        if(to==1)
        {
            printf("the conversen from kilomiter to Meter is:%.2f",from_value * 1000);
        }
        else if (to==3)
        {
            printf("the conversen from kilomiter to Inch is:%.2f",from_value * 39,370.1);
        }
        else if (to==4)
        {
            printf("the conversen from kilomiter to Foot is:%.2f",from_value* 3280.84);
        }
        else if (to==5)
        {
            printf("the conversen from kilomiter to Yard is:%.2f",from_value * 1093.61);            
        }
        else if(to==6)   
        {
            printf("the conversen from kilomiter to Mile is:%.2f",from_value / 1.60934);
        }
    }
    else if (from==3)
    {
        if(to==1)
        {
            printf("the conversen from Inch to Meter is:%.2f",from_value / 39.3701);
        }
        else if (to==2)
        {
            printf("the conversen from Inch to kilomiter is:%.2f",from_value/ 39370.1);
        }
        else if (to==4)
        {
            printf("the conversen from Inch to Foot is:%.2f",from_value / 12);
        }
        else if (to==5)
        {
            printf("the conversen from Inch to Yard is:%.2f",from_value / 36);            
        }
        else if(to==6)   
        {
            printf("the conversen from Inch to Mile is:%.2f",from_value / 63360);
        }
    }
    else if (from==4)
    {
        if(to==1)
        {
            printf("the conversen from Foot to Meter is:%.2f",from_value * 0.3048);
        }
        else if (to==2)
        {
            printf("the conversen from Foot to kilomiter is:%.2f",from_value / 3280.84);
        }
        else if (to==3)
        {
            printf("the conversen from Foot to Inch is:%.2f",from_value * 12);
        }
        else if (to==5)
        {
            printf("the conversen from Foot to Yard is:%.2f",from_value/ 3);            
        }
        else if(to==6)   
        {
            printf("the conversen from Foot to Mile is:%.2f",from_value / 5280);
        }
    }
    else if (from==5)
    {
        if(to==1)
        {
            printf("the conversen from Yard to Meter is:%.2f",from_value * 0.9144);
        }
        else if (to==2)
        {
            printf("the conversen from Yard to kilomiter is:%.2f",from_value* 0.0009144);
        }
        else if (to==3)
        {
            printf("the conversen from Yard to Inch is:%.2f",from_value* 36);
        }
        else if (to==4)
        {
            printf("the conversen from Yard to Foot is:%.2f",from_value * 3);            
        }
        else if(to==6)   
        {
            printf("the conversen from Yard to Mile is:%.2f",from_value/ 1760);
        }
    }
    else if (from==6)
    {
        if(to==1)
        {
            printf("the conversen from Mile to Meter is:%.2f",from_value* 1609.34);
        }
        else if (to==2)
        {
            printf("the conversen from Mile to kilomiter is:%.2f",from_value * 1.60934);
        }
        else if (to==3)
        {
            printf("the conversen from Mile to Inch is:%.2f",from_value * 63360);
        }
        else if (to==4)
        {
            printf("the conversen from Mile to Foot is:%.2f",from_value * 5280);            
        }
        else if(to==5)   
        {
            printf("the conversen from Mile to Yard is:%.2f",from_value* 1760);
        }
    }
}
void Weight_calculaction()
{
    int from,to;
    float from_value;
    printf("the weight unit are as follow\n1. Gram\n2. Kilogram\n3. Milligram\n4. Pound\n5. Ounce\n"); 
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from Gram to Kilogram is:%.2f",from_value / 1000);
        }
        else if (to==3)
        {
            printf("the conversen from Gram to Milligram is:%.2f",from_value *1000);
        }
        else if (to==4)
        {
            printf("the conversen from Gram to Pound is:%.2f",from_value/ 453.59237);
        }
        else if (to==5)
        {
            printf("the conversen from Gram to Ounce is:%.2f",from_value / 28.34952);            
        }
    }
    else if (from==2)
    {
        if(to==1)
        {
            printf("the conversen from Kilogram to Gram is:%.2f",from_value * 1000);
        }
        else if (to==3)
        {
            printf("the conversen from Kilogram to Milligram is:%.2f",from_value * 1000000);
        }
        else if (to==4)
        {
            printf("the conversen from Kilogram to Pound is:%.2f",from_value * 2.20462);
        }
        else if (to==5)
        {
            printf("the conversen from Kilogram to Ounce is:%.2f",from_value * 35.27396);            
        }
    }
    else if (from==3)
    {
        if(to==1)
        {
            printf("the conversen from Milligram to Gram is:%.2f",from_value/ 1000);
        }
        else if (to==2)
        {
            printf("the conversen from Milligram to Kilogram is:%.2f",from_value / 1000000);
        }
        else if (to==4)
        {
            printf("the conversen from Milligram to Pound is:%.2f", (from_value / 1000) / 454);
        }
        else if (to==5)
        {
            printf("the conversen from Milligram to Ounce is:%.2f",from_value/ 28349.5);            
        }
    }
    else if (from==4)
    {
        if(to==1)
        {
            printf("the conversen from Pound to Gram is:%.2f",from_value * 453.59237);
        }
        else if (to==2)
        {
            printf("the conversen from Pound to Kilogram is:%.2f",from_value / 2.20462);
        }
        else if (to==3)
        {
            printf("the conversen from Pound to Milligram is:%.2f", from_value  * 453592.37);
        }
        else if (to==5)
        {
            printf("the conversen from Pound to Ounce is:%.2f",from_value * 16);            
        }
    }
    else if (from==5)
    {
        if(to==1)
        {
            printf("the conversen from Ounce to Gram is:%.2f",from_value  * 28.34952);
        }
        else if (to==2)
        {
            printf("the conversen from Ounce to Kilogram is:%.2f",from_value/ 35.27396);
        }
        else if (to==3)
        {
            printf("the conversen from Ounce to Milligram is:%.2f", from_value * 28349.5);
        }
        else if (to==4)
        {
            printf("the conversen from Ounce to Pound is:%.2f",from_value/ 16);            
        }
    }
}
void Area_calculaction()
{
    int from,to;
    float from_value;
    printf("the area unit are as follow\n1. Square meter\n2. Square kilometer\n3. Square foot\n4. Acre\n5. Hectare \n"); 
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from Square meter to Square kilometer is:%.2f",from_value / 1000000);
        }
        else if(to==3)
        {
            printf("the conversen from Square meter to Square foot is:%.2f",from_value * 10.764);
        }
        else if(to==4)
        {
            printf("the conversen from Square meter to Acre is:%.2f",from_value / 4046.86);
        }
        else if(to==5)
        {
            printf("the conversen from Square meter to Hectare is:%.2f",from_value / 10000);            
        }
    }
    else if (from==2)
    {
        if(to==1)
        {
            printf("the conversen from Square kilometer to Square meter is:%.2f",from_value* 1000000);
        }
        else if(to==3)
        {
            printf("the conversen from Square kilometer to Square foot is:%.2f",from_value* 10763910.4);
        }
        else if(to==4)
        {
            printf("the conversen from Square kilometer to Acre is:%.2f",from_value* 247.105);
        }
        else if(to==5)
        {
            printf("the conversen from Square kilometer to Hectare is:%.2f",from_value * 100);            
        }
    }
    else if (from==3)
    {
        if(to==1)
        {
            printf("the conversen from Square foot to Square meter is:%.2f",from_value* 0.092903);
        }
        else if(to==2)
        {
            printf("the conversen from Square foot to Square kilometer is:%.2f",from_value * 0.00000009290304);
        }
        else if(to==4)
        {
            printf("the conversen from Square foot to Acre is:%.2f",from_value / 43560);
        }
        else if(to==5)
        {
            printf("the conversen from Square foot to Hectare is:%.2f",from_value / 10763.9104);            
        }
    }
    else if (from==4)
    {
        if(to==1)
        {
            printf("the conversen from Acre to Square meter is:%.2f",from_value * 4046.85642);
        }
        else if(to==2)
        {
            printf("the conversen from Acre to Square kilometer is:%.2f",from_value * 0.00404686);
        }
        else if(to==3)
        {
            printf("the conversen from Acre to Square foot is:%.2f",from_value * 43560);
        }
        else if(to==5)
        {
            printf("the conversen from Acre to Hectare is:%.2f",from_value * 0.404685642);            
        }
    }
    else if (from==5)
    {
        if(to==1)
        {
            printf("the conversen from Hectare to Square meter is:%.2f",from_value* 10000);
        }
        else if(to==2)
        {
            printf("the conversen from Hectare to Square kilometer is:%.2f",from_value * 0.01);
        }
        else if(to==3)
        {
            printf("the conversen from Hectare to Square foot is:%.2f",from_value * 107639.104);
        }
        else if(to==4)
        {
            printf("the conversen from Hectare to Acre is:%.2f",from_value* 2.47105);            
        }
    }
}
void time_calculaction()
{
    int from,to;
    float from_value;
    printf("the time unit are as follow\n1. Second \n2. Minute \n3. Hour \n4. Day \n5. Week\n6. Month\n7. Year\n"); 
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from Second to Minute is:%.2f",from_value / 60);
        }
        else if(to==3)
        {
            printf("the conversen from Second to Hour is:%.2f",from_value / 3600);
        }
        else if(to==4)
        {
            printf("the conversen from Second to Day is:%.2f",from_value / 86400);
        }
        else if(to==5)
        {
            printf("the conversen from Second to Week is:%.2f",from_value / 604800);            
        }
        else if(to==6)
        {
            printf("the conversen from Second to Month is:%.2f",from_value / (30.44 * 24 * 60 * 60));            
        }
        else if(to==7)
        {
            printf("the conversen from Second to Year is:%.2f",from_value / 31536000);            
        }
    }
    else if(from==2)
    {
        if(to==1)
        {
            printf("the conversen from Minute to Second is:%.2f",from_value* 60);
        }
        else if(to==3)
        {
            printf("the conversen from Minute to Hour is:%.2f",from_value / 60);
        }
        else if(to==4)
        {
            printf("the conversen from Minute to Day is:%.2f",from_value/ 1440);
        }
        else if(to==5)
        {
            printf("the conversen from Minute to Week is:%.2f",from_value/ 10080);            
        }
        else if(to==6)
        {
            printf("the conversen from Minute to Month is:%.2f",from_value / 43200);            
        }
        else if(to==7)
        {
            printf("the conversen from Minute to Year is:%.2f",from_value / 525600);            
        }
    }
    else if(from==3)
    {
        if(to==1)
        {
            printf("the conversen from Hour to Second is:%.2f",from_value* 3600);
        }
        else if(to==2)
        {
            printf("the conversen from Hour to Minute is:%.2f",from_value * 60);
        }
        else if(to==4)
        {
            printf("the conversen from Hour to Day is:%.2f",from_value/ 24);
        }
        else if(to==5)
        {
            printf("the conversen from Hour to Week is:%.2f",from_value / 168);            
        }
        else if(to==6)
        {
            printf("the conversen from Hour to Month is:%.2f",from_value / (30.44 * 24));            
        }
        else if(to==7)
        {
            printf("the conversen from Hour to Year is:%.2f",from_value / 8766);            
        }
    }
    else if(from==4)
    {
        if(to==1)
        {
            printf("the conversen from Day to Second is:%.2f",((from_value* 24)*60)*60);
        }
        else if(to==2)
        {
            printf("the conversen from Day to Minute is:%.2f",(from_value* 24)*60);
        }
        else if(to==3)
        {
            printf("the conversen from Day to Hour is:%.2f",from_value* 24);
        }
        else if(to==5)
        {
            printf("the conversen from Day to Week is:%.2f",from_value / 7);            
        }
        else if(to==6)
        {
            printf("the conversen from Day to Month is:%.2f",from_value / 30.44);            
        }
        else if(to==7)
        {
            printf("the conversen from Day to Year is:%.2f",from_value /365.25);            
        }
    }
    else if(from==5)
    {
        if(to==1)
        {
            printf("the conversen from Week to Second is:%.2f",(((from_value*7)*24)*60)*60);
        }
        else if(to==2)
        {
            printf("the conversen from Week to Minute is:%.2f",((from_value*7)*24)*60);
        }
        else if(to==3)
        {
            printf("the conversen from Week to Hour is:%.2f",(from_value*7)*24);
        }
        else if(to==4)
        {
            printf("the conversen from Week to Day is:%.2f",from_value * 7);            
        }
        else if(to==6)
        {
            printf("the conversen from Week to Month is:%.2f",(from_value * 7)/30.44);            
        }
        else if(to==7)
        {
            printf("the conversen from Week to Year is:%.2f",from_value / 52.18 );            
        }
    }
    else if(from==6)
    {
        if(to==1)
        {
            printf("the conversen from Month to Second is:%.2f",(((from_value*30.44)*24)*60)*60);
        }
        else if(to==2)
        {
            printf("the conversen from Month to Minute is:%.2f",((from_value*30.44)*24)*60);
        }
        else if(to==3)
        {
            printf("the conversen from Month to Hour is:%.2f",(from_value*30.44)*24);
        }
        else if(to==4)
        {
            printf("the conversen from Month to Day is:%.2f",from_value * 30.44);            
        }
        else if(to==5)
        {
            printf("the conversen from Month to Week is:%.2f",(from_value * 30.44)/7);            
        }
        else if(to==7)
        {
            printf("the conversen from Month to Year is:%.2f",(from_value* 30.44)/365.25 );            
        }
    }
    else if(from==7)
    {
        if(to==1)
        {
            printf("the conversen from Year to Second is:%.2f",(((from_value*365)*24)*60)*60);
        }
        else if(to==2)
        {
            printf("the conversen from Year to Minute is:%.2f",((from_value*365)*24)*60);
        }
        else if(to==3)
        {
            printf("the conversen from Year to Hour is:%.2f",(from_value*365)*24);
        }
        else if(to==4)
        {
            printf("the conversen from Year to Day is:%.2f",from_value * 365);            
        }
        else if(to==5)
        {
            printf("the conversen from Year to Week is:%.2f",from_value * 52.18);            
        }
        else if(to==6)
        {
            printf("the conversen from Year to Month is:%.2f",from_value*12);            
        }
    }
}
void volume_calculaction()
{
    int from,to;
    float from_value;
    printf("the time unit are as follow\n1. Liter\n2. Milliliter\n3. Cubic Meter\n4. Cubic Gallon\n5. Fluid Ounce\n"); 
    printf("chouse the unit you have :");
    scanf("%d",&from);
    printf("enter the value of the unit :");
    scanf("%f",&from_value);
    printf("chouse the unit you want to convert :");
    scanf("%d",&to);
    if(from==1)
    {
        if(to==2)
        {
            printf("the conversen from Liter to Milliliter is:%.2f",from_value *1000);
        }
        else if(to==3)
        {
            printf("the conversen from Liter to Cubic Meter is:%.2f",from_value / 1000);
        }
        else if(to==4)
        {
            printf("the conversen from Liter to Cubic Gallon is:%.2f",from_value* 0.264172 );
        }
        else if(to==5)
        {
            printf("the conversen from Liter to Fluid Ounce is:%.2f",from_value* 33.814 );            
        }
    }
    else if(from==2)
    {
        if(to==1)
        {
            printf("the conversen from Milliliter to Liter is:%.2f",from_value /1000);
        }
        else if(to==3)
        {
            printf("the conversen from Milliliter to Cubic Meter is:%.2f",from_value/1000000 );
        }
        else if(to==4)
        {
            printf("the conversen from Milliliter to Cubic Centimeter is:%.2f",from_value );
        }
        else if(to==5)
        {
            printf("the conversen from Milliliter to Fluid Ounce is:%.2f",from_value /29.5735);            
        }
    }
    else if(from==3)
    {
        if(to==1)
        {
            printf("the conversen from Cubic Meter to Liter is:%.2f",from_value *1000);
        }
        else if(to==2)
        {
            printf("the conversen from Cubic Meter to Milliliter is:%.2f",from_value*1000000);
        }
        else if(to==4)
        {
            printf("the conversen from Cubic Meter to Cubic Centimeter is:%.2f",from_value* 1000000);
        }
        else if(to==5)
        {
            printf("the conversen from Cubic Meter to Fluid Ounce is:%.2f",from_value*33814.02);            
        }
    }
    else if(from==4)
    {
        if(to==1)
        {
            printf("the conversen from Cubic Centimeter to Liter is:%.2f",from_value /1000);
        }
        else if(to==2)
        {
            printf("the conversen from Cubic Centimeter to Milliliter is:%.2f",from_value);
        }
        else if(to==3)
        {
            printf("the conversen from Cubic Centimeter to Cubic Meter is:%.2f",from_value / 1000000 );
        }
        else if(to==5)
        {
            printf("the conversen from Cubic Centimeter to Fluid Ounce is:%.2f",from_value* 0.033814);            
        }
    }
    else if(from==5)
    {
        if(to==1)
        {
            printf("the conversen from Fluid Ounce to Liter is:%.2f",from_value * 0.0295735 );
        }
        else if(to==2)
        {
            printf("the conversen from Fluid Ounce to Milliliter is:%.2f",from_value*29.5735);
        }
        else if(to==3)
        {
            printf("the conversen from Fluid Ounce to Cubic Meter is:%.2f",from_value );
        }
        else if(to==4)
        {
            printf("the conversen from Fluid Ounce to Gallon is:%.2f",from_value* 0.0078125 );            
        }
    }
}