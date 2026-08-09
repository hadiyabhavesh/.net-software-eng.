#include <stdio.h>

struct MovieShow {
    char Movie[50];
    int Screen;

    struct Time {
        int hours;
        int minutes;
    } time;
};

int main() {
    struct MovieShow show = {"Avengers", 3, {7, 30}};

    printf("Movie: %s, Screen: %d, Time: %d:%d\n",
           show.Movie, show.Screen,
           show.time.hours, show.time.minutes);

    return 0;
}
