#include "unity.h"
#include "Square.h"
#include "ErrorCode.h"
#include "CException.h"


void setUp(void){}



void tearDown(void){}



void test_getSquare_should_enter_column_2_row_1_and_return_2(void){

 int column = 2;

 int row = 1;

 int square[9][9];

 int *valuePtr;



 square[row-1][column-1] = 2;

 valuePtr = getSquare(square, row, column);



 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((*valuePtr)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_getSquare_should_enter_column_6_row_4_and_return_7(void){

 int column = 6;

 int row = 4;

 int square[9][9];

 int *valuePtr;



 square[row-1][column-1] = 7;

 valuePtr = getSquare(square, row, column);



 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((*valuePtr)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

}



void test_squareSetNumber_should_enter_column_2_row_1_and_set_bit_3_2_1_4(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 2, 1), 3);

  squareSetNumber(getSquare(square, 2, 1), 2);

  squareSetNumber(getSquare(square, 2, 1), 1);

  squareSetNumber(getSquare(square, 2, 1), 4);



 UnityAssertEqualNumber((_U_SINT)((15)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

}



void test_squareSetNumber_should_enter_column_3_row_8_and_set_bit_4_2_6(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 3, 8), 4);

 squareSetNumber(getSquare(square, 3, 8), 2);

 squareSetNumber(getSquare(square, 3, 8), 6);



 UnityAssertEqualNumber((_U_SINT)((42)), (_U_SINT)((square[2][7])), (((void *)0)), (_U_UINT)54, UNITY_DISPLAY_STYLE_INT);

}



void test_squareSetNumber_should_enter_column_8_row_8_and_set_bit_2_7_8(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 9, 9), 2);

 squareSetNumber(getSquare(square, 9, 9), 7);

 squareSetNumber(getSquare(square, 9, 9), 8);



 UnityAssertEqualNumber((_U_SINT)((194)), (_U_SINT)((square[8][8])), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

}



void test_squareDelNumber_should_enter_column_4_row_2_and_del_bit_5(void){

  int square[9][9];

  clearSquares(square);



  squareSetNumber(getSquare(square, 4, 2), 5);

  squareSetNumber(getSquare(square, 4, 2), 8);

  squareSetNumber(getSquare(square, 4, 2), 1);



  UnityAssertEqualNumber((_U_SINT)((145)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);



 squareDelNumber(getSquare(square, 4, 2), 5);



 UnityAssertEqualNumber((_U_SINT)((129)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

}



void test_squareDelNumber_should_enter_column_9_row_9_and_del_bit_6(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 9, 9), 6);

 squareSetNumber(getSquare(square, 9, 9), 2);

 squareSetNumber(getSquare(square, 9, 9), 7);



 UnityAssertEqualNumber((_U_SINT)((98)), (_U_SINT)((square[8][8])), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_INT);



 squareDelNumber(getSquare(square, 9, 9), 6);



 UnityAssertEqualNumber((_U_SINT)((66)), (_U_SINT)((square[8][8])), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

}



void test_squareDelNumber_should_enter_column_5_row_1_and_del_bit_2_4(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 5, 1), 2);

 squareSetNumber(getSquare(square, 5, 1), 4);

 squareSetNumber(getSquare(square, 5, 1), 7);



 UnityAssertEqualNumber((_U_SINT)((74)), (_U_SINT)((square[4][0])), (((void *)0)), (_U_UINT)106, UNITY_DISPLAY_STYLE_INT);



 squareDelNumber(getSquare(square, 5, 1), 2);

 squareDelNumber(getSquare(square, 5, 1), 4);



 UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[4][0])), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_INT);

}



void test_removeOthersExcept_should_enter_column_4_row_2_and_remove_all_except_4(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 4, 2), 2);

 squareSetNumber(getSquare(square, 4, 2), 4);

 squareSetNumber(getSquare(square, 4, 2), 7);



 UnityAssertEqualNumber((_U_SINT)((74)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);



 removeOthersExcept(getSquare(square, 4, 2), 2);



 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)126, UNITY_DISPLAY_STYLE_INT);

}



