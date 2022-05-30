 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <assert.h>
 #include "sorts.h"
 
 
 int main(int argc, char* argv[]) {
 
     //test 1: 231   
     int input[3] =  {2,3,1};
     int size = 3;
     quick_sort_array(input, size);
     for(int i = 0; i < size; i++) {
         printf("%d ",input[i]);
     }
     printf("\n");
 
     //test 2: 11326
     int input2[5] =  {1,1,3,2,6};
     int size2 = 5;
     quick_sort_array(input2, size2);
     for(int i = 0; i < size2; i++) {
         printf("%d ",input2[i]);
     }
     printf("\n");
 
     //test 2: 4 1 0 -1
     int input3[4] =  {4, 1, 0, -1};
     int size3 = 4;
     quick_sort_array(input3, size3);
     for(int i = 0; i < size3; i++) {
         printf("%d ",input3[i]);
     }
     printf("\n");
     return EXIT_SUCCESS;
 }
 /* vim: set tabstop=4 shiftwidth=4 fileencoding=utf-8 noexpandtab: */