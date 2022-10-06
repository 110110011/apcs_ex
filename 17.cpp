#include <iostream>
using namespace std;

int main()
{
   float r, area, circlelength, temp;
    
   
        printf ("please input r:");
        scanf ("%f", &r);
        if (r > 0){
             area = r * r * 3.1415926;
             printf("area = %f",area);
             circlelength = 2 * r * 3.1415926;
             printf(" circlelength = %f", circlelength);
        
    }else {
        printf("r<0");
        
    }
   
    
    return 0;
}
