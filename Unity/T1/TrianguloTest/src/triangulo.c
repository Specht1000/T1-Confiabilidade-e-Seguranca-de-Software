#include <stdio.h>
#include <stdlib.h>

const char* triangulo(int a, int b, int c)
{
    // cppcheck
    // int d;
    // if (d > 10) printf("Erro cppcheck\n"); // cppcheck acusa "uninitialized variable 'd'"

    // if (0) {
    //     printf("Nunca executa\n"); // cppcheck avisa código inatingível
    // }
    
    // // valgrind
    // int* vet = malloc(sizeof(int) * 3);
    // vet[3] = 42; // acesso fora do vetor alocado (índice 3 é inválido)
    // free(vet);

    // int* ptr = malloc(sizeof(int) * 10); // vazamento de memória
    // // esqueci o free(ptr);

    // // address sanitizer
    // int* x = malloc(sizeof(int));
    // free(x);
    // *x = 5; // uso após liberação

    // int v[2];
    // v[3] = 10; // <- estouro de buffer na stack

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

int main ()
{
    int a, b, c;

    printf("Defina os lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    triangulo(a, b, c);
}