void test_removeOthersExcept_should_enter_column_7_row_3_and_remove_all_except_4(void){

 int square[9][9];

  clearSquares(square);



 squareSetNumber(getSquare(square, 7, 2), 8);

 squareSetNumber(getSquare(square, 7, 2), 6);

 squareSetNumber(getSquare(square, 7, 2), 3);



 UnityAssertEqualNumber((_U_SINT)((164)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)137, UNITY_DISPLAY_STYLE_INT);



 removeOthersExcept(getSquare(square, 7, 2), 6);



 UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)141, UNITY_DISPLAY_STYLE_INT);

}



void test_isSquareContain_should_return_1_for_number_match_square(void){

  int square[9][9];

  clearSquares(square);



  int value;



  squareSetNumber(getSquare(square, 4, 6), 4);



  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[3][5])), (((void *)0)), (_U_UINT)152, UNITY_DISPLAY_STYLE_INT);



  value = isSquareContain(getSquare(square, 4, 6), 4);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((value)), (((void *)0)), (_U_UINT)155, UNITY_DISPLAY_STYLE_INT);

}



void test_initRowPeers(void){



  initRowPeers(rowPeers);



  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((rowPeers[2][2][0].row)), (((void *)0)), (_U_UINT)162, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][0].column)), (((void *)0)), (_U_UINT)163, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((rowPeers[2][2][1].row)), (((void *)0)), (_U_UINT)164, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][1].column)), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][2].row)), (((void *)0)), (_U_UINT)166, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][2].column)), (((void *)0)), (_U_UINT)167, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((rowPeers[2][2][3].row)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][3].column)), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((rowPeers[2][2][4].row)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][4].column)), (((void *)0)), (_U_UINT)171, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((rowPeers[2][2][5].row)), (((void *)0)), (_U_UINT)172, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][5].column)), (((void *)0)), (_U_UINT)173, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((rowPeers[2][2][6].row)), (((void *)0)), (_U_UINT)174, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][6].column)), (((void *)0)), (_U_UINT)175, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((rowPeers[2][2][7].row)), (((void *)0)), (_U_UINT)176, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][7].column)), (((void *)0)), (_U_UINT)177, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((rowPeers[2][2][8].row)), (((void *)0)), (_U_UINT)178, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rowPeers[2][2][8].column)), (((void *)0)), (_U_UINT)179, UNITY_DISPLAY_STYLE_INT);

}



void test_initColPeers(void){



  initColPeers(columnPeers);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][0].row)), (((void *)0)), (_U_UINT)186, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((columnPeers[2][2][0].column)), (((void *)0)), (_U_UINT)187, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][1].row)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((columnPeers[2][2][1].column)), (((void *)0)), (_U_UINT)189, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][2].row)), (((void *)0)), (_U_UINT)190, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][2].column)), (((void *)0)), (_U_UINT)191, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][3].row)), (((void *)0)), (_U_UINT)192, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((columnPeers[2][2][3].column)), (((void *)0)), (_U_UINT)193, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][4].row)), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((columnPeers[2][2][4].column)), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][5].row)), (((void *)0)), (_U_UINT)196, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((columnPeers[2][2][5].column)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][6].row)), (((void *)0)), (_U_UINT)198, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((columnPeers[2][2][6].column)), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][7].row)), (((void *)0)), (_U_UINT)200, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((columnPeers[2][2][7].column)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((columnPeers[2][2][8].row)), (((void *)0)), (_U_UINT)202, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((columnPeers[2][2][8].column)), (((void *)0)), (_U_UINT)203, UNITY_DISPLAY_STYLE_INT);

}



void test_getBeginningIndex(void){



  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((getBeginningIndex(1))), (((void *)0)), (_U_UINT)208, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((getBeginningIndex(0))), (((void *)0)), (_U_UINT)209, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((getBeginningIndex(2))), (((void *)0)), (_U_UINT)210, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((getBeginningIndex(5))), (((void *)0)), (_U_UINT)211, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((getBeginningIndex(4))), (((void *)0)), (_U_UINT)212, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((getBeginningIndex(3))), (((void *)0)), (_U_UINT)213, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((getBeginningIndex(8))), (((void *)0)), (_U_UINT)214, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((getBeginningIndex(7))), (((void *)0)), (_U_UINT)215, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((getBeginningIndex(6))), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_INT);



}



