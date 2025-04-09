#include "triangulo.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Triangulo);
TEST_SETUP(Triangulo) {}
TEST_TEAR_DOWN(Triangulo) {}

TEST(Triangulo, Equilatero) 
{
  TEST_ASSERT_EQUAL_STRING("Equilatero", triangulo(5, 5, 5));
}

TEST(Triangulo, Isosceles) 
{
  TEST_ASSERT_EQUAL_STRING("Isosceles", triangulo(5, 5, 3));
  TEST_ASSERT_EQUAL_STRING("Isosceles", triangulo(3, 5, 5));
  TEST_ASSERT_EQUAL_STRING("Isosceles", triangulo(5, 3, 5));
}

TEST(Triangulo, Escaleno) 
{
  TEST_ASSERT_EQUAL_STRING("Escaleno", triangulo(4, 5, 6));
}

TEST(Triangulo, NaoEhTriangulo) 
{
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(1, 2, 3));
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(10, 2, 2));
}

TEST(Triangulo, ValoresLimites) 
{
  TEST_ASSERT_EQUAL_STRING("Equilatero", triangulo(1, 1, 1));
  TEST_ASSERT_EQUAL_STRING("Equilatero", triangulo(200, 200, 200));
}

TEST(Triangulo, ValoresDentroDosLimites)
{
  TEST_ASSERT_EQUAL_STRING("Equilatero", triangulo(2, 2, 2));
  TEST_ASSERT_EQUAL_STRING("Equilatero", triangulo(199, 199, 199));
}

TEST(Triangulo, ValoresForaDosLimites) 
{
  TEST_ASSERT_EQUAL_STRING("Valor fora do intervalo", triangulo(0, 5, 5));
  TEST_ASSERT_EQUAL_STRING("Valor fora do intervalo", triangulo(5, 201, 5));
  TEST_ASSERT_EQUAL_STRING("Valor fora do intervalo", triangulo(5, 5, -1));
}

TEST(Triangulo, FronteiraNaoEhTriangulo) 
{
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(1, 1, 2));
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(1, 2, 1));
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(2, 1, 1));
}

TEST(Triangulo, FronteiraIgualSomaDosLados)
{
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(1, 2, 3)); 
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(3, 1, 2)); 
  TEST_ASSERT_EQUAL_STRING("Nao e um Triangulo", triangulo(2, 3, 1)); 
}
