#include <stdio.h>
#include <unistd.h>

void count_characters(const char *str) {
    int count[256] = {0}; // Assuming ASCII characters
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            char output[20];
            int len = snprintf(output, sizeof(output), "%c:%d\n", (char)i, count[i]);
            write(1, output, len);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        write(2, "Usage: my_ngram <string1> [<string2> ...]\n", 42);
        return 1;
    }
    
    for (int i = 1; i < argc; i++) {
        count_characters(argv[i]);
    }
    
    return 0;
}
