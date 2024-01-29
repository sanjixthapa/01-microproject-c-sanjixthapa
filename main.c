#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char *readFile(const char *string, int i);

/*********************************
 * Don't change the main function
 * *******************************
 */
int main() {
    char * s1 = readFile("input.txt", 0);
    char* e1="My first love\n";
    char* ep1="My first love";

    char * s2 = readFile("input.txt", 1);
    char* e2="CSC344\n";
    char* ep2="CSC344";

    char * s3 = readFile("input2.txt", 2);
    char* e3="And on his farm he had some cows\n";
    char* ep3="And on his farm he had some cows";

    int result1 = 1, result2 = 1, result3 =1 ;
    if (strcmp(s1, e1)==0 || strcmp(s1, ep1)==0)
        result1 =0;
    if (strcmp(s2, e2)==0 || strcmp(s2, ep2)==0)
        result2 =0;
    if (strcmp(s3, e3)==0 || strcmp(s3, ep3)==0)
        result3 =0;

    if (result1==0 && result2==0 && result3 ==0)
        printf("%s", "Congratulations");
    else
        exit(1);

    return 0;
}

/*********************************
 * Don't change the main function
 * *******************************
 */

char *readFile(const char *string, int  i) {
    FILE *pF = fopen(string, "r");
    if (pF == NULL) {
        printf("Error opening file");
    }
    char buffer[256];
    int count = 0;

    while (fgets(buffer, sizeof(buffer), pF) != NULL) {
        if (count  == i+1) {
            fclose(pF);
            char *result = malloc(strlen(buffer));
            if (result == NULL) {
                printf("Memory allocation error");
                return NULL;
            }
            strcpy(result, buffer);
            return result;

        } else {
            count++;
        }
    }
    fclose(pF);
    return 0;
}

