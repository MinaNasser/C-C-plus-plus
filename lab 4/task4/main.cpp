#include <iostream>

using namespace std;
#define Bool int
#define False 0
#define True !0

int main()
{
    Bool bl = False;
    int x= 20 ;
    int y =50;
    bl = x>y;
    printf("Boolen = %d\n",bl);
    bl = x<y;
    printf("Boolen = %d\n",bl);

    return 0;
}
