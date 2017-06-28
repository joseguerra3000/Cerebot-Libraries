/*
 * File         : Stack.c
 * Project      : Stack Library
 * Revision History:
                2017/6/27:
                        - initial release

 * Author       : Jose Guerra Carmenate 
 * Description  :
 *                                 Esta biblioteca contiene estructuras y rutinas para 
 *                                 utilizar Stacks o Pilas ( estructuras de datos de tipo LIFO )
 *                                en mikroC for PIC32 
 */
#include "Stack.h"

/**Inicialize  stk */
void Stack_Init8( Stack_Int8 *stk, short *storage, int capacity ){
     stk->storage = storage;
     stk->capacity = capacity;
     stk->sz = 0;
}
void Stack_Init16( Stack_Int16 *stk, int *storage, int capacity ){
     stk->storage = storage;
     stk->capacity = capacity;
     stk->sz = 0;

}
void Stack_Init32( Stack_Int32 *stk, long *storage, int capacity ){
     stk->storage = storage;
     stk->capacity = capacity;
     stk->sz = 0;
}
void Stack_Init64( Stack_Int64 *stk, long long *storage, int capacity ){
     stk->storage = storage;
     stk->capacity = capacity;
     stk->sz = 0;
}

 /**Stack Empty**/
short Stack_Empty8( Stack_Int8  *stk ){ return (stk->sz == 0); }
short Stack_Empty16( Stack_Int16 *stk ){ return (stk->sz == 0); }
short Stack_Empty32( Stack_Int32 *stk ){ return (stk->sz == 0); }
short Stack_Empty64( Stack_Int64 *stk ){ return (stk->sz == 0); }

 /**StackTop**/
short Stack_Top8( Stack_Int8  *stk ){
        if( !Stack_Empty8(stk) )
                return stk->storage[ (stk->sz)-1 ];
        return 0;//ERROR
}
int Stack_Top16( Stack_Int16 *stk ){
        if( !Stack_Empty16(stk) )
                return stk->storage[ (stk->sz)-1 ];
        return 0;//ERROR
}
long Stack_Top32( Stack_Int32 *stk ){
        if( !Stack_Empty32(stk) )
                return stk->storage[ (stk->sz)-1 ];
        return 0;//ERROR
}
long long Stack_Top64( Stack_Int64  *stk ){
        if( !Stack_Empty64(stk) )
                return stk->storage[ (stk->sz)-1 ];
        return 0;//ERROR
}
 /**Stack Pop**/
void Stack_Pop8( Stack_Int8 *stk ){ if( (stk->sz)>0 ) stk->sz--; }
void Stack_Pop16( Stack_Int16 *stk ){ if( (stk->sz)>0 ) stk->sz--; }
void Stack_Pop32( Stack_Int32 *stk ){ if( (stk->sz)>0 ) stk->sz--; }
void Stack_Pop64( Stack_Int64 *stk ){ if( (stk->sz)>0 ) stk->sz--; }

/**Stack Push**/
void Stack_Push8( Stack_Int8 *stk, short x ){ stk->storage[stk->sz++] = x; }
void Stack_Push16( Stack_Int16 *stk, int x ){ stk->storage[stk->sz++] = x; }
void Stack_Push32( Stack_Int32 *stk, long x ){ stk->storage[stk->sz++] = x; }
void Stack_Push64( Stack_Int64 *stk, long long x ){ stk->storage[stk->sz++] = x; }
