#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void delay(int seconds) {
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}

void signal(char direction[]) {
    printf("\nDirection: %s\n", direction);

    printf("GREEN Light ON\n");
    delay(3);

    printf("YELLOW Light ON\n");
    delay(2);

    printf("RED Light ON\n");
    delay(1);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== TRAFFIC SIGNAL MANAGEMENT =====\n");
        printf("1. Start Traffic Signal\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            signal("NORTH");
            signal("EAST");
            signal("SOUTH");
            signal("WEST");
            break;

        case 2:
            printf("\nExiting Traffic Signal System...\n");
            return 0;

        default:
            printf("\nInvalid Choice! Try Again.\n");
        }
    }
}
