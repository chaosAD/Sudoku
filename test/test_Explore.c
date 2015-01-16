#include "unity.h"
#include <stdio.h>
#include "EliminateNumberFromAllPeers.h"
#include "Square.h"


void real(int squares[9][9], int row, int column, int value) {
  printf("successful\n");
  squares[row][column] = value;
} 

void setUp(void){
}

void tearDown(void){}

void test_explore() {
  int sqrs[9][9];
  foo((ARRAY_OF_9_9)sqrs, 2, 4, 36);
  TEST_ASSERT_EQUAL(37, sqrs[2][4]);
}