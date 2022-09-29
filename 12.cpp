int main() {
    int a, b, product;
    a = 16;
    b = 7;


    // Calculating product
    a = a >> 1 ;
        printf("Product  = %d \n", a);
    a = a >> 1 ;
        printf("Product  = %d \n", a);
    product  = a >> 1 ;
        printf("Product = %d \n", product);
    product  = a << 1 ;
        printf("Product = %d \n", product);
    product  = a-- ;
        printf("Product = %d", product);
    return 0;
}
