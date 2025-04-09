#include <stdio.h>

const char* triangulo(int a, int b, int c) 
{
    // 1
    if (a < 1 || a > 200 || b < 1 || b > 200 || c < 1 || c > 200) // 2 
    {
        return "Valor fora do intervalo"; // 3
    }
    
    if (a >= b + c || b >= a + c || c >= a + b) // 4 
    {
        return "Nao e um Triangulo"; // 5
    }
    
    if (a == b && b == c) // 6
    {
        return "Equilatero"; // 7
    } 
    else if (a == b || a == c || b == c) // 8 
    {
        return "Isosceles"; // 9
    } 
    else // 10
    {
        return "Escaleno"; // 11
    }
}

// int main ()
// {
//     int a, b, c;

//     printf("Defina os lados do triangulo: ");
//     scanf("%d %d %d", &a, &b, &c);

//     triangulo(a, b, c);
// }