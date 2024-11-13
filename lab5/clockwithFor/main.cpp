#include <iostream>

using namespace std;

int main()
{
    int kepprun=1;
    int clock;
    for(int i=0 ; i<3;i++){
        printf("Please enter the time between 1 - 12:\n");
        printf(" Note: You have %d attempts.\n",3-i);
        scanf("%d",&clock);
        if(clock>=1&&clock<=12)
        {
            printf("Thanks\n");
            return 0 ;
        }
    }

    return 0;
}
