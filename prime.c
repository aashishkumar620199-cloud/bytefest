#include <stdio.h>
#include <math.h>
void prime(int x){
     int i,flag=0;
    if(x<2){
    printf("%d is not a prime number",x);
    return;
    }
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
        flag=1;
        break;
        }
    }
    if (flag==0)
    printf("%d is prime number",x);
    else
    printf("%d is not a prime number",x);
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
