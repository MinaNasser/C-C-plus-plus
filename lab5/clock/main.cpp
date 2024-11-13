#include <iostream>

using namespace std;

int main()
{
    int kepprun=1;
    int clock;
    while(kepprun){
        printf("pleas Enter clock between 1 - 12: \n");
        scanf("%d",&clock);
        if(clock>=1&&clock<=12)
        {
            printf("Thanks\n");
            return 0 ;
        }
    }
    return 0;
}
