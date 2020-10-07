#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include <header_files.h>
#define PROJECT_NAME "bank"


void test_deposit(void);

int main()
 {
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);  
  
  CU_add_test(suite, "deposit_amount", test_deposit);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  
  CU_basic_run_tests();  
  
  CU_cleanup_registry();
  return 0;
}
void test_deposit(void) 
{
  CU_ASSERT(30 == deposit_amount(500, 5000));    
  CU_ASSERT(1500 == deposit_amount(70050, 5000));
}

