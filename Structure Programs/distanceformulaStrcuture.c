#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};

int main(){
    struct point p1,p2;
    //p1 be the point one and p2 be the second point 
    //taking input of the coordinates of both the points 
    printf("Enter the x and y coordinate of first point:");
    scanf("%d%d",&p1.x,&p1.y);
    printf("Enter the x and y coordinate of second point:");
    scanf("%d%d",&p2.x,&p2.y);
    float distance = sqrt((pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
    printf("The distance between the points is %.2f",distance);
}