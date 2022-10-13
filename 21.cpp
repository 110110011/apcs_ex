#include <stdio.h>
int main() {
    
    
    
    
    
    
    
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    
    if (operator '+'){
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    }
    else if (operator '-'){
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    }
    else if (operator '*'){
        
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
         
    }
    else if (operator '/'){
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    }
    else{
        printf("Error! operator is not correct");
    }
     
     
    

}

    cout<<"Hello World";

    return 0;
}
