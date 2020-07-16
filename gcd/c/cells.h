#ifndef _CELLS_H_
#define _CELLS_H_

#define X86_HL
// #define ARM_CORTEX_M4

#ifdef ARM_CORTEX_M4

/* architecture-specific */
#define AND2(a,b,r) { 										\
	asm volatile("and %[r_], %[a_], %[b_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a), [b_] "r" (b) :);					\
}

#define OR2(a,b,r) { 										\
	asm volatile("orr %[r_], %[a_], %[b_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a), [b_] "r" (b) :);					\
}

#define BIC2(a,b,r) { 										\
	asm volatile("bic %[r_], %[a_], %[b_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a), [b_] "r" (b) :);					\
}

#define XOR2(a,b,r) { 										\
	asm volatile("eor %[r_], %[a_], %[b_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a), [b_] "r" (b) :);					\
}

#define ORN2(a,b,r) { 										\
	asm volatile("orn %[r_], %[a_], %[b_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a), [b_] "r" (b) :);					\
}

#define NOT1(a,r) { 										\
	asm volatile("mvn %[r_], %[a_]\n\t"				\
		: [r_]"=r" (r) 										\
		: [a_] "r" (a) :);					\
}

/* general */

#define DFF(clk,d,q) { q = d; }

#endif

#ifdef X86_HL
#define AND2(a,b,r) { r = a & b; }
#define OR2(a,b,r) { r = a | b; }
#define BIC2(a,b,r) { r = a & ~b; }
#define XOR2(a,b,r) { r = a ^ b; }
#define ORN2(a,b,r) { r = a | ~b; }
#define NOT1(a,r) { r = ~a; }
#define DFF(clk,d,q) { q = d; }
#define DFFSR(clk,d, q, rst, set) {q = rst ? 0 : (set ? 1 : d);}

#endif

#endif