void test_initBoxPeers(void){



 initBoxPeers(boxPeers);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][0].row)), (((void *)0)), (_U_UINT)224, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][0].column)), (((void *)0)), (_U_UINT)225, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][1].row)), (((void *)0)), (_U_UINT)226, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][1].column)), (((void *)0)), (_U_UINT)227, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][2].row)), (((void *)0)), (_U_UINT)228, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][2].column)), (((void *)0)), (_U_UINT)229, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][3].row)), (((void *)0)), (_U_UINT)230, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][3].column)), (((void *)0)), (_U_UINT)231, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][4].row)), (((void *)0)), (_U_UINT)232, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][4].column)), (((void *)0)), (_U_UINT)233, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][5].row)), (((void *)0)), (_U_UINT)234, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][5].column)), (((void *)0)), (_U_UINT)235, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][6].row)), (((void *)0)), (_U_UINT)236, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[2][2][6].column)), (((void *)0)), (_U_UINT)237, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][7].row)), (((void *)0)), (_U_UINT)238, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[2][2][7].column)), (((void *)0)), (_U_UINT)239, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][8].row)), (((void *)0)), (_U_UINT)240, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[2][2][8].column)), (((void *)0)), (_U_UINT)241, UNITY_DISPLAY_STYLE_INT);

}



void test_initBoxPeers_1(void){



 initBoxPeers(boxPeers);



 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((boxPeers[4][2][0].row)), (((void *)0)), (_U_UINT)248, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[4][2][0].column)), (((void *)0)), (_U_UINT)249, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((boxPeers[4][2][1].row)), (((void *)0)), (_U_UINT)250, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[4][2][1].column)), (((void *)0)), (_U_UINT)251, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((boxPeers[4][2][2].row)), (((void *)0)), (_U_UINT)252, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[4][2][2].column)), (((void *)0)), (_U_UINT)253, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((boxPeers[4][2][3].row)), (((void *)0)), (_U_UINT)254, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[4][2][3].column)), (((void *)0)), (_U_UINT)255, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((boxPeers[4][2][4].row)), (((void *)0)), (_U_UINT)256, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[4][2][4].column)), (((void *)0)), (_U_UINT)257, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((boxPeers[4][2][5].row)), (((void *)0)), (_U_UINT)258, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[4][2][5].column)), (((void *)0)), (_U_UINT)259, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((boxPeers[4][2][6].row)), (((void *)0)), (_U_UINT)260, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((boxPeers[4][2][6].column)), (((void *)0)), (_U_UINT)261, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((boxPeers[4][2][7].row)), (((void *)0)), (_U_UINT)262, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((boxPeers[4][2][7].column)), (((void *)0)), (_U_UINT)263, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((boxPeers[4][2][8].row)), (((void *)0)), (_U_UINT)264, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((boxPeers[4][2][8].column)), (((void *)0)), (_U_UINT)265, UNITY_DISPLAY_STYLE_INT);

}



void test_squareHas_has_same_number_return_1(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                     };



  int replyValue = squareHas(square,2,2,8);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((replyValue)), (((void *)0)), (_U_UINT)281, UNITY_DISPLAY_STYLE_INT);

}



void test_squareHas_does_not_have_same_number_return_0(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                     };



  int replyValue = squareHas(square,2,2,3);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((replyValue)), (((void *)0)), (_U_UINT)297, UNITY_DISPLAY_STYLE_INT);

}



void test_squareContainOneNumbers_has_more_than_1_number_return_0(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                     };



  int replyValue = squareContainOneNumbers(square,2,2);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((replyValue)), (((void *)0)), (_U_UINT)313, UNITY_DISPLAY_STYLE_INT);

}



void test_squareContainOneNumbers_has_one_value_return_1(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff),((0>0)? 1<<(0 -1) : 0x1ff)},

                     };



    int Value = squareContainOneNumbers(square,2,2);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((Value)), (((void *)0)), (_U_UINT)329, UNITY_DISPLAY_STYLE_INT);

}



void test_checkBinaryValue_return_number(void){

  int returnValue;

  returnValue = checkBinaryValue(1);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)335, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(2);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)338, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(4);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)341, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(8);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)344, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(16);

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)347, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(32);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)350, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(64);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)353, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(128);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)356, UNITY_DISPLAY_STYLE_INT);



  returnValue = checkBinaryValue(256);

  UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)359, UNITY_DISPLAY_STYLE_INT);



}



