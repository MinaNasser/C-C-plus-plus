#include <iostream>

using namespace std;

int main()
{
    int Student[3][2];
    Student[0][0]=1;
    Student[0][1]=99;

    Student[1][0]=2;
    Student[1][1]=50;

    Student[2][0]=3;
    Student[2][1]=100;


    for(int i=0 ; i<3;i++){
        for(int j =0 ; j<2;j++){
            if(j==0){
                printf("ID = %d  ", Student[i][0]);
            }else{
                printf("Grad = %d  ",Student[i][1]);
            }

        }
        printf("\n");
    }



    printf("\n\n\n");
    printf("Print two dimensional array \n");
    for (int i =0 ;i<6; i++){
        printf("%d\t",*(*Student+i) );

    }

      printf("\n\n\n");
    printf("Print two dimensional array  ID Grad \n\n\n");
    for (int i =0 ;i<6; i++){
            if(i%2 == 0){
                printf("ID = %d\t",*(*Student+i) );
            }
            else{
                printf("Grad = %d\n",*(*Student+i) );
            }


    }



}
