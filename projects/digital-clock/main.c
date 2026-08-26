#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main() {

    // Digital Clock

    time_t rawtime = 0; // Jan 1 1970 (epoch)
    struct tm *timePtr = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        timePtr = localtime(&rawtime);

        // (-> func) deference my pointer then give the current hour of the time struct

        printf("\r%02d:%02d:%02d", timePtr->tm_hour, timePtr->tm_min, timePtr->tm_sec);

        fflush(stdout); // stdout is line-buffered: without a \n nothing prints until we flush

        sleep(1);

    }

    return 0;

}
