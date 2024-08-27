
#include "unity.h"

#include "swap_obj.h"
#include <stdint.h>

void setUp(void)
{
}

void tearDown(void)
{
}


typedef struct my_struct_t
{
    uint8_t u8;
    uint16_t u16;
    uint8_t u8_2;
    uint32_t u32;
} my_struct_t;


void test_swap_obj(void)
{
    my_struct_t st_org1 = {4,5,6,7};
    my_struct_t st_org2 = {17,18,19,20};
    my_struct_t st1;
    my_struct_t st2;
    st1 = st_org1;
    st2 = st_org2;
    TEST_ASSERT_EQUAL_MEMORY(&st_org1, &st1, sizeof st1);
    TEST_ASSERT_EQUAL_MEMORY(&st_org2, &st2, sizeof st2);

    swap_obj(&st1, &st2, sizeof st1);

    TEST_ASSERT_EQUAL_MEMORY(&st_org1, &st2, sizeof st2);
    TEST_ASSERT_EQUAL_MEMORY(&st_org2, &st1, sizeof st1);

}

