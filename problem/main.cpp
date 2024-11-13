#include <stdio.h>

int main() {
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w >= 4) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}






/*
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; case_number++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int total = a + b;

        printf("Case %d: %d\n", case_number, total);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'z') {
        printf("a\n");
    } else {
        ch = ch + 1;
        printf("%c\n", ch);
    }

    return 0;
}
#include <stdio.h>

int main() {
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if (a % k == 0 && b % k == 0) {
        printf("Both\n");
    } else if (a % k == 0) {
        printf("Memo\n");
    } else if (b % k == 0) {
        printf("Momo\n");
    } else {
        printf("No One\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    double X, P, O;
    scanf("%lf %lf", &X, &P);
    O = P / (1 - X / 100);
    printf("%.2lf\n", O);

    return 0;
}
#include <stdio.h>
#include<math.h>
int main() {
    double x=9,y=20;
    printf("%0.lf\n",ceil(x/y));
    printf("%0.lf\n",floor(x/y));
    printf("%0.lf\n",round(x/y));
    return 0;
}
int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    if (r1 < l2 || r2 < l1) {
        printf("-1\n");
    } else {
        int start=0;
        if(l1 > l2)
        {
            start =l1;
        }else{
            start=l2;
        }

        int last =0;
        if(r1 < r2)
        {
            last =r1;
        }else{
            last=r2;
        }
        printf("%d %d\n", start, last);
    }


*/


/*

#include <stdio.h>

int main() {
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    if (
        (S == '+' && A + B == C) ||
        (S == '-' && A - B == C) ||
        (S == '*' && A * B == C)
        ) {
        printf("Yes\n");
    } else {
        if (S == '+') {
            printf("%d\n", A + B);
        } else if (S == '-') {
            printf("%d\n", A - B);
        } else if (S == '*') {
            printf("%d\n", A * B);
        }
    }

    return 0;
}



#include <stdio.h>
int main() {
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if ((S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B)) {
        printf("Right\n");
    } else {
        printf("Wrong\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    if ((int)num == num) {
        printf("int %d\n", (int)num);
    } else {
        int IntPart = (int)num;
        float FloatPart = num - IntPart;
        printf("float %d %.3f\n", IntPart, FloatPart);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    int x = X, y = Y, z = Z;
    if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
    }
    if (X > Z) {
        int temp = X;
        X = Z;
        Z = temp;
    }
    if (Y > Z) {
            int temp = Y;
            Y = Z;
            Z = temp;
    }

    printf("%d\n%d\n%d\n\n", X, Y, Z);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}


#include <stdio.h>
int main() {
    int N ;
    scanf("%d",&N);
    int years = N/365;
    int rest_days= N%365;
    int months= rest_days/30;
    int days= rest_days%30;
    printf("%d years\n%d months\n%d days",years,months,days);
        return 0;
}

1 years
1 months
5 days
    int num ;
    scanf("%d",&num);
    int first_digit= num/1000;
    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
    return 0;


*/
/*#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>

int main() {
    char ch;
    int num1, num2, sum;
    scanf("%d%c%d", &num1, &ch, &num2);
    switch(ch) {
        case '+':
            sum = num1 + num2;
            printf("%d\n",sum);
            break;
        case '-':
            sum = num1 - num2;
            printf("%d\n",sum);
            break;
        case '*':
            sum = num1 * num2;
            printf("%d\n",sum);
            break;
        case '/':
            if (num2 != 0) {
                sum = num1 / num2;
                printf("%d\n",sum);
            } else {
                printf("Error! Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");\
            break;
    }

    return 0;
}




#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    char ch ;
    scanf("%c",&ch);
        if(ch>='A'&&ch<='Z'){
            ch =ch -'A' +'a';
            printf("%c\n",ch);

        }else if(ch>='a'&&ch<='z'){
            ch =ch -'a'+'A';
            printf("%c\n",ch);
        }
    return 0;
}
/////////////////
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    char ch ;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("IS DIGIT\n");
    }
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        printf("ALPHA\n");
        if(ch>='A'&&ch<='Z'){
            printf("IS CAPITAL\n");
        }else if(ch>='a'&&ch<='z'){
            printf("IS SMALL\n");
        }
    }
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    char FristName1[100],SecondName1[100],FristName2[100],SecondName2[100];

    scanf("%s %s",FristName1,SecondName1);
    scanf("%s %s",FristName2,SecondName2);
    if(strcmp(SecondName1,SecondName2)==0 ){
        printf("ARE Brothers\n");
    }
    else{
        printf("NOT\n");
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maximum=0;
    if(a>=b && a>=c){
        maximum = a;
    }else if(b>=a && b>=c){
        maximum = b;
    }else{
        maximum=c;
    }
    int minimum=0;
    if(a<=b && a<=c){
        minimum = a;
    }else if(b<=a && b<=c){
        minimum = b;
    }else{
        minimum=c;
    }
    printf("%d %d",minimum,maximum);



    return 0;
}




*/
/*#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num2%num1==0|| num1%num2==0)
        printf("Multiples\n");
    else
        printf("No Multiples\n");
    return 0;
}*/