void test_eliminateNumberFromAllPeers_with_2_recursive(void){





  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };



  ErrorCode e;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

    eliminateNumberFromAllPeers(square, 2, 2, 6);

  }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERR_EMPTY_SQU)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)384, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)386, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)387, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)388, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)389, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)390, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((18)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)391, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)392, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)393, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)394, UNITY_DISPLAY_STYLE_INT);





  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)397, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)398, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)399, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[1][3])), (((void *)0)), (_U_UINT)400, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[1][4])), (((void *)0)), (_U_UINT)401, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((21)), (_U_SINT)((square[1][5])), (((void *)0)), (_U_UINT)402, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[1][6])), (((void *)0)), (_U_UINT)403, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[1][7])), (((void *)0)), (_U_UINT)404, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[1][8])), (((void *)0)), (_U_UINT)405, UNITY_DISPLAY_STYLE_INT);





  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)408, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)409, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[0][2])), (((void *)0)), (_U_UINT)410, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)411, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)412, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)413, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[2][0])), (((void *)0)), (_U_UINT)414, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)415, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)416, UNITY_DISPLAY_STYLE_INT);

  }



}



void test_eliminateNumberFromAllPeers_with_3_recursive(void){





  int square[9][9] = {{((2>0)? 1<<(2 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                     };



  int value;

  eliminateNumberFromAllPeers(square, 6, 3, 2);



  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[0][2])), (((void *)0)), (_U_UINT)440, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((50)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)441, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((144)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)442, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((40)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)443, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((130)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)444, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)445, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((67)), (_U_SINT)((square[6][2])), (((void *)0)), (_U_UINT)446, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((square[7][2])), (((void *)0)), (_U_UINT)447, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[8][2])), (((void *)0)), (_U_UINT)448, UNITY_DISPLAY_STYLE_INT);





  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][0])), (((void *)0)), (_U_UINT)451, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)452, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)453, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][3])), (((void *)0)), (_U_UINT)454, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][4])), (((void *)0)), (_U_UINT)455, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][5])), (((void *)0)), (_U_UINT)456, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][6])), (((void *)0)), (_U_UINT)457, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][7])), (((void *)0)), (_U_UINT)458, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][8])), (((void *)0)), (_U_UINT)459, UNITY_DISPLAY_STYLE_INT);





  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)462, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)463, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((40)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)464, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[4][0])), (((void *)0)), (_U_UINT)465, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)466, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((130)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)467, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][0])), (((void *)0)), (_U_UINT)468, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)469, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)470, UNITY_DISPLAY_STYLE_INT);



}



void test_eliminateNumberFromAllPeers_for_checking_row_0_column_1(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)},

                     };

  ErrorCode e;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

    eliminateNumberFromAllPeers(square,1,2,7);

  }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

    UnityAssertEqualNumber((_U_SINT)((ERR_EMPTY_SQU)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)490, UNITY_DISPLAY_STYLE_INT);



}



void test_duplicateSquares(void){



  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };



  int dupSquares[9][9];

  duplicateSquares(square, dupSquares);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((dupSquares[0][0])), (((void *)0)), (_U_UINT)512, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((14)), (_U_SINT)((dupSquares[0][1])), (((void *)0)), (_U_UINT)513, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((dupSquares[0][2])), (((void *)0)), (_U_UINT)514, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[0][3])), (((void *)0)), (_U_UINT)515, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[0][4])), (((void *)0)), (_U_UINT)516, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((dupSquares[0][5])), (((void *)0)), (_U_UINT)517, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((dupSquares[0][6])), (((void *)0)), (_U_UINT)518, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((dupSquares[0][7])), (((void *)0)), (_U_UINT)519, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[0][8])), (((void *)0)), (_U_UINT)520, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((dupSquares[0][0])), (((void *)0)), (_U_UINT)522, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((dupSquares[1][0])), (((void *)0)), (_U_UINT)523, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[2][0])), (((void *)0)), (_U_UINT)524, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[3][0])), (((void *)0)), (_U_UINT)525, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((dupSquares[4][0])), (((void *)0)), (_U_UINT)526, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((dupSquares[5][0])), (((void *)0)), (_U_UINT)527, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[6][0])), (((void *)0)), (_U_UINT)528, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((dupSquares[7][0])), (((void *)0)), (_U_UINT)529, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[8][0])), (((void *)0)), (_U_UINT)530, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((dupSquares[0][4])), (((void *)0)), (_U_UINT)532, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((136)), (_U_SINT)((dupSquares[1][4])), (((void *)0)), (_U_UINT)533, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((dupSquares[2][4])), (((void *)0)), (_U_UINT)534, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((dupSquares[3][4])), (((void *)0)), (_U_UINT)535, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((dupSquares[4][4])), (((void *)0)), (_U_UINT)536, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((dupSquares[5][4])), (((void *)0)), (_U_UINT)537, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((18)), (_U_SINT)((dupSquares[6][4])), (((void *)0)), (_U_UINT)538, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((66)), (_U_SINT)((dupSquares[7][4])), (((void *)0)), (_U_UINT)539, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((dupSquares[8][4])), (((void *)0)), (_U_UINT)540, UNITY_DISPLAY_STYLE_INT);

}



