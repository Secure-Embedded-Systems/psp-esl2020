#include <stdio.h>

void gcdtop(int* a, int* b, int start, int* q, int* done, int clk, int rst);

void transpose(unsigned a[32], unsigned b[32]) {
  unsigned bit, word;
  for (word = 0; word < 32; word++)
    b[word] = 0;
  for (bit = 0; bit < 32; bit++) 
    for (word = 0; word < 32; word++) 
      b[bit] = b[bit] | (( (a[word] & (1 << bit)) >> bit) << word);
}

unsigned gcd(unsigned a, unsigned b) {
  if ((a == 0) || (b == 0))
    return 0;
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b= b - a;    
  }
  return a;
}

void main() {
  unsigned cnt;
  
  unsigned data_a[32] =
    { 8, // 1
      2,
      3,
      4,
      5,
      5,
      5,
      5, // 8
      5,
      5,
      6,
      7,
      8,
      9,
     10,
     12, // 16
     13,
     14,
     15,
      2,
      3,
      4,
      5,
      6, // 24
      7,
      8,
      9,
     10,
     12,
     14,
     15,
     10}; // 32

    unsigned data_b[32] =
    {(13), // 1
     ( 1),
     ( 1),
     ( 1),
     ( 1),
     ( 8),
     ( 9),
     (10), // 8
     (11),
     (12),
     (12),
     (12),
     (13),
     (14),
     (15),
     (15), // 16
     (15),
     (15),
     (15),
     (15),
     (15),
     (15),
     (15),
     (15), // 24
     (15),
     (15),
     (15),
     (11),
     (13),
     (15),
     (14),
     ( 5)}; // 32

  unsigned tdata_a[32];
  unsigned tdata_b[32];

  transpose(data_a, tdata_a);
  transpose(data_b, tdata_b);
  
  for (cnt = 0; cnt < 32; cnt ++)
    printf("gcd(%3d,%3d) = %3d\n", data_a[cnt], data_b[cnt], gcd(data_a[cnt], data_b[cnt]));
  
  unsigned start, rst, done;
  unsigned q[32] = {0,0,0,0,0,0,0,0,
		    0,0,0,0,0,0,0,0,
		    0,0,0,0,0,0,0,0,
		    0,0,0,0,0,0,0,0};
  unsigned tq[32];
  
  done = 0;
  cnt = 0;
  while ((cnt < 5) || (done != -1)) {
    rst   = (cnt==0) ? 0xffffffff : 0;
    start = (cnt==1) ? 0xffffffff : 0;
    
    gcdtop(tdata_a, tdata_b, start, q, &done, 0, rst);
	   
    cnt++;
  }

  transpose(q, tq);
  
  for (cnt=0; cnt<32; cnt++)
    printf("%5d %8x %8d\n", cnt, q[cnt], tq[cnt]);

}