/*



#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=num2)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}





*/
/*

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    double result = (double) num1/num2;
    printf("floor %d / %d = %.0f\n",num1,num2, floor(result) );
    printf("ceil %d / %d = %.0f\n",num1,num2, ceil(result) );
    printf("round %d / %d = %.0f\n",num1,num2, round(result) );
    return 0;
}

*/
/*
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    double result = (double)num1 / num2;
    printf("floor %d / %d = %.0f\n", num1, num2, floor(result));
    printf("ceil %d / %d = %.0f\n", num1, num2, ceil(result));
    printf("round %d / %d = %.0f\n", num1, num2, round(result));

    return 0;
}
*/

/*
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
int main() {
    int num1,num2;
    scanf("%d %d",num1,num2);
    double result = (double) num1/num2;
    printf("floor %d / %d = %.0f \n",num1,num2, floor(result) );
    printf("ceil %d / %d = %.0f \n",num1,num2, ceil(result) );
    printf("round %d / %d = %.0f \n",num1,num2, round(result) );
    return 0;
}
*/

/*
//************BBBBBBBBBBB
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {


    long long int  x=0, y=0;
    scanf("%lld %lld", &x, &y);
    printf("%lld + %lld = %lld\n", x, y, x + y);
    printf("%lld * %lld = %lld\n", x, y, x * y);
    printf("%lld - %lld = %lld\n", x, y, x - y);




    return 0;
}*/

/*
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
int main() {
    long long int num1 ,num2, sum , num1First,num2First;
    scanf("%lld",&num1);
    scanf("%lld",&num2);
    num1First = num1 % 10;
    num2First = num2 % 10;
    sum = num1First + num2First;
    printf("%lld\n",sum);
    return 0;
}




*/
/*
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
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);

    printf("-------------Incrment v2 ----------\n ");

    int x = Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    int z=10, y=20  ;
    //scanf("%d  %d", &z, &y);
    int ss= sum(z,y);
    printf("sum = %d \n ",ss);
    printf("------------------------------------\n ");


----------------
static int counter=0;
void Increment(){
    counter++;
}

int Incrementv2(){
    static int coun =0 ;
    coun++;
    return coun;

}
int main() {
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);
    printf("------------------------------------\n");
    Increment();
    printf("Counter  from increment = %d \n ",counter);

    printf("-------------Incrment v2 ----------\n ");

    int x = Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");
    x=Incrementv2();
    printf("Counter  from increment v2  = %d \n ",x);
    printf("------------------------------------\n ");

    return 0;
}

------------------
char ch = 'A';
    short int shin =20;
    int in=50;
    long int line =220;
    unsigned int usin= 1000;
    signed int sin_1= -1000;
    printf("-----------------------------\n");
    printf("Char = %c \n And Size %d \n ",ch,sizeof(ch));
    printf("-----------------------------\n");
    printf("short int = %d \n And Size %d \n  ",shin, sizeof(shin));
    printf("-----------------------------\n");
    printf("int = %d    \n And Size %d \n ",in, sizeof(in));
    printf("-----------------------------\n");
    printf("long int = %d \n And Size %d \n  ",line, sizeof(line));
    printf("-----------------------------\n");
    printf("Char = %d \n And Size %d \n ",usin, sizeof(usin));
    printf("-----------------------------\n");
    printf("Char = %d \n And Size %d \n ",sin_1 ,sizeof(sin_1));
    printf("-----------------------------\n");

B -----------------BBBBBBBBBBBBBBBBBBBB
#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int x=0, y=0;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d - %d = %d\n", x, y, x - y);
    return 0;
}*/

/*
CCCCCCCC -----------------------CCCCCCCCCCCCC
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    int A, B, C , D, Difference = 0;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
        Difference = (A*B)-(C*D);
        printf("Difference = %d",Difference);
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    long int num ,sum=0;
    scanf("%d",&num);
    for(int i=1 ;i<=num ;i++ ){
        sum+= i;
    }
    printf("%d",sum);
    return 0;
}





*/


/*
EEEEEEEEEEEEEEEE-EEEEEEEEEEEEEEEEEEEE




*/

/*
FFFFFFFFFFFFFFFFFFFFFFFF-----F
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    long int num ,sum=0;
    scanf("%d",&num);
    for(int i=1 ;i<=num ;i++ ){
        sum+= i;
    }
    printf("%d",sum);
    return 0;
}



*/




/*

--------------------------------------------

#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("%d + %d = %d\n", X, Y, X + Y);
    printf("%d * %d = %d\n", X, Y, X * Y);
    printf("%d - %d = %d\n", X, Y, X - Y);

    return 0;
}
----------------------------
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    long int A, B, C , D, Difference;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
        Difference = (A*B)-(C*D);
        printf("Difference = %d",Difference);
    return 0;
}
------------------------
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    const double PI = 3.141592653;
    cin >> R;
    double area = PI * R * R;
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
--------------------------
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long  num1 ,num2;
    int sum , num1First,num2First;
    scanf("%d",&num1);
    scanf("%d",&num2);
    num1First = num1 % 10;
    num2First = num2 % 10;
    sum = num1First + num2First;
    printf("%d\n",sum);
    return 0;
}



*/

/*
------------úúúúúúúúúXXXXXXXXXXXXXXXXX--------
long long int a, b, c, d, M;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    M = (a * b * c * d) % 100;
    if (M < 10) {
        printf("0%lld\n", M);
    } else {
        printf("%lld\n", M);
    }

*/


