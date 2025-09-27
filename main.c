#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {

    // Menu options array
    char menu_options[3][50] = {
        "1. View Random Sales Data", 
        "2. About This Program",
        "3. Exit"
    };
    
    char return_menu;
    int choice;
    
    // Main program loop
    do {
        // Display welcome menu
        printf("=== TICKET FLOW ===\n");
        printf("Advanced Cinema Sales Analytics\n\n");
        
        for(int i = 0; i < 3; i++) {
            printf("%s\n", menu_options[i]);
        }
        
        printf("\nSelect an option (1-3): ");
        scanf("%d", &choice);
        
        switch(choice) {

            // View Sales Data option
            case 1:
                printf("\n=== CINEMA SALES DATA ===\n\n");
                break;

            // About option
            case 2:
                printf("\n=== ABOUT TICKET FLOW ===\n\n");
                printf("Ticket Flow is a powerful cinema sales analysis tool that generates\n");
                printf("random ticket sales data for top-rated movies. Lorem ipsum dolor sit\n");
                printf("amet, consectetur adipiscing elit. This program demonstrates advanced\n");
                printf("array manipulation, random number generation, and ASCII visualization\n");
                printf("techniques in C programming language.\n\n");
                printf("Features include dynamic data generation, interactive user interface,\n");
                printf("and professional ASCII bar charts for statistical visualization.\n");
                printf("Perfect for cinema management and data analysis purposes.\n\n");
                
                printf("Return to menu? (y/n): ");
                scanf(" %c", &return_menu);
                if(tolower(return_menu) == 'n') {
                    printf("Thanks for using Ticket Flow! Goodbye!\n");
                    return 0;
                }
                continue; // Go back to menu
                
            // Exit option
            case 3:
                printf("\n=== THANK YOU! ===\n\n");
                printf("Thank you for using TicketFlow 2025!\n");
                printf("We appreciate your participation in testing our cinema sales\n");
                printf("analysis system. Your feedback helps us improve the program.\n\n");
                printf("Have a great day and enjoy the movies!\n");
                printf("Goodbye!\n\n");
                return 0;
                
            default:
                printf("Invalid option! Try again.\n\n");
                continue;
        }


    // Little database | Array | Vector of movies
    char movies[10][50] = {
        "The Shawshank Redemption",
        "The Godfather",
        "The Dark Knight",
        "Pulp Fiction",
        "Forrest Gump",
        "Inception",
        "The Matrix",
        "Fight Club",
        "Goodfellas",
        "Interstellar"
        };


    // Every time you run the program, it will generate a different number of sells based on the movies array
    srand(time(NULL));

    int sells[10]; // Array to hold random sells for each movie

    //Connection between movies and sells
    for(int i = 0; i < 10; i++) {
        sells[i] = rand() % 200;  // Generates random sells for movie [i]
        printf("Movie: %s | Sells: %d\n", movies[i], sells[i]);
    }


    printf("\nDo you want a Graphic of the sells? (y/n)\n");

    char answer;  // ← SEM [3], só 1 caractere mesmo!
    scanf(" %c", &answer);  // ← SEM & duplo

if(tolower(answer) == 'y') {  // ← SEM [0] já que não é mais array!
        
        // ASCII Bar Chart - Each █ represents ~10 tickets
        printf("\n=== CINEMA SALES CHART ===\n\n");
        
        for(int i = 0; i < 10; i++) {
            printf("%-25s ", movies[i]);  // Movie name with fixed width
            
            // Calculate bars (each bar = 10 tickets)
            int bars = sells[i] / 10;
            
            // Print the bars
            for(int j = 0; j < bars; j++) {
                printf("||");
            }
            
            printf(" (%d tickets)\n", sells[i]);
        }
        
        printf("\n=== Chart Complete! ===\n");
    }
    
    // Ask to return to menu for case 1
    printf("\nReturn to menu? (y/n): ");
    scanf(" %c", &return_menu);
    if(tolower(return_menu) == 'n') {
        printf("Thanks for using Ticket Flow! Goodbye!\n");
        return 0;
    }
    
    } while(1); // Continue loop until user chooses to exit
    
    return 0;

}
