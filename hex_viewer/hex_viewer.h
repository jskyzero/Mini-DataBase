#include <stdio.h>
#include <stdlib.h>

#define str_size 128

int hex_viewer(char* str);

int hex_viewer(char* str) {
    FILE* fp = fopen(str, "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    int c;
    
    int  num = 0;
    void* p = NULL;
    while ((c = fgetc(fp))!= EOF) {
        if(0 == num%8 ) {
            printf("%p| ",p);
        }
        printf("%.2x ",c);
        num++;
        if(8 == num) {
            printf("\n");
            num = 0;
            p+=8;
        }
}

    if(ferror(fp))
        puts("I/O error when reading");
   
    else if(feof(fp))
       // puts("\nEND of file reached successfully");

    fclose(fp);
    return 0;
}