#include<stdio.h>
int greatest(int *p1,int *p2,int *p3){
    if(*p1 > *p2 && *p1 > *p3)
    return *p1;
    else if(*p2 > *p1 && *p2 > *p3)
    return *p2;
    else
    return *p3;
}
int main(){
    int n1,n2,n3;
    int *pn1 = &n1;
    int *pn2 = &n2;
    int *pn3 = &n3;
    printf("Enter three numbers to find the greatest of them all: ");
    scanf("%d%d%d",pn1,pn2,pn3);
    int max = greatest(pn1,pn2,pn3);
    printf("The greatest out of all three numbers is %d",max);
}