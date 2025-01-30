#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *current;

    current_time = time(NULL);  // Get the current time
    if (current_time == -1) {
        printf("Error: Unable to get the current time.\n");
        return 1;
    }

    current = localtime(&current_time);  // Convert to local time
    if (current == NULL) {
        printf("Error: Unable to convert to local time.\n");
        return 1;
    }

    // Print the current time
    printf("Current time: %02d:%02d:%02d\n", current->tm_hour, current->tm_min, current->tm_sec);

    return 0;
}
