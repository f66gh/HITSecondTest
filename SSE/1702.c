#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
    int no = 1;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j+1; k < 5; k++){
                printf("%d:%s,%s,%s\n",no++, bColor[i], bColor[j], bColor[k]);
            }
        }
    }
    return 0;
}
