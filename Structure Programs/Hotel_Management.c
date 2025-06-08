#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 5

// Hotel Structure
struct Hotel {
    char H_Name[50];
    char H_city[50];
    int num_rooms;
    float room_charge;
};

// Customer Structure
struct Customer {
    char C_Name[50];
    char C_Address[100];
    char Phone_no[15];
    char DOB[15];
};

// Reservation Structure
struct Reservation {
    struct Customer customer;
    struct Hotel hotel;
    int rooms_booked;
    int days;
};

// Payment Structure
struct Payment {
    float total_amount;
};

// Convert a string to lowercase
void toLowerStr(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Trim leading and trailing spaces from a string (in place)
void trim(char *str) {
    int start = 0;
    while (isspace((unsigned char)str[start])) start++;

    int end = strlen(str) - 1;
    while (end >= start && isspace((unsigned char)str[end])) end--;

    int i = 0;
    while (start <= end) {
        str[i++] = str[start++];
    }
    str[i] = '\0';
}

// Display hotels in a given city (case-insensitive)
void displayHotelsByCity(struct Hotel hotels[], int count, char city[]) {
    char lowerCity[50];
    strcpy(lowerCity, city);
    toLowerStr(lowerCity);

    printf("\nHotels in %s:\n", city);
    int foundAny = 0;
    for (int i = 0; i < count; i++) {
        char hotelCity[50];
        strcpy(hotelCity, hotels[i].H_city);
        toLowerStr(hotelCity);

        if (strcmp(hotelCity, lowerCity) == 0) {
            printf("Hotel Name: %s\n", hotels[i].H_Name);
            printf("Rooms Available: %d\n", hotels[i].num_rooms);
            printf("Room Charge: %.2f per day\n", hotels[i].room_charge);
            printf("-------------------------\n");
            foundAny = 1;
        }
    }
    if (!foundAny) {
        printf("No hotels found in %s.\n", city);
    }
}

// Print reservation details
void printReservationDetails(struct Reservation r) {
    printf("\n--- Reservation Details ---\n");
    printf("Customer Name: %s\n", r.customer.C_Name);
    printf("Hotel Name: %s\n", r.hotel.H_Name);
    printf("City: %s\n", r.hotel.H_city);
    printf("Rooms Booked: %d\n", r.rooms_booked);
    printf("Stay Duration: %d days\n", r.days);
}

// Print payment receipt
void printPaymentReceipt(struct Reservation r) {
    struct Payment p;
    p.total_amount = r.rooms_booked * r.days * r.hotel.room_charge;
    printf("\n--- Payment Receipt ---\n");
    printf("Customer Name: %s\n", r.customer.C_Name);
    printf("Hotel: %s\n", r.hotel.H_Name);
    printf("Total Amount: %.2f\n", p.total_amount);
}

int main() {
    struct Hotel hotels[MAX] = {
        {"Hotel BlueSky", "Delhi", 10, 2000.0},
        {"Hotel Sunrise", "Mumbai", 15, 2500.0},
        {"Ocean View", "Chennai", 8, 1800.0},
        {"Mountain Retreat", "Delhi", 12, 2200.0},
        {"City Comfort", "Bangalore", 20, 2100.0}
    };

    struct Reservation res;
    char searchCity[50];

    printf("Enter city to search hotels: ");
    scanf(" %[^\n]s", searchCity);
    trim(searchCity);  // Trim leading/trailing spaces from input

    displayHotelsByCity(hotels, MAX, searchCity);

    // Customer details
    printf("\nEnter Customer Details:\n");
    printf("Name: ");
    scanf(" %[^\n]s", res.customer.C_Name);
    printf("Address: ");
    scanf(" %[^\n]s", res.customer.C_Address);
    printf("Phone No: ");
    scanf(" %[^\n]s", res.customer.Phone_no);
    printf("DOB (DD/MM/YYYY): ");
    scanf(" %[^\n]s", res.customer.DOB);

    // Hotel booking
    char hotelToBook[50];
    printf("\nEnter Hotel Name to book: ");
    scanf(" %[^\n]s", hotelToBook);
    trim(hotelToBook);  // Trim input

    int found = 0;
    int hotelIndex = -1;
    for (int i = 0; i < MAX; i++) {
        char currentHotel[50];
        strcpy(currentHotel, hotels[i].H_Name);
        toLowerStr(currentHotel);

        char enteredHotel[50];
        strcpy(enteredHotel, hotelToBook);
        toLowerStr(enteredHotel);

        if (strcmp(currentHotel, enteredHotel) == 0) {
            hotelIndex = i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Hotel not found. Please try again.\n");
        return 1;
    }

    printf("Number of rooms to book: ");
    scanf("%d", &res.rooms_booked);
    if (res.rooms_booked <= 0 || res.rooms_booked > hotels[hotelIndex].num_rooms) {
        printf("Invalid room count (Available: %d)\n", hotels[hotelIndex].num_rooms);
        return 1;
    }

    printf("Number of days to stay: ");
    scanf("%d", &res.days);
    if (res.days <= 0) {
        printf("Days must be ≥1\n");
        return 1;
    }

    // Update hotel's room count and reservation data
    hotels[hotelIndex].num_rooms -= res.rooms_booked;
    res.hotel = hotels[hotelIndex];

    printReservationDetails(res);
    printPaymentReceipt(res);

    return 0;
}
