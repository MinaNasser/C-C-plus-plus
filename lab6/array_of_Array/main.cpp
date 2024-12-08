#include <stdio.h>
int main(){
    long long int N=0;
    scanf("%d",&N);
    for(int i=1 ;i<=N;i++){
        printf("%d\n",i);
    }
return 0 ;

}


/*
int main() {
    int num[4] = {42,33,44,5};
    float decimal[5] = {2.2,2.3,33.3,22.5,0.55};
    char *text = "Pointer With Mina";

    // Array of void pointers
    void *arr[3];

    *(arr+0)= &num;
    *(arr+1) = &decimal;
    *(arr+2) = text;
    printf("with FOr \n");
    for(int i =0 ;i<4;i++){
        if(i==0){
            for(int j =0 ; j<4;j++){
                printf("Integer: %d\n",*( ((int *) *(arr+i)) +j));
            }


        }else if (i==1){
            for(int j =0 ; j<5;j++){
                printf("FLoat: %.2f\n",*( ((float *) *(arr+i))+j));
            }
        }else if (i==2){
            printf("String: %s\n", (char *)*(arr+i));
        }
    }



    return 0;
}
*/
