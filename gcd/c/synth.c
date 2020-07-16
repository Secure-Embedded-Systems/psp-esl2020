#include "cells.h"

void gcdtop(int* a, int* b, int start, int* q, int* done, int clk, int rst)
{

  int n000_;
  int n001_;
  int n002_;
  int n003_;
  int n004_;
  int n005_;
  int n006_;
  int n007_;
  int n008_;
  int n009_;
  int n010_;
  int n011_;
  int n012_;
  int n013_;
  int n014_;
  int n015_;
  int n016_;
  int n017_;
  int n018_;
  int n019_;
  int n020_;
  int n021_;
  int n022_;
  int n023_;
  int n024_;
  int n025_;
  int n026_;
  int n027_;
  int n028_;
  int n029_;
  int n030_;
  int n031_;
  int n032_;
  int n033_;
  int n034_;
  int n035_;
  int n036_;
  int n037_;
  int n038_;
  int n039_;
  int n040_;
  int n041_;
  int n042_;
  int n043_;
  int n044_;
  int n045_;
  int n046_;
  int n047_;
  int n048_;
  int n049_;
  int n050_;
  int n051_;
  int n052_;
  int n053_;
  int n054_;
  int n055_;
  int n056_;
  int n057_;
  int n058_;
  int n059_;
  int n060_;
  int n061_;
  int n062_;
  int n063_;
  int n064_;
  int n065_;
  int n066_;
  int n067_;
  int n068_;
  int n069_;
  int n070_;
  int n071_;
  int n072_;
  int n073_;
  int n074_;
  int n075_;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:10" */
  int MCTL_clk ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:5" */
  int MCTL_done ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:14" */
  int MCTL_next_state ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:11" */
  int MCTL_rst ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:1" */
  int MCTL_start ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:13" */
  static int MCTL_state ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:1" */
  int MDP_a  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:2" */
  int MDP_b  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:11" */
  int MDP_clk ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:7" */
  int MDP_q  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:14" */
  static int MDP_ra  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:17" */
  int MDP_ra_next  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:15" */
  static int MDP_rb  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:18" */
  int MDP_rb_next  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:12" */
  int MDP_rst ;
  /* src = "verilog/gcdtop.v:1" */
  /* src = "verilog/gcdtop.v:2" */
  /* src = "verilog/gcdtop.v:7" */
  /* src = "verilog/gcdtop.v:5" */
  /* src = "verilog/gcdtop.v:4" */
  /* src = "verilog/gcdtop.v:8" */
  /* src = "verilog/gcdtop.v:3" */

  NOT1(start, n017_);  
  BIC2(MDP_rb [3], MDP_ra [3], n018_);
  ORN2(MDP_rb [3], MDP_ra [3], n019_);
  XOR2(MDP_ra [3], MDP_rb [3], n020_);
  ORN2(MDP_rb [2], MDP_ra [2], n021_);
  ORN2(MDP_ra [2], MDP_rb [2], n022_);
  XOR2(MDP_ra [2], MDP_rb [2], n023_);
  OR2(n020_, n023_, n024_);
  BIC2(MDP_rb [0], MDP_ra [0], n025_);
  BIC2(MDP_ra [0], MDP_rb [0], n026_);
  XOR2(MDP_ra [0], MDP_rb [0], n027_);
  ORN2(MDP_ra [1], MDP_rb [1], n028_);
  ORN2(MDP_rb [1], MDP_ra [1], n029_);
  XOR2(MDP_ra [1], MDP_rb [1], n030_);
  OR2(n027_, n030_, n031_);
  OR2(n024_, n031_, n032_);
  BIC2(MDP_ra [3], n032_, q[3]);
  BIC2(MDP_ra [2], n032_, q[2]);
  BIC2(MDP_ra [1], n032_, q[1]);
  BIC2(MDP_ra [0], n032_, q[0]);
  BIC2(start, MCTL_state , n033_);
  AND2(b[3], n033_, n034_);
  AND2(MCTL_state , n032_, n035_);
  OR2(n025_, n030_, n036_);
  AND2(n029_, n036_, n037_);
  OR2(n023_, n037_, n038_);
  AND2(n021_, n038_, n039_);
  OR2(n018_, n039_, n040_);
  AND2(n019_, n040_, n041_);
  AND2(n035_, n041_, n042_);
  OR2(n026_, n030_, n043_);
  AND2(n028_, n043_, n044_);
  OR2(n023_, n044_, n045_);
  AND2(n022_, n045_, n046_);
  XOR2(n020_, n046_, n047_);
  ORN2(n047_, n042_, n048_);
  OR2(MDP_rb [3], n042_, n049_);
  AND2(n048_, n049_, n050_);
  BIC2(n050_, n033_, n051_);
  OR2(n034_, n051_, MDP_rb_next [3]);
  AND2(b[2], n033_, n052_);
  XOR2(n023_, n044_, n053_);
  AND2(n042_, n053_, n054_);
  BIC2(MDP_rb [2], n042_, n055_);
  OR2(n054_, n055_, n056_);
  ORN2(n033_, n056_, n057_);
  ORN2(n052_, n057_, MDP_rb_next [2]);
  ORN2(b[1], n033_, n058_);
  XOR2(n026_, n030_, n059_);
  AND2(n042_, n059_, n060_);
  BIC2(MDP_rb [1], n042_, n061_);
  OR2(n060_, n061_, n062_);
  OR2(n033_, n062_, n063_);
  AND2(n058_, n063_, MDP_rb_next [1]);
  AND2(b[0], n033_, n064_);
  OR2(MDP_rb [0], n042_, n065_);
  ORN2(n027_, n042_, n066_);
  AND2(n065_, n066_, n067_);
  BIC2(n067_, n033_, n068_);
  OR2(n064_, n068_, MDP_rb_next [0]);
  ORN2(a[3], n033_, n069_);
  BIC2(n035_, n041_, n070_);
  BIC2(MDP_ra [3], n070_, n071_);
  BIC2(MCTL_state , n019_, n072_);
  BIC2(n072_, n039_, n073_);
  OR2(n033_, n073_, n074_);
  OR2(n071_, n074_, n075_);
  AND2(n069_, n075_, MDP_ra_next [3]);
  ORN2(a[2], n033_, n000_);
  XOR2(n023_, n037_, n001_);
  ORN2(n001_, n070_, n002_);
  OR2(MDP_ra [2], n070_, n003_);
  AND2(n002_, n003_, n004_);
  OR2(n033_, n004_, n005_);
  AND2(n000_, n005_, MDP_ra_next [2]);
  ORN2(a[1], n033_, n006_);
  XOR2(n025_, n030_, n007_);
  AND2(n070_, n007_, n008_);
  BIC2(MDP_ra [1], n070_, n009_);
  OR2(n008_, n009_, n010_);
  OR2(n033_, n010_, n011_);
  AND2(n006_, n011_, MDP_ra_next [1]);
  AND2(a[0], n033_, n012_);
  OR2(MDP_ra [0], n070_, n013_);
  ORN2(n027_, n070_, n014_);
  AND2(n013_, n014_, n015_);
  BIC2(n015_, n033_, n016_);
  OR2(n012_, n016_, MDP_ra_next [0]);
  BIC2(n017_, MCTL_state , *done);
  OR2(n033_, n035_, MCTL_next_state );
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:18" */
  DFFSR(clk, MCTL_next_state , MCTL_state , rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_rb_next [0], MDP_rb [0], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_rb_next [1], MDP_rb [1], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_rb_next [2], MDP_rb [2], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_rb_next [3], MDP_rb [3], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_ra_next [0], MDP_ra [0], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_ra_next [1], MDP_ra [1], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_ra_next [2], MDP_ra [2], rst, 0x0);
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:32" */
  DFFSR(clk, MDP_ra_next [3], MDP_ra [3], rst, 0x0);

  return;
}
