#include<stdio.h>
#include<math.h>
int countDigi(int num){
    //this function will count the number of digits in the code 
    int digi=0;
    while (num!=0)  // Removed the extra semicolon that caused empty loop
    {
        digi++;
        num = num/10;
    }
    return digi;
    
}
int main(){
    int num;
    printf("Enter a number to check whether the number is armstrong number or not\n");
    scanf("%d",&num);
    int digits = countDigi(num);
    int tempNum = num;
    int sum=0;
    while (tempNum!=0)
    {
        int r = tempNum%10;
        //the power method needs to be typecasted to int as it is a function that returns double value and rounded off too after typecasting
        sum += (int)round(pow(r, digits));
        tempNum = tempNum/10;
        printf("%d\n",sum);
    }
    printf("%d",sum);
    if(num == sum){
        printf("The number entered is an armstrong number");
    }
    else{
        printf("The number entered is not an armstrong number");
    }
    return 0;
}