void test_isSudokuSolve_return_1_all_square_contain_one_number(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)},

                     };



  int value = isSudokuSolved(square);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((value)), (((void *)0)), (_U_UINT)556, UNITY_DISPLAY_STYLE_INT);

}



void test_isSudokuSolve_return_0_one_square_contain_two_number(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)},

                     };



  int value = isSudokuSolved(square);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((value)), (((void *)0)), (_U_UINT)572, UNITY_DISPLAY_STYLE_INT);

}



void test_selectSquareWithLeastValues_should_return_row_0(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff),((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff),((5>0)? 1<<(5 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)},

                     };



  Square value = selectSquareWithLeastValues(square);



  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((value.row)), (((void *)0)), (_U_UINT)589, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((value.column)), (((void *)0)), (_U_UINT)590, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedPair_eliminate_row(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };

  Square *row = rowPeers[0][1];

  eliminateNakedPairInPeers(square,row);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)609, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)610, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)611, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((144)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)612, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)613, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)614, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((48)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)615, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)616, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)617, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedPair_eliminate_column(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };

  Square *column = columnPeers[0][1];

  eliminateNakedPairInPeers(square,column);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)636, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)637, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[0][2])), (((void *)0)), (_U_UINT)638, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[0][3])), (((void *)0)), (_U_UINT)639, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[0][4])), (((void *)0)), (_U_UINT)640, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((161)), (_U_SINT)((square[0][5])), (((void *)0)), (_U_UINT)641, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[0][6])), (((void *)0)), (_U_UINT)642, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[0][7])), (((void *)0)), (_U_UINT)643, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[0][8])), (((void *)0)), (_U_UINT)644, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedPair_eliminate_box(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };

  Square *box = boxPeers[3][1];

  eliminateNakedPairInPeers(square,box);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)663, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)664, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((258)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)665, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[4][0])), (((void *)0)), (_U_UINT)666, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((132)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)667, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)668, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((258)), (_U_SINT)((square[5][0])), (((void *)0)), (_U_UINT)669, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)670, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)671, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedPair_eliminate_row_column_and_box(void){

    int square[9][9]={{((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };





  eliminateNakedPair(square);



  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[0][2])), (((void *)0)), (_U_UINT)691, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)692, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)693, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)694, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)695, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)696, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((48)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)697, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((258)), (_U_SINT)((square[3][3])), (((void *)0)), (_U_UINT)698, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedTriples_eliminate_row(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };



    Square *row = rowPeers[0][1];

    eliminateNakedTriplesInPeers(square,row);



    UnityAssertEqualNumber((_U_SINT)((14)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)718, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((14)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)719, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((129)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)720, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((144)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)721, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)722, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)723, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((48)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)724, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)725, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)726, UNITY_DISPLAY_STYLE_INT);



}



