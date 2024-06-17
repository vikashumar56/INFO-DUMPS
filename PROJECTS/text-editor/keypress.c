// learning to read keypresses from the user

#include <stdio.h>

int main() {
    char c;
    //step 1
    //here this will read 1 byte from the stdin into varaible c until there are no bytes left
    while (read(STDIN_FILENO, &c, 1) == 1);

    
    return 0;
}
