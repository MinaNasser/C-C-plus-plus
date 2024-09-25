#include <stdio.h>

typedef unsigned char u8 ;
typedef signed char s8   ;

typedef short unsigned int u16 ;
typedef unsigned int u32 ;

typedef short signed int s16 ;
typedef signed int s32;

typedef float f32 ;
typedef double f64;
typedef long double f128;

int main(void){
	
	printf("The size of unsigned char data type = %d \n" , sizeof(u8));
	printf("The size of signed char data type = %d \n" , sizeof(s8));
	
	printf("The size of short unsigned int data type = %d \n" , sizeof(u16));
	printf("The size of unsigned int data type = %d \n" , sizeof(u32));
	
	printf("The size of short signed int data type = %d \n" , sizeof(s16));
	printf("The size of signed int data type = %d \n" , sizeof(s32));
	
	printf("The size of float data type = %d \n" , sizeof(f32));
	printf("The size of double data type = %d \n" , sizeof(f64));
	printf("The size of long double data type = %d " , sizeof(f128));	
	
	return 0 ;
}
