#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int n){
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0)
        count++;
        if(count>2)
        break;
    }
    if(count == 2)
    return true;
    else
    return false;
}
int main(){
    printf("Enter input\n");
    int num;
    int *pnum = &num;
    scanf("%d",pnum);
    while(*pnum != -1){
        if(*pnum == 1){
            printf("%d is neither a prime nor a composite\n",*pnum);
        }
        else if(checkPrime(*pnum))
        printf("%d is a prime number\n",*pnum);
        else
        printf("%d is a composite number\n",*pnum);
        printf("Enter other number\n");
        scanf("%d",pnum);
    }
}