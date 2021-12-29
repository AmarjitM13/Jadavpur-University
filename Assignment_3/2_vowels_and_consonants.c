#include <stdio.h>

void vowel_Cons_Count(char line[150], int* v, int* c){
    int _vowels = 0 , _consonant = 0 ;

for (int i = 0; line[i] != '#'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++_vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++_consonant;
        }
        *v = _vowels;
*c = _consonant;

    }



}

int main() {
    char line[150];
    int vowels, consonant;

    vowels = consonant = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    vowel_Cons_Count(line, &vowels,&consonant);

    printf("No of Vowels: %d", vowels);
    printf("\nNo of Consonants: %d", consonant);
    return 0;
}
