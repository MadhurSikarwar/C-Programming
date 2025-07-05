
#include <stdio.h>
int lcm(int n1,int n2){
    static int temp = 1;
    if(temp%n1 == 0 && temp%n2 == 0){
        int lcm = temp;
        temp = 1; //reseting it for the next usea
        return lcm;
    }
    temp++;
    return lcm(n1,n2); //recursive call 
}
int main() {
    int n1,n2;
    printf("Enter n1\n");
    scanf("%d",&n1);
    printf("Enter n2\n");
    scanf("%d",&n2);
    printf("The lcm of both the numbers is %d",lcm(n1,n2));

    return 0;
}