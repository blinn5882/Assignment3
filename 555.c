#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(){


int initial = 1000 ;

int first[5] ;

int second[5] ;

int bet = NULL;

int* a ;

int* ptr1 ;

int* ptr2 ;

a = &initial ;

int x = NULL;

int y = NULL ;

srand(time(NULL));

void fill(int array[],int length,int max) ;

printf(" Welcome to Two Rolling Dice \n\n") ;



while( *a > 100){
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
fill(first , 6 , 6);

fill(second , 6, 6);

ptr1 =  &first[3] ;

ptr2 = &second[4] ;

printf(" Your Predict 1st dice = %d , 2nd dice = %d\n\n", x, y);

printf(" Your credit : %d \n\n" , *a) ;

printf(" Enter Credit You Want to bet : ");

scanf ("%d", &bet);

printf("\n");



if(a < bet ){

printf(" Your Bet Amount is exceed than your credit\n\n");

printf(" Your Current credit : %d\n\n ",*a);

printf("Please Try Again \n\n");

}

else{

printf(" Your bet Amount : %d credits \n\n" , bet);

*a = *a - bet ;

printf(" press any key to start roll\n\n");

getch() ;

printf(" first Dice number = %d\n\n ",*ptr1);

printf("second Dice number = %d\n\n",*ptr2);

}

printf(" Press Any Key to Continue\n\n");

getch();

system ("cls");


}




return 0;
}

void fill(int array[],int length,int max){

for(int i=0 ;i< length ;i++){

    array[i] = (rand() %max+1) + 1;
}
}










