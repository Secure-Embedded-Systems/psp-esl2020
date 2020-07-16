#ifndef CELLS_H_
#define CELLS_H_

#define MDTYPE int

/* architecture-specific */
#define AND2(a,b,r) {r=a&b;}  //                              \
    __asm volatile("and %[r_], %[a_], %[b_]\n\t"              \
        : [r_]"=r" (r)                                      \
        : [a_] "r" (a), [b_] "r" (b) :);                    \
}

#define OR2(a,b,r) {  r=a|b;} //                                     \
    asm volatile("orr %[r_], %[a_], %[b_]\n\t"              \
        : [r_]"=r" (r)                                      \
        : [a_] "r" (a), [b_] "r" (b) :);                    \
}

#define BIC2(a,b,r) { r = a & ~(b);} //                                      \
    asm volatile("bic %[r_], %[a_], %[b_]\n\t"              \
        : [r_]"=r" (r)                                      \
        : [a_] "r" (a), [b_] "r" (b) :);                    \
}

#define XOR2(a,b,r) { r = a^ b;}
#define ORN2(a,b,r) { r = a | (~b);}

#define NOT1(a,r) { r = ~a;}

/* general */

#define DFF(clk,d,q) { q = d; }



#endif /* CELLS_H_ */
