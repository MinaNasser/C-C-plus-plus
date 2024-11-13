#include <iostream>

using namespace std;



static int counter=0;
void Increment(){
    counter++;
}

int Incrementv2(){
    static int coun =0 ;
    coun++;
    return coun;

}



int sum(int &x, int &y ){
    return x + y;
}


int main() {

    Increment();
    Increment();
    Increment();
    printf("Counter  from increment = %d \n ",counter);

    printf("-------------Incrment v2 ----------\n ");

    int x = Incrementv2();
    x=Incrementv2();
    x=Incrementv2();
    x=Incrementv2();
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    int z=10, y=20  ;
    //scanf("%d  %d", &z, &y);
    int ss= sum(z,y);
    printf("sum = %d \n ",ss);
    printf("------------------------------------\n ");

    //////////////////////*task 2 */
    char ch = 'A';
    short int shin =20;
    int in=50;
    long int line =220;
    unsigned int usin= 1000;
    signed int sin_1= -1000;
    float fl = 2.22022;
    double di = 3.38533;
    char name[100]="mina nasser";
    printf("-----------------------------\n");
    printf("Char = %c \n And Size %d \n ",ch,sizeof(ch));
    printf("-----------------------------\n");
    printf("short int = %d \n And Size %d \n  ",shin, sizeof(shin));
    printf("-----------------------------\n");
    printf("int = %i   \n And Size %d \n ",in, sizeof(in));
    printf("-----------------------------\n");
    printf("long int = %d \n And Size %d \n  ",line, sizeof(line));
    printf("-----------------------------\n");
    printf("unsigned int = %lu \n And Size %d \n ",usin, sizeof(usin));
    printf("-----------------------------\n");
    printf("signed int = %d \n And Size %d \n ",sin_1 ,sizeof(sin_1));
    printf("-----------------------------\n");
    printf("float = %f \n And Size %d \n ",fl ,sizeof(fl));
    printf("-----------------------------\n");
    printf("float = %.2f \n And Size %d \n ",fl ,sizeof(fl));
    printf("-----------------------------\n");

    printf("float = %lf \t \\  And Size %d \n ",di ,sizeof(di));

    printf("-----------------------------\n");
    printf("String  = %s \t \\  And Size %d \n ",name ,sizeof(di));

    printf("----------------    %d    vs    %i  -------------\n");

     int num;
    printf("Enter a number (use 0 for octal, 0x for hexadecimal): ");
    scanf("%i", &num);
    printf("You entered (using %%i): %d\n", num);
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("You entered (using %%d): %d\n", num);

    printf("-----------------------------\n");



    return 0 ;
}
