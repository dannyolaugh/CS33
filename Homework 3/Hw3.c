Daniel O’Laughlin
304467494

3.64



A). ebp+8 stores a pointer to the return structure result

    ebp+12 holds s1.a

    e bp+16 holds s1.p

B). These five fields are used to hold the data that word_sum needs to save to its result because the return value is a struct.

C). The general strategy is similar to the way to how normal parameters are passed, these five fields of 4 bytes each are placed on the stack in reverse order in the stack frame of the calling function thus allowing them to be accessed in the correct order when appropriate.

D). The general strategy involves leaving space on the stack for the return struct in the caller’s frame. Almost as if it were the first parameter of a called function, the function has a pointer to the first word of this space.

3.67

A.	The offsets in bytes of the following fields are
el.p: 4
e1.y: 8
e2.x:4
e2.next: 8

B.	The struct needs 8 bytes because 8 bytes are shared in the union.

C.	void proc (union ele *up)
{
    up->e2.next->el.y = *(up->e2.next->e1.p) – up->e2.x;
}
