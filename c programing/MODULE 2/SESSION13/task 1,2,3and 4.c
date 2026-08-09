#include <stdio.h>
#include <string.h>
main(){
    FILE *file;
    char song[100];
    int i;
    /* 1. Write top 3 songs using write mode (w) */
    file = fopen("playlist.txt", "w");
    fprintf(file, "Perfect\n");
    fprintf(file, "Love Story\n");
    fprintf(file, "Tum Hi Ho\n");
    fclose(file);
    /* 2. Read and display songs */
    file = fopen("playlist.txt", "r");
    printf("My Playlist:\n");
    while (fgets(song, sizeof(song), file) != NULL){
        printf("%s", song);
    }
    fclose(file);
    /* 3. Add two more songs using append mode (a) */
    file = fopen("playlist.txt", "a");
    fprintf(file, "Lover\n");
    fprintf(file, "Love Me Like You Do\n");
    fclose(file);
    /* 4. Print only songs containing "love" */
    file = fopen("playlist.txt", "r");
    printf("\nSongs containing 'love':\n");
    while (fgets(song, sizeof(song), file) != NULL){
        for (i = 0; song[i] != '\0'; i++){
            song[i] = tolower(song[i]);
        }
        if (strstr(song, "love") != NULL){
            printf("%s", song);
        }
    }
    fclose(file);
}
