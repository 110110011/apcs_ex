#include <stdio.h>
int fun(int x, int y){
    if (x < 0){
        y = 1;
    }else if(x > 0){
        y = 3;
    }else if(x = 0){
        y = 5;}
        
    
    return y;
}

int main(){
    int x,y;
    printf("please input two numbers\n");
    scanf("%d",&x);
    //scanf("%d",&y);
    y= fun(x,y);
    printf("y = %d \n",y);
    
    
    }



    printf("Hello World");

    return 0;
}
