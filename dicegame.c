#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
  int d1,d2;
  char a[10];
  
  srand((unsigned int)time(NULL));
  d1 = rand() % 6 +1;
  d2 = rand() % 6 +1;
  printf("What is your name?\n");
  scanf("%s",a);
  printf("Hello, %s\n",a);

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n", d1, d2, d1+d2);

  if(d1 + d2 == 12){
    printf("%s perfectly won!\n", a);
  }else if(d1 + d2 > 7){
    printf("%s won\n",a);
  }else{
    printf("%s lost\n",a);
  }

  return 0;
}

  
  
