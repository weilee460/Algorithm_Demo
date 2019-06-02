//
//  algorithm_demo.c
//  algorithm_demo
//
//  Created by fengzi on 2019/6/2.
//  Copyright © 2019 fengzi. All rights reserved.
//

#include <assert.h>
#include "algorithm_demo.h"

//不使用其他变量来交换两个整数的值，两数求和的方式有溢出的风险
void swap_num_without_another(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
//整数互换，无溢出风险
void swap_num_without_another2(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_num_without_another_test()
{
    int a = 10;
    int b = 20;
    swap_num_without_another(&a, &b);
    assert(a==20 && b==10);
    printf("swap_num_without_another test ret: pass.\n");
    int aa = 100;
    int bb = 200;
    swap_num_without_another2(&aa, &bb);
    assert(aa==200 && bb==100);
    printf("swap_num_without_another2 test ret: pass.\n");
}
