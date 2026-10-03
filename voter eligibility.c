#include<stdio.h>

//BY FUNCTION
void vote(int n);

int main(){
    int age;
     printf("enter age : ");
     scanf("%d",&age);

     vote(age);

    return 0;
   }
   
   void vote(int n){

     if(n >=18){  
      printf("Adult");
     }
     else if(n < 18){ 
     printf("not adult");
     }
   }