include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>
void game (int);
void decide(int,int);

void decide(int a, int i){
  if(a==1 && i==1)
  printf("result : draw");
  if(a==1 && i==2)
   printf("result : Player won");
  if(a==1 && i==3)
   printf("result : Computer won");
  if(a==2 && i==1)
   printf("result : computer won");
  if(a==2 && i==2)
   printf("result : draw");
  if(a==2 && i==3)
   printf("result : Player won");
  if(a==3 && i==1)
   printf("result : Player won");
  if(a==3 && i==2)
   printf("result : computer won");
  if(a==3 && i==3)
   printf("result : draw");
   printf("\n");
}


void game(int i){
  int a;
  srand(time(0));
  a=rand()%3 +1;
  
    if(a==1)
    printf("computer chose : rock\n");
    if(a==2)
    printf("computer chose : paper\n");
    if(a==3)
    printf("computer chose : scissor\n");
    
   decide(a,i);

  }

int main(void) {
  int i;
  char arr[10],str1[10]="rock", str2[10]="paper",str3[10]="scissor",str4[10]="quit" ;
while(i!=-1){
  printf("please choose rock, paper, scissor or quit\n");
  scanf("%s",arr);

  if(strcmp(arr,str1)==0){
  i=1;
  printf("You chose : rock\n");
  game(i);
  }

  else if(strcmp(arr,str2)==0){
  i=2;
  printf("You chose : paper\n");
   game(i);
  }

  else if(strcmp(arr,str3)==0){
  i=3;
  printf("You chose : scissor\n");
   game(i);
  }

  else if(strcmp(arr,str4)==0){
  printf("You chose to quit the game\n");
  i=-1;
  }

  else
  printf("please enter valid input\n");

}

  
  return 0;
}