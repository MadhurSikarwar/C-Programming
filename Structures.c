#include <stdio.h>

// Creating a structure with name student
//typedef is the shortcut for avoiding writing struct every timed
struct student {
    int USN;
    char NAME[20];
    int M1;
    int M2;
};
//using typedef to create another structure 
typedef struct Game_Rating
{
    char name[30];
    int year_release;
    float rating;
    
}game;
//here now instead of writing struct everytime we can use game to initialize the values in the structure


int main() {
    struct student s1 = {1234,"Madhur",85};
    printf("Enter your marks 2\n");
    scanf("%d", &s1.M2); // Taking input for marks 2
    // Printing the values of the structure
    printf("USN: %d\n", s1.USN);
    printf("Name: %s\n", s1.NAME);
    printf("Marks 1: %d\n", s1.M1);
    printf("Marks 2: %d\n", s1.M2);
    //finding the size of the structure
    printf("Size of structure: %zu bytes\n", sizeof(s1));
    //creating another structure variable with all of the inputs being taken from the user 
    struct student s2;
    printf("Enter USN: ");
    scanf("%d", &s2.USN);
    printf("\nEnter Name: ");
    scanf("%s",s2.NAME);
    printf("\nEnter Marks 1: ");
    scanf("%d", &s2.M1);
    printf("\nEnter marksd 2: ");
    scanf("%d", &s2.M2);
    // Printing the values of the second structure  
    printf("\nUSN: %d\n", s2.USN);
    printf("Name: %s\n", s2.NAME);  
    printf("Marks 1: %d\n", s2.M1);
    printf("Marks 2: %d\n", s2.M2);
    //first initializing hard coded values in the game 
    //calling the structure named game_Rating with the name game as typedef used (therefore no need for writing struct again for it)
    game g1 = {"God Of War",2018,4.8};
    //printing the vairables values of the structure
    printf("\nName of the game: %s",g1.name);
    printf("\nYear of release of the game: %d",g1.year_release);
    printf("\nRating given to the game: %f",g1.rating);
    return 0;
}
