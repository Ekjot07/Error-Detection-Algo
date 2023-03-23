#include <stdio.h> 
int parity_check(int n)
{
    int parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
}
void oddEven(int n)
{
    printf("Given number is %s parity\n", (parity_check(n) ? "odd" : "even"));
}
int main() { 
    int num;
    printf("Enter number: "); 
    scanf("%d", &num); 
    oddEven(num);
    return 0;
}