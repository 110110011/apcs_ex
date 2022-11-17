#include <iostream>
#include <stdio.h>
using namespace std;
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}    
int multiply(int x, int y){    
    return x*y;
}
int divide(int x, int y){    
    return x/y;
}
int main(){
    int x,y;
    
    printf("please input two numbers \n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < 0){
        y = 1;
    }else if(x > 0){
        y = 3;
    }else if(x = 0){
        y = 5;
        
    }else{}
    
    printf("x + y = %d\n",add(x,y));
    printf("x - y = %d\n",sub(x,y));
    printf("x * y = %d\n",multiply(x,y));
    printf("x / y = %d\n",divide(x,y));
    
    cout<<"Hello world\n";
    return 0;
}
