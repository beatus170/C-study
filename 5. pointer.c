#include <stdio.h>     
                               
int main(){
                                                                     
  int energe = 100;                                                                                            
  int *ptr = &energe;    
                                                                                             
  printf("수정전값 : %d\n", energe);  

  *ptr = 50;
                                                                        
                                                                                                                    
  printf("수정후 값 : %d\n", energe);        
  printf("수정후 값 : %d\n",* ptr);  
  printf(" 값 주소 : %p\n",(void*) ptr); 
       
        return 0;                                     
}