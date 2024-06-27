#include <stdio.h>
#include <string.h>
int main()
{

    //    The memory allocated to all the Strings will be the size of the longest String, causing "Memory wastage".

    int count = 0, i;
    char Array[] = " The memory allocated to all the Strings will be the size of the longest String causing Memory wastage. ";
    printf("%s", Array);

    for (i = 0; i < strlen(Array); i++)
    {
        if (Array[i] == 'a' || Array[i] == 'e' || Array[i] == 'i' || Array[i] == 'o' || Array[i] == 'u' )
        {
            count = count + 1;
        }

    }
    printf("\n The total number of vowels in sentence are %d ", count);
    return 0;
}
