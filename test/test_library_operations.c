#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <library_operations.h>
#define PROJECT_NAME    "Library"

/* Prototypes for all the test functions */
void test_Addbook(void);
void test_Searchbook(void);
void test_Displaybook(void);
void test_Author(void);
void test_Titlelist(void);
void test_Stock(void);
void test_Issue(void);
void test_bookret(void);
void test_Addmembr(void);
void test_Exit(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "Addbook", test_Addbook);
  CU_add_test(suite, "Searchbookt", test_Searchbook);
  CU_add_test(suite, "Displaybook", test_Displaybook);
  CU_add_test(suite, "Author", test_Author);
  CU_add_test(suite, "Titlelist", test_Titlelist);
  CU_add_test(suite, "Stock", test_Stock);
  CU_add_test(suite, "Issue", test_Issue);
  CU_add_test(suite, "bookret", test_bookret);
  CU_add_test(suite, "Addmembr", test_Addmembr);
  CU_add_test(suite, "Exit", test_Exit);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_Addbook(void) {
  CU_ASSERT(30 == Addbook(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == Addbook(750, 7500));
}

void test_Searchbook(void) {
  CU_ASSERT(-3 == Searchbook(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == Searchbook(1000, 900));
}

void test_Displaybook(void) {
  CU_ASSERT(0 == Displaybook(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == Displaybook(2, 5));
}

void test_Author(void) {
  CU_ASSERT(0 == Author(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Author(2, 2));
}


void test_Titlelist(void) {
  CU_ASSERT(0 == Titlelist(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == Titlelist(2, 5));
}


void test_Stock(void) {
  CU_ASSERT(0 == Stock(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == Stock(2, 5));
}

void test_Issue(void) {
  CU_ASSERT(0 == Issue(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Issue(2, 2));
}

void test_bookret(void) {
  CU_ASSERT(0 == bookret(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == bookret(2, 2));
}

void test_Addmembr(void) {
  CU_ASSERT(0 == Addmembr(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == Addmembr(2, 5));
}

void test_Exit(void) {
  CU_ASSERT(0 == Exit(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Exit(2, 2));
}