void test_nakedTriples_eliminate_column(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff) , ((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff) , ((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };



    Square *col = columnPeers[3][0];

    eliminateNakedTriplesInPeers(square,col);



    UnityAssertEqualNumber((_U_SINT)((448)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)747, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((448)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)748, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((192)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)749, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((20)), (_U_SINT)((square[3][3])), (((void *)0)), (_U_UINT)750, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[3][4])), (((void *)0)), (_U_UINT)751, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((48)), (_U_SINT)((square[3][5])), (((void *)0)), (_U_UINT)752, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((320)), (_U_SINT)((square[3][6])), (((void *)0)), (_U_UINT)753, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][7])), (((void *)0)), (_U_UINT)754, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((52)), (_U_SINT)((square[3][8])), (((void *)0)), (_U_UINT)755, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedTriples_eliminate(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff) , ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };





    eliminateNakedTriples(square);



    UnityAssertEqualNumber((_U_SINT)((386)), (_U_SINT)((square[2][0])), (((void *)0)), (_U_UINT)775, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((386)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)776, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((386)), (_U_SINT)((square[6][0])), (((void *)0)), (_U_UINT)777, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((34)), (_U_SINT)((square[8][0])), (((void *)0)), (_U_UINT)778, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((132)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)779, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)780, UNITY_DISPLAY_STYLE_INT);



}



void test_nakedQuad_eliminate_row(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };

  Square *row = rowPeers[0][1];

  eliminateNakedQuadInPeers(square,row);



  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)800, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((46)), (_U_SINT)((square[1][1])), (((void *)0)), (_U_UINT)801, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((46)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)802, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((144)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)803, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)804, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)805, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)806, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)807, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)808, UNITY_DISPLAY_STYLE_INT);

}



void test_nakedQuad_eliminate(void){

    int square[9][9]={{((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff),((1>0)? 1<<(1 -1) : 0x1ff)},

                     };





    eliminateNakedQuad(square);



    UnityAssertEqualNumber((_U_SINT)((30)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)828, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((30)), (_U_SINT)((square[4][0])), (((void *)0)), (_U_UINT)829, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((384)), (_U_SINT)((square[5][0])), (((void *)0)), (_U_UINT)830, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((30)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)831, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)832, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)833, UNITY_DISPLAY_STYLE_INT);



}



void test_eliminateNakedPair_with_successful_eliminate(void){



  int square[9][9] = {{((4>0)? 1<<(4 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff) ,((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) ,((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff) ,((8>0)? 1<<(8 -1) : 0x1ff)},



                      {((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff) ,((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff) ,((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff),((7>0)? 1<<(7 -1) : 0x1ff)},



                      {((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff) ,((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff) ,((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)},

                    };





  eliminateNakedPair(square);



  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)855, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)856, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)857, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)858, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)859, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)860, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)862, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)863, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)864, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[8][2])), (((void *)0)), (_U_UINT)865, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[1][3])), (((void *)0)), (_U_UINT)866, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[4][3])), (((void *)0)), (_U_UINT)867, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[7][3])), (((void *)0)), (_U_UINT)869, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[8][3])), (((void *)0)), (_U_UINT)870, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[0][4])), (((void *)0)), (_U_UINT)871, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[5][4])), (((void *)0)), (_U_UINT)872, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[1][5])), (((void *)0)), (_U_UINT)873, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[4][5])), (((void *)0)), (_U_UINT)874, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[2][6])), (((void *)0)), (_U_UINT)876, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[3][6])), (((void *)0)), (_U_UINT)877, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[5][7])), (((void *)0)), (_U_UINT)878, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[8][7])), (((void *)0)), (_U_UINT)879, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[0][8])), (((void *)0)), (_U_UINT)880, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[1][8])), (((void *)0)), (_U_UINT)881, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[7][8])), (((void *)0)), (_U_UINT)883, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[8][8])), (((void *)0)), (_U_UINT)884, UNITY_DISPLAY_STYLE_INT);

}



void test_bruteForce_with_successful_eliminate(void){



  int square[9][9] = {{((4>0)? 1<<(4 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff) ,((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff) ,((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff) ,((8>0)? 1<<(8 -1) : 0x1ff)},



                      {((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff) ,((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff) ,((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff),((7>0)? 1<<(7 -1) : 0x1ff)},



                      {((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff) ,((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff) ,((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff),((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)},

                     };





  eliminateBruteForce(square);



  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)905, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)906, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)907, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)908, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[4][1])), (((void *)0)), (_U_UINT)909, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)910, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)912, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)913, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][2])), (((void *)0)), (_U_UINT)914, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[8][2])), (((void *)0)), (_U_UINT)915, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[1][3])), (((void *)0)), (_U_UINT)916, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[4][3])), (((void *)0)), (_U_UINT)917, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[7][3])), (((void *)0)), (_U_UINT)919, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[8][3])), (((void *)0)), (_U_UINT)920, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[0][4])), (((void *)0)), (_U_UINT)921, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[5][4])), (((void *)0)), (_U_UINT)922, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[1][5])), (((void *)0)), (_U_UINT)923, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[4][5])), (((void *)0)), (_U_UINT)924, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[2][6])), (((void *)0)), (_U_UINT)926, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[3][6])), (((void *)0)), (_U_UINT)927, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[5][7])), (((void *)0)), (_U_UINT)928, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[8][7])), (((void *)0)), (_U_UINT)929, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[0][8])), (((void *)0)), (_U_UINT)930, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[1][8])), (((void *)0)), (_U_UINT)931, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[7][8])), (((void *)0)), (_U_UINT)933, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[8][8])), (((void *)0)), (_U_UINT)934, UNITY_DISPLAY_STYLE_INT);

}



