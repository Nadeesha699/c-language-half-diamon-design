#include<stdio.h>

int main(){

 int x,y,s=1,r=1,s1=10,y1;

 for(x=1;x<=20;x++){

        if(r==2){

          for(y1=1;y1<=s1;y1++){
          printf("*");

          }

         s1--;
        }
        else{

          for(y=1;y<=s;y++){
          printf("*");

          }
        }

         printf("\n");
         if(s==10){
            r=2;
         }
         else{
          s++;
         }

 }

}

