#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// initalizing functions
int stringLength(const char string[]);
void concat(char results[], const char str1[], const char str2[]);
bool equalString(const char s1[], const char s2[]);


int main() {

    const char word1[] = "Jason";
    const char word2[] = "Pablo";
    const char word3[] = "Antonio";
    char results[50];

    printf("%d      %d      %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(results, word1, word2);
    printf("\n%s\n", results);

    printf("\n%d\n", equalString("Pablo", "Pablo"));
    printf("\n%d\n", equalString("Pablo", "Lito"));
    
    return 0;
}

int stringLength(const char string[]){
    int count = 0;

    while (string[count] != '\0')
        ++count;

    return count;
}


void concat(char results[], const char str1[], const char str2[]) {
    int i, j;

    for(i=0; str1[i] != '\0'; i++){
        results[i] = str1[i];
    }

    for(j=0; str2[j] != '\0'; j++){
        results[i+j] = str2[j];
    }

    results[i+j] = '\0';
}

bool equalString(const char s1[], const char s2[]) {
    int i;
    bool areEqual = false;

    while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    
    return areEqual;
}