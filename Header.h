#pragma once

typedef void(*fun_ptr)();


#ifdef __cplusplus
extern "C" {
#endif
	extern fun_ptr menu;
	extern void printer();
	extern void dude_test();
	
#ifdef __cplusplus
}
#endif

