 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <assert.h>
 
 
 int _compare_fn_for_qsort(const void* o1, const void* o2) {
     int const* o1_int = o1;
     int const* o2_int = o2;
     int n1 = *o1_int;
     int n2 = *o2_int;
 
     if(n1 < n2) {
         return -1;
     }
     else if(n1 == n2){
         return 0;
     }
     else{
         return 1;
     }
 }
 
 void quick_sort_array(int* array, size_t size) {
     qsort(array, size, sizeof(array[0]), _compare_fn_for_qsort);
 }
 
 /* vim: set tabstop=4 shiftwidth=4 fileencoding=utf-8 noexpandtab: */