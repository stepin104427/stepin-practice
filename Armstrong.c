#include <stdio.h>
#include <math.h>

void armstrong(int n);

int main(){
  int num;
  scanf("%d", &num);
  for(int i = 0; i < num; i++){
    int n;
    scanf("%d", &n);
    armstrong(n);
  }
  return 0;
}

void armstrong(int n){
  int a = n;
  int sum = 0;
  int count = 0;
  while(n > 0){
    count += 1;
    n = n / 10;
  }
  n = a;
  while(n > 0){
    int d = n % 10;
    sum += pow(d, count);
    printf("***Sum=%d***",sum);
    n = n / 10;
  }
  if(a == sum){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
}
