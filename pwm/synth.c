/* C code by yosys */
/* top =  1  */
/* src = "verilog/pwmtop.v:1" */
void pwmtop(MDTYPE* duty, MDTYPE* pulse, MDTYPE clk, MDTYPE rst)
{

  /* src = "verilog/pwmtop.v:9" */
  MDTYPE n000_ [8];
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
  /* src = "verilog/pwmtop.v:3" */
  /* src = "verilog/pwmtop.v:6" */
  MDTYPE cnt [8];
  /* src = "verilog/pwmtop.v:1" */
  /* src = "verilog/pwmtop.v:2" */
  /* src = "verilog/pwmtop.v:7" */
  MDTYPE pulsereg;
  /* src = "verilog/pwmtop.v:4" */
  NOT1(rst, n001_);
  AND2(cnt[0], cnt[1], n002_);
  OR2(cnt[0], cnt[1], n003_);
  AND2(n001_, n003_, n004_);
  BIC2(n004_, n002_, n000_[1]);
  AND2(cnt[2], n002_, n005_);
  OR2(cnt[2], n002_, n006_);
  AND2(n001_, n006_, n007_);
  BIC2(n007_, n005_, n000_[2]);
  AND2(cnt[3], n005_, n008_);
  OR2(cnt[3], n005_, n009_);
  AND2(n001_, n009_, n010_);
  BIC2(n010_, n008_, n000_[3]);
  AND2(cnt[4], n008_, n011_);
  OR2(cnt[4], n008_, n012_);
  AND2(n001_, n012_, n013_);
  BIC2(n013_, n011_, n000_[4]);
  AND2(cnt[5], n011_, n014_);
  OR2(cnt[5], n011_, n015_);
  AND2(n001_, n015_, n016_);
  BIC2(n016_, n014_, n000_[5]);
  AND2(cnt[6], n014_, n017_);
  OR2(cnt[6], n014_, n018_);
  AND2(n001_, n018_, n019_);
  BIC2(n019_, n017_, n000_[6]);
  XOR2(cnt[7], n017_, n020_);
  AND2(n001_, n020_, n000_[7]);
  BIC2(cnt[6], duty[6], n021_);
  BIC2(cnt[7], duty[7], n022_);
  OR2(n021_, n022_, n023_);
  ORN2(cnt[7], duty[7], n024_);
  XOR2(cnt[6], duty[6], n025_);
  XOR2(cnt[7], duty[7], n026_);
  OR2(n025_, n026_, n027_);
  BIC2(cnt[4], duty[4], n028_);
  BIC2(cnt[5], duty[5], n029_);
  OR2(n028_, n029_, n030_);
  ORN2(cnt[5], duty[5], n031_);
  ORN2(cnt[4], duty[4], n032_);
  BIC2(n031_, n030_, n033_);
  BIC2(n032_, n027_, n034_);
  AND2(n033_, n034_, n035_);
  BIC2(cnt[1], duty[1], n036_);
  BIC2(duty[0], cnt[0], n037_);
  XOR2(cnt[1], duty[1], n038_);
  OR2(n037_, n038_, n039_);
  ORN2(n036_, n039_, n040_);
  BIC2(cnt[2], duty[2], n041_);
  BIC2(cnt[3], duty[3], n042_);
  ORN2(cnt[3], duty[3], n043_);
  XOR2(cnt[2], duty[2], n044_);
  XOR2(cnt[3], duty[3], n045_);
  OR2(n044_, n045_, n046_);
  BIC2(n040_, n046_, n047_);
  AND2(n041_, n043_, n048_);
  OR2(n042_, n048_, n049_);
  OR2(n047_, n049_, n050_);
  AND2(n035_, n050_, n051_);
  BIC2(n031_, n027_, n052_);
  AND2(n030_, n052_, n053_);
  AND2(n023_, n024_, n054_);
  OR2(n053_, n054_, n055_);
  OR2(n051_, n055_, n056_);
  ORN2(duty[0], cnt[0], n057_);
  BIC2(n057_, n046_, n058_);
  AND2(n035_, n058_, n059_);
  ORN2(n039_, n059_, n060_);
  AND2(n056_, n060_, *pulse);
  BIC2(n001_, cnt[0], n000_[0]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[0], cnt[0]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[1], cnt[1]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[2], cnt[2]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[3], cnt[3]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[4], cnt[4]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[5], cnt[5]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[6], cnt[6]);
  /* src = "verilog/pwmtop.v:9" */
  DFF(clk, n000_[7], cnt[7]);

  return;
}
