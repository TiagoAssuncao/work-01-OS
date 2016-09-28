#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){
  void* handle = dlopen ("lib/libprimo.so", RTLD_LAZY);
  unsigned int(*test)() = dlsym (handle, "gera_primo");
  unsigned int i = (unsigned int)(*test)();
  dlclose (handle);

  printf("%u\n", i);
  return 0;
}
