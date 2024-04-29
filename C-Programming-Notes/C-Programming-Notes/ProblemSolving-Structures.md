```
Create a Structure called hotel with following members c_name, No_days, phone number as nested structure with its members as mob and alternate number. Write a function to read details from the user. Also calculate the bill (per day charges is 2000 and 8.5%tax on total bill) and Display appropriate message.
```
Answer: 
```c
#include <stdio.h>
struct phone {
    char mob[20];
    char alt_mob[20];
};
struct hotel {
    char c_name[50];
    int No_days;
    struct phone phone_num;
};

void readDetails(struct hotel *h) {
    printf("Enter customer name: ");
    scanf("%s", h->c_name);
    printf("Enter number of days stayed: ");
    scanf("%d", &h->No_days);
    printf("Enter mobile number: ");
    scanf("%s", h->phone_num.mob);
    printf("Enter alternate mobile number: ");
    scanf("%s", h->phone_num.alt_mob);
}

float calculateBill(struct hotel h) {
    float per_day_charge = 2000;
    float total_charge = per_day_charge * h.No_days;
    float tax = 0.085 * total_charge;
    float total_bill = total_charge + tax;
    return total_bill;
}

int main() {
    struct hotel guest;

    // Read details from the user
    readDetails(&guest);

    // Calculate the bill
    float bill = calculateBill(guest);

    // Display appropriate message
    printf("\nCustomer Name: %s\n", guest.c_name);
    printf("Number of Days Stayed: %d\n", guest.No_days);
    printf("Mobile Number: %s\n", guest.phone_num.mob);
    printf("Alternate Mobile Number: %s\n", guest.phone_num.alt_mob);
    printf("Total Bill: $%.2f\n", bill);

    return 0;
}
```


2nd Question
```
Create a structure called Book with members as Book_name, Author_name, Edition, Publication, year and price. Show the menu to the user to do the following: Read book data, Display the book data if the user enters the book name. Display appropriate message
```
Answer:
```c
#include <stdio.h>
#include <string.h>

// Define structure for Book
struct Book {
    char Book_name[100];
    char Author_name[100];
    int Edition;
    char Publication[100];
    int year;
    float price;
};

// Function to read book data
void readBook(struct Book *book) {
    printf("Enter Book Name: ");
    scanf("%s", book->Book_name);
    printf("Enter Author Name: ");
    scanf("%s", book->Author_name);
    printf("Enter Edition: ");
    scanf("%d", &book->Edition);
    printf("Enter Publication: ");
    scanf("%s", book->Publication);
    printf("Enter Year: ");
    scanf("%d", &book->year);
    printf("Enter Price: ");
    scanf("%f", &book->price);
}

// Function to display book data
void displayBook(struct Book book) {
    printf("\nBook Name: %s\n", book.Book_name);
    printf("Author Name: %s\n", book.Author_name);
    printf("Edition: %d\n", book.Edition);
    printf("Publication: %s\n", book.Publication);
    printf("Year: %d\n", book.year);
    printf("Price: %.2f\n", book.price);
}

int main() {
    struct Book library[100]; // Assuming a library of 100 books
    int choice, numBooks = 0;
    char searchName[100];

    do {
        printf("\nMenu:\n");
        printf("1. Read Book Data\n");
        printf("2. Display Book Data by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (numBooks < 100) {
                    printf("\nEnter details for book %d:\n", numBooks + 1);
                    readBook(&library[numBooks]);
                    numBooks++;
                } else {
                    printf("\nLibrary is full.\n");
                }
                break;
            case 2:
                printf("\nEnter the name of the book to display: ");
                scanf("%s", searchName);
                for (int i = 0; i < numBooks; i++) {
                    if (strcmp(searchName, library[i].Book_name) == 0) {
                        displayBook(library[i]);
                        break;
                    }
                }
                printf("\nBook not found.\n");
                break;
            case 3:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice! Please enter a valid option.\n");
        }
    } while(choice != 3);

    return 0;
}
```

Question 3)
```
Create a structure called Book with members as Book_name, Author_name, Edition, Publication, year and price. Show the menu to the user to do the following: Read book data, Display the book data if the user enters the book name. Display appropriate message.
```
Answer: 
```c
#include <stdio.h>
#include <string.h>

// Structure for weather report
struct weather_Report {
    float rainfall;
    float temperature;
    char city_name[50];
};

// Function to read weather report details of 3 cities
void readWeatherReports(struct weather_Report reports[], int numCities) {
    for (int i = 0; i < numCities; i++) {
        printf("\nEnter details for city %d:\n", i + 1);
        printf("City Name: ");
        scanf("%s", reports[i].city_name);
        printf("Rainfall (in mm): ");
        scanf("%f", &reports[i].rainfall);
        printf("Temperature (in Celsius): ");
        scanf("%f", &reports[i].temperature);
    }
}

// Function to display weather report details of 3 cities
void displayWeatherReports(struct weather_Report reports[], int numCities) {
    printf("\nWeather Report for 3 cities:\n");
    for (int i = 0; i < numCities; i++) {
        printf("\nCity Name: %s\n", reports[i].city_name);
        printf("Rainfall: %.2f mm\n", reports[i].rainfall);
        printf("Temperature: %.2f Celsius\n", reports[i].temperature);
    }
}

// Function to find city with maximum temperature
void displayCityWithMaxTemperature(struct weather_Report reports[], int numCities) {
    float max_temp = reports[0].temperature;
    int max_index = 0;
    for (int i = 1; i < numCities; i++) {
        if (reports[i].temperature > max_temp) {
            max_temp = reports[i].temperature;
            max_index = i;
        }
    }
    printf("\nCity with Maximum Temperature: %s\n", reports[max_index].city_name);
    printf("Temperature: %.2f Celsius\n", reports[max_index].temperature);
}

int main() {
    struct weather_Report reports[3]; // Array to store weather reports of 3 cities

    // Read weather report details
    readWeatherReports(reports, 3);

    // Display weather report details
    displayWeatherReports(reports, 3);

    // Display city with maximum temperature
    displayCityWithMaxTemperature(reports, 3);

    return 0;
}
```

Question 4)
```
Create a user defined data type for date. Write a function which will increment the date by 1
```
Answer:
```c
#include <stdio.h>

// Define structure for date
struct Date {
    int day;
    int month;
    int year;
};

// Function to increment date by 1
void incrementDate(struct Date *date) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Check for leap year
    if ((date->year % 4 == 0 && date->year % 100 != 0) || (date->year % 400 == 0)) {
        daysInMonth[2] = 29; // February has 29 days in a leap year
    }

    date->day++;
    if (date->day > daysInMonth[date->month]) {
        date->day = 1;
        date->month++;
        if (date->month > 12) {
            date->month = 1;
            date->year++;
        }
    }
}

int main() {
    struct Date today;

    // Read date from the user
    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    // Increment the date by 1
    incrementDate(&today);

    // Display the incremented date
    printf("\nTomorrow's date is: %02d/%02d/%d\n", today.day, today.month, today.year);

    return 0;
}
```
