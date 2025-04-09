#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Triangulo) 
{
  RUN_TEST_CASE(Triangulo, Equilatero);
  RUN_TEST_CASE(Triangulo, Isosceles);
  RUN_TEST_CASE(Triangulo, Escaleno);
  RUN_TEST_CASE(Triangulo, NaoEhTriangulo);
  RUN_TEST_CASE(Triangulo, ValoresLimites);
  RUN_TEST_CASE(Triangulo, ValoresForaDosLimites);
  RUN_TEST_CASE(Triangulo, ValoresDentroDosLimites);
  RUN_TEST_CASE(Triangulo, FronteiraNaoEhTriangulo);
  RUN_TEST_CASE(Triangulo, FronteiraIgualSomaDosLados);
}