void test_bruteForce_with_successful_eliminate_1(void){



  int square[9][9] = {{((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)},



                      {((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)},



                      {((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)|((5>0)? 1<<(5 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                     };





  eliminateBruteForce(square);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)955, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[1][0])), (((void *)0)), (_U_UINT)956, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[3][0])), (((void *)0)), (_U_UINT)957, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[5][0])), (((void *)0)), (_U_UINT)958, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[6][0])), (((void *)0)), (_U_UINT)959, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)961, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)962, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)963, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[7][1])), (((void *)0)), (_U_UINT)964, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)966, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)967, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)968, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)969, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[6][2])), (((void *)0)), (_U_UINT)970, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[1][3])), (((void *)0)), (_U_UINT)972, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[4][3])), (((void *)0)), (_U_UINT)973, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[2][4])), (((void *)0)), (_U_UINT)975, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[4][4])), (((void *)0)), (_U_UINT)976, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[5][4])), (((void *)0)), (_U_UINT)977, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[1][6])), (((void *)0)), (_U_UINT)979, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[2][6])), (((void *)0)), (_U_UINT)980, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[3][6])), (((void *)0)), (_U_UINT)981, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[4][6])), (((void *)0)), (_U_UINT)982, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[6][6])), (((void *)0)), (_U_UINT)983, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((square[0][7])), (((void *)0)), (_U_UINT)985, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[2][7])), (((void *)0)), (_U_UINT)986, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[7][7])), (((void *)0)), (_U_UINT)987, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[2][8])), (((void *)0)), (_U_UINT)989, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][8])), (((void *)0)), (_U_UINT)990, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][8])), (((void *)0)), (_U_UINT)991, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[7][8])), (((void *)0)), (_U_UINT)992, UNITY_DISPLAY_STYLE_INT);



}



