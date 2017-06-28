/*
 * File         : Stack.h
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
#ifndef __Lib_Stack
#define __Lib_Stack

typedef struct Stack_Int8{
        short *storage;
        int capacity, sz;
} Stack_Int8;

typedef struct Stack_Int16{
        int *storage;
        int capacity, sz;
} Stack_Int16;

typedef struct Stack_Int32{
        long *storage;
        int capacity, sz;
} Stack_Int32;

typedef struct Stack_Int64{
        long long *storage;
        int capacity, sz;
} Stack_Int64;

/**Inicialize  stk */
void Stack_Init8( Stack_Int8 *stk, short *storage, int capacity );
void Stack_Init16( Stack_Int16 *stk, int *storage, int capacity );
void Stack_Init32( Stack_Int32 *stk, long *storage, int capacity );
void Stack_Init64( Stack_Int64 *stk, long long *storage, int capacity );

/**Return 1 if stk is empty **/
short Stack_Empty8( Stack_Int8 *stk );
short Stack_Empty16( Stack_Int16 *stk );
short Stack_Empty32( Stack_Int32 *stk );
short Stack_Empty64( Stack_Int64 *stk );

/**Return the element on the top of stk**/
short     Stack_Top8( Stack_Int8  *stk );
int       Stack_Top16( Stack_Int16 *stk );
long      Stack_Top32( Stack_Int32 *stk );
long long Stack_Top64( Stack_Int64 *stk );

/**Erase the element on the top of stk**/
void Stack_Pop8( Stack_Int8 *stk );
void Stack_Pop16( Stack_Int16 *stk );
void Stack_Pop32( Stack_Int32 *stk );
void Stack_Pop64( Stack_Int64 *stk );

/**Push the element 'x' on the top**/
void Stack_Push8( Stack_Int8 *stk, short x );
void Stack_Push16( Stack_Int16 *stk, int x );
void Stack_Push32( Stack_Int32 *stk, long x );
void Stack_Push64( Stack_Int64 *stk, long long x );

#endif