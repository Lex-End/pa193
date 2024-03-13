#include <stdio.h>
#include <string.h>
#include <algorithm>

int main(void)
{
    int a;
    char b = 1;
    int bufStack[10];
    int* bufHeap = new int[5];

    memset(bufStack, 0, sizeof(bufStack));
    memset(bufHeap, 0, 5 * sizeof(int));

    //index issues
    bufStack[10] = 1;

    bufHeap[a] = 'a';

    bufHeap[b] = '1';

    //buffer overflow
    if (1 == a)
    {
        scanf("%-20s: %p\n", "bufStack:", bufStack);
    }

    //buffer underflows
    *(bufStack - 1) = '\0';
    
    char* basetemp;
    char* restemp;
    char* temp = strstr(basetemp, "Lorem Ipsum");
    int idx = temp - &b;
    strcpy(&basetemp[idx], restemp);

    strncpy(restemp, restemp-10, 1024);

    int index = -1;
    char buffer[99];
    buffer[index] = '\0';

    //lecture stuff
    scanf("%79s", basetemp);
    sprintf(restemp, basetemp);
    printf("%s\n", restemp);

    for (unsigned char i = 10; i >= 0; i--) {
        
    }

}