void test_bruteForce_with_successful_eliminate_2(void){



  int square[9][9] = {{((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},



                      {((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},



                      {((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((4>0)? 1<<(4 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((6>0)? 1<<(6 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((3>0)? 1<<(3 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)|((2>0)? 1<<(2 -1) : 0x1ff)|((7>0)? 1<<(7 -1) : 0x1ff)|((8>0)? 1<<(8 -1) : 0x1ff)|((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                     };





  eliminateBruteForce(square);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)1014, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)1015, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[2][1])), (((void *)0)), (_U_UINT)1016, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[3][1])), (((void *)0)), (_U_UINT)1017, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[5][1])), (((void *)0)), (_U_UINT)1018, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[6][1])), (((void *)0)), (_U_UINT)1019, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[8][1])), (((void *)0)), (_U_UINT)1020, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[0][2])), (((void *)0)), (_U_UINT)1022, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[1][2])), (((void *)0)), (_U_UINT)1023, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[2][2])), (((void *)0)), (_U_UINT)1024, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[4][2])), (((void *)0)), (_U_UINT)1025, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[5][2])), (((void *)0)), (_U_UINT)1026, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[7][2])), (((void *)0)), (_U_UINT)1027, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[8][2])), (((void *)0)), (_U_UINT)1028, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[0][3])), (((void *)0)), (_U_UINT)1030, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[1][3])), (((void *)0)), (_U_UINT)1031, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[2][3])), (((void *)0)), (_U_UINT)1032, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[4][3])), (((void *)0)), (_U_UINT)1033, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[6][3])), (((void *)0)), (_U_UINT)1034, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[7][3])), (((void *)0)), (_U_UINT)1035, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[8][3])), (((void *)0)), (_U_UINT)1036, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[2][4])), (((void *)0)), (_U_UINT)1038, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[3][4])), (((void *)0)), (_U_UINT)1039, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[5][4])), (((void *)0)), (_U_UINT)1040, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[6][4])), (((void *)0)), (_U_UINT)1041, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[1][5])), (((void *)0)), (_U_UINT)1043, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[2][5])), (((void *)0)), (_U_UINT)1044, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[4][5])), (((void *)0)), (_U_UINT)1045, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[6][5])), (((void *)0)), (_U_UINT)1046, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[7][5])), (((void *)0)), (_U_UINT)1047, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[8][5])), (((void *)0)), (_U_UINT)1048, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[0][6])), (((void *)0)), (_U_UINT)1050, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[1][6])), (((void *)0)), (_U_UINT)1051, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[2][6])), (((void *)0)), (_U_UINT)1052, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((square[3][6])), (((void *)0)), (_U_UINT)1053, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[4][6])), (((void *)0)), (_U_UINT)1054, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[6][6])), (((void *)0)), (_U_UINT)1055, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[7][6])), (((void *)0)), (_U_UINT)1056, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[8][6])), (((void *)0)), (_U_UINT)1057, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[0][7])), (((void *)0)), (_U_UINT)1059, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[2][7])), (((void *)0)), (_U_UINT)1060, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[3][7])), (((void *)0)), (_U_UINT)1061, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[5][7])), (((void *)0)), (_U_UINT)1062, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[6][7])), (((void *)0)), (_U_UINT)1063, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((64)), (_U_SINT)((square[8][7])), (((void *)0)), (_U_UINT)1064, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((32)), (_U_SINT)((square[1][8])), (((void *)0)), (_U_UINT)1066, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((square[2][8])), (((void *)0)), (_U_UINT)1067, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((square[3][8])), (((void *)0)), (_U_UINT)1068, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((128)), (_U_SINT)((square[5][8])), (((void *)0)), (_U_UINT)1069, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((256)), (_U_SINT)((square[6][8])), (((void *)0)), (_U_UINT)1070, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((square[7][8])), (((void *)0)), (_U_UINT)1071, UNITY_DISPLAY_STYLE_INT);



}



void test_dumpSquare(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)},

                     };

  dumpSquare(square);

}



void xtest_searchPosibilityValueOfEmptySquare_in_peers(void){

  int square[9][9] = {{((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((5>0)? 1<<(5 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff)},

                      {((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((1>0)? 1<<(1 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((6>0)? 1<<(6 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                      {((4>0)? 1<<(4 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)},

                     };

  Square *row = rowPeers[0][1];

  searchPosibilityValueOfEmptySquareInPeers(square,row);

  UnityAssertEqualNumber((_U_SINT)((192)), (_U_SINT)((square[0][1])), (((void *)0)), (_U_UINT)1102, UNITY_DISPLAY_STYLE_INT);

}



void xtest_searchPosibilityValueOfEmptySquare(void){

  int square[9][9] = {{((0>0)? 1<<(0 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff)},

                      {((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff)},

                      {((8>0)? 1<<(8 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((0>0)? 1<<(0 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((7>0)? 1<<(7 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff)},

                      {((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff)},

                      {((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((9>0)? 1<<(9 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff), ((0>0)? 1<<(0 -1) : 0x1ff)},

                      {((9>0)? 1<<(9 -1) : 0x1ff), ((6>0)? 1<<(6 -1) : 0x1ff), ((2>0)? 1<<(2 -1) : 0x1ff), ((7>0)? 1<<(7 -1) : 0x1ff), ((4>0)? 1<<(4 -1) : 0x1ff), ((8>0)? 1<<(8 -1) : 0x1ff), ((3>0)? 1<<(3 -1) : 0x1ff), ((1>0)? 1<<(1 -1) : 0x1ff), ((5>0)? 1<<(5 -1) : 0x1ff)},

                     };



  searchPosibilityValueOfEmptySquare(square);

  UnityAssertEqualNumber((_U_SINT)((192)), (_U_SINT)((square[0][0])), (((void *)0)), (_U_UINT)1118, UNITY_DISPLAY_STYLE_INT);

}
