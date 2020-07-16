/* C code by yosys */
/* top =  1  */
/* src = "verilog/gcdtop.v:1" */
void gcdtop(MDTYPE* a, MDTYPE* b, MDTYPE start, MDTYPE* q, MDTYPE* done, MDTYPE clk, MDTYPE rst)
{

  MDTYPE n000_;
  MDTYPE n001_;
  MDTYPE n002_;
  MDTYPE n003_;
  MDTYPE n004_;
  MDTYPE n005_;
  MDTYPE n006_;
  MDTYPE n007_;
  MDTYPE n008_;
  MDTYPE n009_;
  MDTYPE n010_;
  MDTYPE n011_;
  MDTYPE n012_;
  MDTYPE n013_;
  MDTYPE n014_;
  MDTYPE n015_;
  MDTYPE n016_;
  MDTYPE n017_;
  MDTYPE n018_;
  MDTYPE n019_;
  MDTYPE n020_;
  MDTYPE n021_;
  MDTYPE n022_;
  MDTYPE n023_;
  MDTYPE n024_;
  MDTYPE n025_;
  MDTYPE n026_;
  MDTYPE n027_;
  MDTYPE n028_;
  MDTYPE n029_;
  MDTYPE n030_;
  MDTYPE n031_;
  MDTYPE n032_;
  MDTYPE n033_;
  MDTYPE n034_;
  MDTYPE n035_;
  MDTYPE n036_;
  MDTYPE n037_;
  MDTYPE n038_;
  MDTYPE n039_;
  MDTYPE n040_;
  MDTYPE n041_;
  MDTYPE n042_;
  MDTYPE n043_;
  MDTYPE n044_;
  MDTYPE n045_;
  MDTYPE n046_;
  MDTYPE n047_;
  MDTYPE n048_;
  MDTYPE n049_;
  MDTYPE n050_;
  MDTYPE n051_;
  MDTYPE n052_;
  MDTYPE n053_;
  MDTYPE n054_;
  MDTYPE n055_;
  MDTYPE n056_;
  MDTYPE n057_;
  MDTYPE n058_;
  MDTYPE n059_;
  MDTYPE n060_;
  MDTYPE n061_;
  MDTYPE n062_;
  MDTYPE n063_;
  MDTYPE n064_;
  MDTYPE n065_;
  MDTYPE n066_;
  MDTYPE n067_;
  MDTYPE n068_;
  MDTYPE n069_;
  MDTYPE n070_;
  MDTYPE n071_;
  MDTYPE n072_;
  MDTYPE n073_;
  MDTYPE n074_;
  MDTYPE n075_;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:6" */
  /* unused_bits = "0" */
  MDTYPE MCTL_c1 ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:7" */
  /* unused_bits = "0" */
  MDTYPE MCTL_c2 ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:8" */
  /* unused_bits = "0" */
  MDTYPE MCTL_c3 ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:10" */
  MDTYPE MCTL_clk ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:5" */
  MDTYPE MCTL_done ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:2" */
  /* unused_bits = "0" */
  MDTYPE MCTL_f ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:3" */
  /* unused_bits = "0" */
  MDTYPE MCTL_g ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:14" */
  MDTYPE MCTL_next_state ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:11" */
  MDTYPE MCTL_rst ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:1" */
  MDTYPE MCTL_start ;
  /* src = "verilog/gcdtop.v:13|verilog/gcdctl.v:13" */
  MDTYPE MCTL_state ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:1" */
  MDTYPE MDP_a  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:2" */
  MDTYPE MDP_b  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:3" */
  /* unused_bits = "0" */
  MDTYPE MDP_c1 ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:4" */
  /* unused_bits = "0" */
  MDTYPE MDP_c2 ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:5" */
  /* unused_bits = "0" */
  MDTYPE MDP_c3 ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:11" */
  MDTYPE MDP_clk ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:8" */
  /* unused_bits = "0" */
  MDTYPE MDP_f ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:9" */
  /* unused_bits = "0" */
  MDTYPE MDP_g ;
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:7" */
  MDTYPE MDP_q  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:14" */
  MDTYPE MDP_ra  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:17" */
  MDTYPE MDP_ra_next  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:15" */
  MDTYPE MDP_rb  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:18" */
  MDTYPE MDP_rb_next  [4];
  /* src = "verilog/gcdtop.v:12|verilog/gcddp.v:12" */
  MDTYPE MDP_rst ;
  /* src = "verilog/gcdtop.v:1" */
  /* src = "verilog/gcdtop.v:2" */
  /* src = "verilog/gcdtop.v:10" */
  /* unused_bits = "0" */
  MDTYPE c1;
  /* src = "verilog/gcdtop.v:10" */
  /* unused_bits = "0" */
  MDTYPE c2;
  /* src = "verilog/gcdtop.v:10" */
  /* unused_bits = "0" */
  MDTYPE c3;
  /* src = "verilog/gcdtop.v:7" */
  /* src = "verilog/gcdtop.v:5" */
  /* src = "verilog/gcdtop.v:10" */
  /* unused_bits = "0" */
  MDTYPE f;
  /* src = "verilog/gcdtop.v:10" */
  /* unused_bits = "0" */
  MDTYPE g;
  /* src = "verilog/gcdtop.v:4" */
  /* src = "verilog/gcdtop.v:8" */
  /* src = "verilog/gcdtop.v:3" */
  NOT1(MCTL_state , n017_);
  ORN2(MDP_ra [2], MDP_rb [2], n018_);
  ORN2(MDP_rb [2], MDP_ra [2], n019_);
  XOR2(MDP_ra [2], MDP_rb [2], n020_);
  ORN2(MDP_ra [3], MDP_rb [3], n021_);
  BIC2(MDP_ra [3], MDP_rb [3], n022_);
  XOR2(MDP_ra [3], MDP_rb [3], n023_);
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
  ORN2(b[3], n033_, n034_);
  AND2(MCTL_state , n032_, n035_);
  OR2(n026_, n030_, n036_);
  AND2(n028_, n036_, n037_);
  OR2(n020_, n037_, n038_);
  AND2(n018_, n038_, n039_);
  OR2(n022_, n039_, n040_);
  AND2(n021_, n040_, n041_);
  BIC2(n035_, n041_, n042_);
  BIC2(MDP_rb [3], n042_, n043_);
  OR2(n017_, n021_, n044_);
  OR2(n039_, n044_, n045_);
  ORN2(n033_, n045_, n046_);
  OR2(n043_, n046_, n047_);
  AND2(n034_, n047_, MDP_rb_next [3]);
  ORN2(b[2], n033_, n048_);
  XOR2(n020_, n037_, n049_);
  ORN2(n049_, n042_, n050_);
  OR2(MDP_rb [2], n042_, n051_);
  AND2(n050_, n051_, n052_);
  OR2(n033_, n052_, n053_);
  AND2(n048_, n053_, MDP_rb_next [2]);
  ORN2(b[1], n033_, n054_);
  XOR2(n026_, n030_, n055_);
  AND2(n042_, n055_, n056_);
  BIC2(MDP_rb [1], n042_, n057_);
  OR2(n056_, n057_, n058_);
  OR2(n033_, n058_, n059_);
  AND2(n054_, n059_, MDP_rb_next [1]);
  AND2(b[0], n033_, n060_);
  OR2(MDP_rb [0], n042_, n061_);
  ORN2(n027_, n042_, n062_);
  AND2(n061_, n062_, n063_);
  BIC2(n063_, n033_, n064_);
  OR2(n060_, n064_, MDP_rb_next [0]);
  AND2(a[3], n033_, n065_);
  AND2(n035_, n041_, n066_);
  OR2(n025_, n030_, n067_);
  AND2(n029_, n067_, n068_);
  OR2(n020_, n068_, n069_);
  AND2(n019_, n069_, n070_);
  XOR2(n023_, n070_, n071_);
  ORN2(n071_, n066_, n072_);
  OR2(MDP_ra [3], n066_, n073_);
  AND2(n072_, n073_, n074_);
  BIC2(n074_, n033_, n075_);
  OR2(n065_, n075_, MDP_ra_next [3]);
  AND2(a[2], n033_, n000_);
  XOR2(n020_, n068_, n001_);
  OR2(MDP_ra [2], n066_, n002_);
  BIC2(n066_, n001_, n003_);
  OR2(n033_, n003_, n004_);
  BIC2(n002_, n004_, n005_);
  OR2(n000_, n005_, MDP_ra_next [2]);
  ORN2(a[1], n033_, n006_);
  XOR2(n025_, n030_, n007_);
  AND2(n066_, n007_, n008_);
  BIC2(MDP_ra [1], n066_, n009_);
  OR2(n008_, n009_, n010_);
  OR2(n033_, n010_, n011_);
  AND2(n006_, n011_, MDP_ra_next [1]);
  AND2(a[0], n033_, n012_);
  OR2(MDP_ra [0], n066_, n013_);
  ORN2(n027_, n066_, n014_);
  AND2(n013_, n014_, n015_);
  BIC2(n015_, n033_, n016_);
  OR2(n012_, n016_, MDP_ra_next [0]);
  BIC2(n017_, start, *done);
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
