#include <stdio.h>

void pwmtop(int* duty, int *pulse, int clk, int rst);

void transpose(unsigned a[32], unsigned b[32]) {
  unsigned bit, word;
  for (word = 0; word < 32; word++)
    b[word] = 0;
  for (bit = 0; bit < 32; bit++) 
    for (word = 0; word < 32; word++) 
      b[bit] = b[bit] | (( (a[word] & (1 << bit)) >> bit) << word);
}

void main() {
  unsigned cnt;
  
  unsigned duty[32] =
    { 1 , // 1
      9 ,
      17 ,
      25 ,
      33 ,
      41 ,
      49 ,
      57 , // 8
      65 ,
      73 ,
      81 ,
      89 ,
      97 ,
      105 ,
      113 ,
      121 , // 16
      129 ,
      137 ,
      145 ,
      153 ,
      161 ,
      169 ,
      177 ,
      185 , // 24
      193 ,
      201 ,
      209 ,
      217 ,
      225 ,
      233 ,
      241 ,
      249  // 32
    };
  
  unsigned tduty[32];

  transpose(duty, tduty);
  
  unsigned start, rst, done;
  unsigned pulse;
  
  done = 0;
  cnt = 0;
  while ((cnt < 5) || (done != -1)) {
    rst   = (cnt==0) ? 0xffffffff : 0;

    pwmtop(tduty, &pulse, 0, rst);

    printf("%5d %8x\n", cnt, pulse);
    
    cnt++;
  }


}
