#include <date.h>
#include <stdio.h>

int main(){
  Date d = createDate(1,2,2017);
  printf("ola: %i\n", get_day(d));
  return 0;
} 
