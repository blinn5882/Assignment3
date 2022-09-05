#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(){


int initial = 1000 ;

int first[6] ;

int second[6] ;

int bet = NULL;

int* a ;

int* ptr1 ;

int* ptr2 ;

ptr1 =  &first ;

ptr2 = &second ;

a = &initial ;

int x = NULL;

int y = NULL ;

srand(time(NULL));

void fill(int array[],int length,int max) ;

printf("                    *************************************               \n");
printf("                    *****                           *****               \n");
printf("                    ****                             ****               \n");
printf("                    ***  Welcome to Two Rolling DICE  ***               \n");
printf("                    ****                             ****               \n");
printf("                    *****                           *****               \n");
printf("                    *************************************               \n\n");

printf(" Your Initial Credit is 1000\n\n");

while( *a > 10){

printf(" Please make perdition for 1st and 2nd dice\n\n");

printf(" Enter First Dice Number (1 to 6) : ");

scanf("%d",&x);

printf("\n");

while(x ==0 || x>6){

printf(" Invalid ,enter the number between 1 to 6\n\n");

printf(" Enter First Dice Number : ");

scanf("%d",&x);

printf("\n");
}
printf(" Enter Second Dice Number (1 to 6) : ");

scanf("%d",&y);

printf("\n");

while(y ==0 || y>6){

printf(" Invalid ,enter the number between 1 to 6\n\n");

printf(" Enter Second Dice Number : ");

scanf("%d",&y);

printf("\n");
}

printf(" Your credit : %d \n\n" , *a) ;

printf(" Enter credit You Want to bet : ");

scanf ("%d", &bet);

printf("\n");



while(*a < bet ){

printf(" Your Bet Amount is exceed than your credit\n\n");

printf(" Your Current credit : %d\n\n ",*a);

printf(" Enter credit You Want to bet : ");

scanf ("%d", &bet);

printf("\n");
}



printf(" Your bet Amount : %d credits \n\n" , bet);


printf(" press any key to start roll\n\n");

getch() ;

fill(first , 6 , 6);
fill(second , 6 , 6);
printf("     ************************************************     \n");
printf("     ** Your Predict 1st Dice = %d : 2nd Dice = %d   **     \n", x, y);
printf("     **                                            **     \n");
printf("     ** Roll result  1st Dice = %d : 2nd Dice = %d   **     \n ",*ptr1 , *ptr2);
printf("    ************************************************    \n\n");





if (*ptr1 == x){

    printf(" Congratulation Your predicted 1st Dice Number is same with rolling result\n\n") ;


    *a= *a + bet ;
}

if (*ptr2 == y){

    printf(" Congratulation Your predicted 2nd Dice Number is same with rolling result\n\n") ;

    *a = *a + bet ;

}

if (*ptr1 != x && *ptr2 != y ){

    printf(" Your predict numbers are not same with rolling result\n\n");
    printf(" Please Try Again\n\n");

   *a = *a - bet ;
}
printf(" Your credit : %d \n\n" , *a) ;

printf(" Press Any Key to Continue\n\n");

getch();

system ("cls");


}

printf (" Your credit is : %d\n\n", *a);
printf (" Minimum require credit : 10\n\n");
printf (" Thanks ");



return 0;
}

void fill(int array[],int length,int max){

for(int i=0 ;i< length ;i++){

   array[i] = (rand() %max+1) + 1;
}
}










