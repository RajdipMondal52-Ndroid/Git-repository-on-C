# include <stdio.h>

int main(){
   int password = 123;
   int pass;
   
   for(int i = 1;i<=3;i++){
    printf("enter your password : ");
    scanf("%d",&pass);
    if(pass == password){
        printf("login successful\n");
        break;
    } else{
        printf("login failed\n");
    }
   }
}