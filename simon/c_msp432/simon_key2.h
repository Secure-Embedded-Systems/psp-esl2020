#ifndef SIMON_KEY_H_
#define SIMON_KEY_H_


/* C code by yosys */
/* top =  1  */
/* src = "simon_key2.v:1" */
void simon_key(MDTYPE clk, MDTYPE rst, MDTYPE* inLeft, MDTYPE* inRight, MDTYPE* out, MDTYPE* done)
{

  /* src = "simon_key2.v:56" */
  MDTYPE n0000_ [7];
  /* src = "simon_key2.v:56" */
  MDTYPE n0001_ [64];
  /* src = "simon_key2.v:56" */
  MDTYPE n0002_ [64];
  /* src = "simon_key2.v:56" */
  MDTYPE n0003_ [62];
  MDTYPE n0004_;
  MDTYPE n0005_;
  MDTYPE n0006_;
  MDTYPE n0007_;
  MDTYPE n0008_;
  MDTYPE n0009_;
  MDTYPE n0010_;
  MDTYPE n0011_;
  MDTYPE n0012_;
  MDTYPE n0013_;
  MDTYPE n0014_;
  MDTYPE n0015_;
  MDTYPE n0016_;
  MDTYPE n0017_;
  MDTYPE n0018_;
  MDTYPE n0019_;
  MDTYPE n0020_;
  MDTYPE n0021_;
  MDTYPE n0022_;
  MDTYPE n0023_;
  MDTYPE n0024_;
  MDTYPE n0025_;
  MDTYPE n0026_;
  MDTYPE n0027_;
  MDTYPE n0028_;
  MDTYPE n0029_;
  MDTYPE n0030_;
  MDTYPE n0031_;
  MDTYPE n0032_;
  MDTYPE n0033_;
  MDTYPE n0034_;
  MDTYPE n0035_;
  MDTYPE n0036_;
  MDTYPE n0037_;
  MDTYPE n0038_;
  MDTYPE n0039_;
  MDTYPE n0040_;
  MDTYPE n0041_;
  MDTYPE n0042_;
  MDTYPE n0043_;
  MDTYPE n0044_;
  MDTYPE n0045_;
  MDTYPE n0046_;
  MDTYPE n0047_;
  MDTYPE n0048_;
  MDTYPE n0049_;
  MDTYPE n0050_;
  MDTYPE n0051_;
  MDTYPE n0052_;
  MDTYPE n0053_;
  MDTYPE n0054_;
  MDTYPE n0055_;
  MDTYPE n0056_;
  MDTYPE n0057_;
  MDTYPE n0058_;
  MDTYPE n0059_;
  MDTYPE n0060_;
  MDTYPE n0061_;
  MDTYPE n0062_;
  MDTYPE n0063_;
  MDTYPE n0064_;
  MDTYPE n0065_;
  MDTYPE n0066_;
  MDTYPE n0067_;
  MDTYPE n0068_;
  MDTYPE n0069_;
  MDTYPE n0070_;
  MDTYPE n0071_;
  MDTYPE n0072_;
  MDTYPE n0073_;
  MDTYPE n0074_;
  MDTYPE n0075_;
  MDTYPE n0076_;
  MDTYPE n0077_;
  MDTYPE n0078_;
  MDTYPE n0079_;
  MDTYPE n0080_;
  MDTYPE n0081_;
  MDTYPE n0082_;
  MDTYPE n0083_;
  MDTYPE n0084_;
  MDTYPE n0085_;
  MDTYPE n0086_;
  MDTYPE n0087_;
  MDTYPE n0088_;
  MDTYPE n0089_;
  MDTYPE n0090_;
  MDTYPE n0091_;
  MDTYPE n0092_;
  MDTYPE n0093_;
  MDTYPE n0094_;
  MDTYPE n0095_;
  MDTYPE n0096_;
  MDTYPE n0097_;
  MDTYPE n0098_;
  MDTYPE n0099_;
  MDTYPE n0100_;
  MDTYPE n0101_;
  MDTYPE n0102_;
  MDTYPE n0103_;
  MDTYPE n0104_;
  MDTYPE n0105_;
  MDTYPE n0106_;
  MDTYPE n0107_;
  MDTYPE n0108_;
  MDTYPE n0109_;
  MDTYPE n0110_;
  MDTYPE n0111_;
  MDTYPE n0112_;
  MDTYPE n0113_;
  MDTYPE n0114_;
  MDTYPE n0115_;
  MDTYPE n0116_;
  MDTYPE n0117_;
  MDTYPE n0118_;
  MDTYPE n0119_;
  MDTYPE n0120_;
  MDTYPE n0121_;
  MDTYPE n0122_;
  MDTYPE n0123_;
  MDTYPE n0124_;
  MDTYPE n0125_;
  MDTYPE n0126_;
  MDTYPE n0127_;
  MDTYPE n0128_;
  MDTYPE n0129_;
  MDTYPE n0130_;
  MDTYPE n0131_;
  MDTYPE n0132_;
  MDTYPE n0133_;
  MDTYPE n0134_;
  MDTYPE n0135_;
  MDTYPE n0136_;
  MDTYPE n0137_;
  MDTYPE n0138_;
  MDTYPE n0139_;
  MDTYPE n0140_;
  MDTYPE n0141_;
  MDTYPE n0142_;
  MDTYPE n0143_;
  MDTYPE n0144_;
  MDTYPE n0145_;
  MDTYPE n0146_;
  MDTYPE n0147_;
  MDTYPE n0148_;
  MDTYPE n0149_;
  MDTYPE n0150_;
  MDTYPE n0151_;
  MDTYPE n0152_;
  MDTYPE n0153_;
  MDTYPE n0154_;
  MDTYPE n0155_;
  MDTYPE n0156_;
  MDTYPE n0157_;
  MDTYPE n0158_;
  MDTYPE n0159_;
  MDTYPE n0160_;
  MDTYPE n0161_;
  MDTYPE n0162_;
  MDTYPE n0163_;
  MDTYPE n0164_;
  MDTYPE n0165_;
  MDTYPE n0166_;
  MDTYPE n0167_;
  MDTYPE n0168_;
  MDTYPE n0169_;
  MDTYPE n0170_;
  MDTYPE n0171_;
  MDTYPE n0172_;
  MDTYPE n0173_;
  MDTYPE n0174_;
  MDTYPE n0175_;
  MDTYPE n0176_;
  MDTYPE n0177_;
  MDTYPE n0178_;
  MDTYPE n0179_;
  MDTYPE n0180_;
  MDTYPE n0181_;
  MDTYPE n0182_;
  MDTYPE n0183_;
  MDTYPE n0184_;
  MDTYPE n0185_;
  MDTYPE n0186_;
  MDTYPE n0187_;
  MDTYPE n0188_;
  MDTYPE n0189_;
  MDTYPE n0190_;
  MDTYPE n0191_;
  MDTYPE n0192_;
  MDTYPE n0193_;
  MDTYPE n0194_;
  MDTYPE n0195_;
  MDTYPE n0196_;
  MDTYPE n0197_;
  MDTYPE n0198_;
  MDTYPE n0199_;
  MDTYPE n0200_;
  MDTYPE n0201_;
  MDTYPE n0202_;
  MDTYPE n0203_;
  MDTYPE n0204_;
  MDTYPE n0205_;
  MDTYPE n0206_;
  MDTYPE n0207_;
  MDTYPE n0208_;
  MDTYPE n0209_;
  MDTYPE n0210_;
  MDTYPE n0211_;
  MDTYPE n0212_;
  MDTYPE n0213_;
  MDTYPE n0214_;
  MDTYPE n0215_;
  MDTYPE n0216_;
  MDTYPE n0217_;
  MDTYPE n0218_;
  MDTYPE n0219_;
  MDTYPE n0220_;
  MDTYPE n0221_;
  MDTYPE n0222_;
  MDTYPE n0223_;
  MDTYPE n0224_;
  MDTYPE n0225_;
  MDTYPE n0226_;
  MDTYPE n0227_;
  MDTYPE n0228_;
  MDTYPE n0229_;
  MDTYPE n0230_;
  MDTYPE n0231_;
  MDTYPE n0232_;
  MDTYPE n0233_;
  MDTYPE n0234_;
  MDTYPE n0235_;
  MDTYPE n0236_;
  MDTYPE n0237_;
  MDTYPE n0238_;
  MDTYPE n0239_;
  MDTYPE n0240_;
  MDTYPE n0241_;
  MDTYPE n0242_;
  MDTYPE n0243_;
  MDTYPE n0244_;
  MDTYPE n0245_;
  MDTYPE n0246_;
  MDTYPE n0247_;
  MDTYPE n0248_;
  MDTYPE n0249_;
  MDTYPE n0250_;
  MDTYPE n0251_;
  MDTYPE n0252_;
  MDTYPE n0253_;
  MDTYPE n0254_;
  MDTYPE n0255_;
  MDTYPE n0256_;
  MDTYPE n0257_;
  MDTYPE n0258_;
  MDTYPE n0259_;
  MDTYPE n0260_;
  MDTYPE n0261_;
  MDTYPE n0262_;
  MDTYPE n0263_;
  MDTYPE n0264_;
  MDTYPE n0265_;
  MDTYPE n0266_;
  MDTYPE n0267_;
  MDTYPE n0268_;
  MDTYPE n0269_;
  MDTYPE n0270_;
  MDTYPE n0271_;
  MDTYPE n0272_;
  MDTYPE n0273_;
  MDTYPE n0274_;
  MDTYPE n0275_;
  MDTYPE n0276_;
  MDTYPE n0277_;
  MDTYPE n0278_;
  MDTYPE n0279_;
  MDTYPE n0280_;
  MDTYPE n0281_;
  MDTYPE n0282_;
  MDTYPE n0283_;
  MDTYPE n0284_;
  MDTYPE n0285_;
  MDTYPE n0286_;
  MDTYPE n0287_;
  MDTYPE n0288_;
  MDTYPE n0289_;
  MDTYPE n0290_;
  MDTYPE n0291_;
  MDTYPE n0292_;
  MDTYPE n0293_;
  MDTYPE n0294_;
  MDTYPE n0295_;
  MDTYPE n0296_;
  MDTYPE n0297_;
  MDTYPE n0298_;
  MDTYPE n0299_;
  MDTYPE n0300_;
  MDTYPE n0301_;
  MDTYPE n0302_;
  MDTYPE n0303_;
  MDTYPE n0304_;
  MDTYPE n0305_;
  MDTYPE n0306_;
  MDTYPE n0307_;
  MDTYPE n0308_;
  MDTYPE n0309_;
  MDTYPE n0310_;
  MDTYPE n0311_;
  MDTYPE n0312_;
  MDTYPE n0313_;
  MDTYPE n0314_;
  MDTYPE n0315_;
  MDTYPE n0316_;
  MDTYPE n0317_;
  MDTYPE n0318_;
  MDTYPE n0319_;
  MDTYPE n0320_;
  MDTYPE n0321_;
  MDTYPE n0322_;
  MDTYPE n0323_;
  MDTYPE n0324_;
  MDTYPE n0325_;
  MDTYPE n0326_;
  MDTYPE n0327_;
  MDTYPE n0328_;
  MDTYPE n0329_;
  MDTYPE n0330_;
  MDTYPE n0331_;
  MDTYPE n0332_;
  MDTYPE n0333_;
  MDTYPE n0334_;
  MDTYPE n0335_;
  MDTYPE n0336_;
  MDTYPE n0337_;
  MDTYPE n0338_;
  MDTYPE n0339_;
  MDTYPE n0340_;
  MDTYPE n0341_;
  MDTYPE n0342_;
  MDTYPE n0343_;
  MDTYPE n0344_;
  MDTYPE n0345_;
  MDTYPE n0346_;
  MDTYPE n0347_;
  MDTYPE n0348_;
  MDTYPE n0349_;
  MDTYPE n0350_;
  MDTYPE n0351_;
  MDTYPE n0352_;
  MDTYPE n0353_;
  MDTYPE n0354_;
  MDTYPE n0355_;
  MDTYPE n0356_;
  MDTYPE n0357_;
  MDTYPE n0358_;
  MDTYPE n0359_;
  MDTYPE n0360_;
  MDTYPE n0361_;
  MDTYPE n0362_;
  MDTYPE n0363_;
  MDTYPE n0364_;
  MDTYPE n0365_;
  MDTYPE n0366_;
  MDTYPE n0367_;
  MDTYPE n0368_;
  MDTYPE n0369_;
  MDTYPE n0370_;
  MDTYPE n0371_;
  MDTYPE n0372_;
  MDTYPE n0373_;
  MDTYPE n0374_;
  MDTYPE n0375_;
  MDTYPE n0376_;
  MDTYPE n0377_;
  MDTYPE n0378_;
  MDTYPE n0379_;
  MDTYPE n0380_;
  MDTYPE n0381_;
  MDTYPE n0382_;
  MDTYPE n0383_;
  MDTYPE n0384_;
  MDTYPE n0385_;
  MDTYPE n0386_;
  MDTYPE n0387_;
  MDTYPE n0388_;
  MDTYPE n0389_;
  MDTYPE n0390_;
  MDTYPE n0391_;
  MDTYPE n0392_;
  MDTYPE n0393_;
  MDTYPE n0394_;
  MDTYPE n0395_;
  MDTYPE n0396_;
  MDTYPE n0397_;
  MDTYPE n0398_;
  MDTYPE n0399_;
  MDTYPE n0400_;
  MDTYPE n0401_;
  MDTYPE n0402_;
  MDTYPE n0403_;
  MDTYPE n0404_;
  MDTYPE n0405_;
  MDTYPE n0406_;
  MDTYPE n0407_;
  MDTYPE n0408_;
  MDTYPE n0409_;
  MDTYPE n0410_;
  MDTYPE n0411_;
  MDTYPE n0412_;
  MDTYPE n0413_;
  MDTYPE n0414_;
  MDTYPE n0415_;
  MDTYPE n0416_;
  MDTYPE n0417_;
  MDTYPE n0418_;
  MDTYPE n0419_;
  MDTYPE n0420_;
  MDTYPE n0421_;
  MDTYPE n0422_;
  MDTYPE n0423_;
  MDTYPE n0424_;
  MDTYPE n0425_;
  MDTYPE n0426_;
  MDTYPE n0427_;
  MDTYPE n0428_;
  MDTYPE n0429_;
  MDTYPE n0430_;
  MDTYPE n0431_;
  MDTYPE n0432_;
  MDTYPE n0433_;
  MDTYPE n0434_;
  MDTYPE n0435_;
  MDTYPE n0436_;
  MDTYPE n0437_;
  MDTYPE n0438_;
  MDTYPE n0439_;
  MDTYPE n0440_;
  MDTYPE n0441_;
  MDTYPE n0442_;
  MDTYPE n0443_;
  MDTYPE n0444_;
  MDTYPE n0445_;
  MDTYPE n0446_;
  MDTYPE n0447_;
  MDTYPE n0448_;
  MDTYPE n0449_;
  MDTYPE n0450_;
  MDTYPE n0451_;
  MDTYPE n0452_;
  MDTYPE n0453_;
  MDTYPE n0454_;
  MDTYPE n0455_;
  MDTYPE n0456_;
  MDTYPE n0457_;
  MDTYPE n0458_;
  MDTYPE n0459_;
  /* src = "simon_key2.v:2" */
  /* src = "simon_key2.v:18" */
  static MDTYPE cnt [7];
  /* src = "simon_key2.v:7" */
  /* src = "simon_key2.v:4" */
  /* src = "simon_key2.v:5" */
  /* src = "simon_key2.v:17" */
  static MDTYPE ki [64];
  /* src = "simon_key2.v:16" */
  static MDTYPE ki1 [64];
  /* src = "simon_key2.v:6" */
  /* src = "simon_key2.v:3" */
  /* src = "simon_key2.v:10" */
  MDTYPE s3 [64];
  /* src = "simon_key2.v:11" */
  MDTYPE s4 [64];
  /* src = "simon_key2.v:14" */
  MDTYPE z [62];
  /* src = "simon_key2.v:15" */
  static MDTYPE z_reg [62];
  NOT1(rst, n0147_);
  NOT1(ki1[44], n0148_);
  XOR2(ki1[44], ki[40], n0149_);
  BIC2(ki1[43], rst, n0150_);
  AND2(n0149_, n0150_, n0151_);
  AND2(inLeft[40], rst, n0152_);
  OR2(rst, ki1[43], n0153_);
  OR2(n0149_, n0153_, n0154_);
  ORN2(n0151_, n0154_, n0155_);
  OR2(n0152_, n0155_, n0001_[40]);
  XOR2(ki[41], ki1[45], n0156_);
  OR2(rst, n0156_, n0157_);
  OR2(n0148_, n0157_, n0158_);
  BIC2(ki1[44], rst, n0159_);
  AND2(rst, inLeft[41], n0160_);
  OR2(n0159_, n0160_, n0161_);
  ORN2(n0161_, n0157_, n0162_);
  AND2(n0158_, n0162_, n0001_[41]);
  XOR2(ki[42], ki1[46], n0163_);
  OR2(rst, n0163_, n0164_);
  AND2(rst, inLeft[42], n0165_);
  BIC2(ki1[45], rst, n0166_);
  OR2(n0165_, n0166_, n0167_);
  AND2(n0164_, n0167_, n0168_);
  OR2(ki1[45], n0164_, n0169_);
  ORN2(n0168_, n0169_, n0001_[42]);
  XOR2(ki[43], ki1[47], n0170_);
  OR2(rst, n0170_, n0171_);
  AND2(rst, inLeft[43], n0172_);
  BIC2(ki1[46], rst, n0173_);
  OR2(n0172_, n0173_, n0174_);
  AND2(n0171_, n0174_, n0175_);
  OR2(ki1[46], n0171_, n0176_);
  ORN2(n0175_, n0176_, n0001_[43]);
  XOR2(ki[44], ki1[48], n0177_);
  OR2(rst, n0177_, n0178_);
  AND2(rst, inLeft[44], n0179_);
  BIC2(ki1[47], rst, n0180_);
  OR2(n0179_, n0180_, n0181_);
  AND2(n0178_, n0181_, n0182_);
  OR2(ki1[47], n0178_, n0183_);
  ORN2(n0182_, n0183_, n0001_[44]);
  XOR2(ki[45], ki1[49], n0184_);
  OR2(rst, n0184_, n0185_);
  AND2(rst, inLeft[45], n0186_);
  BIC2(ki1[48], rst, n0187_);
  OR2(n0186_, n0187_, n0188_);
  AND2(n0185_, n0188_, n0189_);
  OR2(ki1[48], n0185_, n0190_);
  ORN2(n0189_, n0190_, n0001_[45]);
  XOR2(ki[46], ki1[50], n0191_);
  OR2(rst, n0191_, n0192_);
  AND2(rst, inLeft[46], n0193_);
  BIC2(ki1[49], rst, n0194_);
  OR2(n0193_, n0194_, n0195_);
  AND2(n0192_, n0195_, n0196_);
  OR2(ki1[49], n0192_, n0197_);
  ORN2(n0196_, n0197_, n0001_[46]);
  XOR2(ki[47], ki1[51], n0198_);
  OR2(rst, n0198_, n0199_);
  AND2(rst, inLeft[47], n0200_);
  BIC2(ki1[50], rst, n0201_);
  OR2(n0200_, n0201_, n0202_);
  AND2(n0199_, n0202_, n0203_);
  OR2(ki1[50], n0199_, n0204_);
  ORN2(n0203_, n0204_, n0001_[47]);
  XOR2(ki[48], ki1[52], n0205_);
  OR2(rst, n0205_, n0206_);
  AND2(rst, inLeft[48], n0207_);
  BIC2(ki1[51], rst, n0208_);
  OR2(n0207_, n0208_, n0209_);
  AND2(n0206_, n0209_, n0210_);
  OR2(ki1[51], n0206_, n0211_);
  ORN2(n0210_, n0211_, n0001_[48]);
  XOR2(ki[49], ki1[53], n0212_);
  OR2(rst, n0212_, n0213_);
  AND2(rst, inLeft[49], n0214_);
  BIC2(ki1[52], rst, n0215_);
  OR2(n0214_, n0215_, n0216_);
  AND2(n0213_, n0216_, n0217_);
  OR2(ki1[52], n0213_, n0218_);
  ORN2(n0217_, n0218_, n0001_[49]);
  XOR2(ki[50], ki1[54], n0219_);
  OR2(rst, n0219_, n0220_);
  AND2(rst, inLeft[50], n0221_);
  BIC2(ki1[53], rst, n0222_);
  OR2(n0221_, n0222_, n0223_);
  AND2(n0220_, n0223_, n0224_);
  OR2(ki1[53], n0220_, n0225_);
  ORN2(n0224_, n0225_, n0001_[50]);
  XOR2(ki[51], ki1[55], n0226_);
  OR2(rst, n0226_, n0227_);
  AND2(rst, inLeft[51], n0228_);
  BIC2(ki1[54], rst, n0229_);
  OR2(n0228_, n0229_, n0230_);
  AND2(n0227_, n0230_, n0231_);
  OR2(ki1[54], n0227_, n0232_);
  ORN2(n0231_, n0232_, n0001_[51]);
  XOR2(ki[52], ki1[56], n0233_);
  OR2(rst, n0233_, n0234_);
  AND2(rst, inLeft[52], n0235_);
  BIC2(ki1[55], rst, n0236_);
  OR2(n0235_, n0236_, n0237_);
  AND2(n0234_, n0237_, n0238_);
  OR2(ki1[55], n0234_, n0239_);
  ORN2(n0238_, n0239_, n0001_[52]);
  XOR2(ki[53], ki1[57], n0240_);
  OR2(rst, n0240_, n0241_);
  AND2(rst, inLeft[53], n0242_);
  BIC2(ki1[56], rst, n0243_);
  OR2(n0242_, n0243_, n0244_);
  AND2(n0241_, n0244_, n0245_);
  OR2(ki1[56], n0241_, n0246_);
  ORN2(n0245_, n0246_, n0001_[53]);
  XOR2(ki[54], ki1[58], n0247_);
  OR2(rst, n0247_, n0248_);
  AND2(rst, inLeft[54], n0249_);
  BIC2(ki1[57], rst, n0250_);
  OR2(n0249_, n0250_, n0251_);
  AND2(n0248_, n0251_, n0252_);
  OR2(ki1[57], n0248_, n0253_);
  ORN2(n0252_, n0253_, n0001_[54]);
  XOR2(ki[55], ki1[59], n0254_);
  OR2(rst, n0254_, n0255_);
  AND2(rst, inLeft[55], n0256_);
  BIC2(ki1[58], rst, n0257_);
  OR2(n0256_, n0257_, n0258_);
  AND2(n0255_, n0258_, n0259_);
  OR2(ki1[58], n0255_, n0260_);
  ORN2(n0259_, n0260_, n0001_[55]);
  XOR2(ki[56], ki1[60], n0261_);
  OR2(rst, n0261_, n0262_);
  AND2(rst, inLeft[56], n0263_);
  BIC2(ki1[59], rst, n0264_);
  OR2(n0263_, n0264_, n0265_);
  AND2(n0262_, n0265_, n0266_);
  OR2(ki1[59], n0262_, n0267_);
  ORN2(n0266_, n0267_, n0001_[56]);
  XOR2(ki[57], ki1[61], n0268_);
  OR2(rst, n0268_, n0269_);
  AND2(rst, inLeft[57], n0270_);
  BIC2(ki1[60], rst, n0271_);
  OR2(n0270_, n0271_, n0272_);
  AND2(n0269_, n0272_, n0273_);
  OR2(ki1[60], n0269_, n0274_);
  ORN2(n0273_, n0274_, n0001_[57]);
  XOR2(ki[58], ki1[62], n0275_);
  OR2(rst, n0275_, n0276_);
  AND2(rst, inLeft[58], n0277_);
  BIC2(ki1[61], rst, n0278_);
  OR2(n0277_, n0278_, n0279_);
  AND2(n0276_, n0279_, n0280_);
  OR2(ki1[61], n0276_, n0281_);
  ORN2(n0280_, n0281_, n0001_[58]);
  XOR2(ki[59], ki1[63], n0282_);
  OR2(rst, n0282_, n0283_);
  AND2(rst, inLeft[59], n0284_);
  BIC2(ki1[62], rst, n0285_);
  OR2(n0284_, n0285_, n0286_);
  AND2(n0283_, n0286_, n0287_);
  OR2(ki1[62], n0283_, n0288_);
  ORN2(n0287_, n0288_, n0001_[59]);
  XOR2(ki[60], ki1[0], n0289_);
  OR2(rst, n0289_, n0290_);
  AND2(rst, inLeft[60], n0291_);
  BIC2(ki1[63], rst, n0292_);
  OR2(n0291_, n0292_, n0293_);
  AND2(n0290_, n0293_, n0294_);
  OR2(ki1[63], n0290_, n0295_);
  ORN2(n0294_, n0295_, n0001_[60]);
  XOR2(ki[61], ki1[1], n0296_);
  OR2(rst, n0296_, n0297_);
  AND2(rst, inLeft[61], n0298_);
  BIC2(ki1[0], rst, n0299_);
  OR2(n0298_, n0299_, n0300_);
  AND2(n0297_, n0300_, n0301_);
  OR2(ki1[0], n0297_, n0302_);
  ORN2(n0301_, n0302_, n0001_[61]);
  BIC2(ki1[2], rst, n0303_);
  OR2(rst, ki1[2], n0304_);
  XOR2(ki[62], ki1[2], n0305_);
  OR2(rst, n0305_, n0306_);
  ORN2(n0306_, ki1[1], n0307_);
  BIC2(ki1[1], rst, n0308_);
  AND2(rst, inLeft[62], n0309_);
  OR2(n0308_, n0309_, n0310_);
  BIC2(n0306_, n0310_, n0311_);
  BIC2(n0307_, n0311_, n0001_[62]);
  XOR2(ki[63], ki1[3], n0312_);
  AND2(n0303_, n0312_, n0313_);
  OR2(n0304_, n0312_, n0314_);
  AND2(rst, inLeft[63], n0315_);
  ORN2(n0313_, n0314_, n0316_);
  OR2(n0315_, n0316_, n0001_[63]);
  OR2(rst, z_reg[1], n0003_[0]);
  BIC2(z_reg[2], rst, n0003_[1]);
  OR2(rst, z_reg[3], n0003_[2]);
  BIC2(z_reg[4], rst, n0003_[3]);
  OR2(rst, z_reg[5], n0003_[4]);
  OR2(rst, z_reg[6], n0003_[5]);
  OR2(rst, z_reg[7], n0003_[6]);
  OR2(rst, z_reg[8], n0003_[7]);
  BIC2(z_reg[9], rst, n0003_[8]);
  OR2(rst, z_reg[10], n0003_[9]);
  OR2(rst, z_reg[11], n0003_[10]);
  OR2(rst, z_reg[12], n0003_[11]);
  BIC2(z_reg[13], rst, n0003_[12]);
  BIC2(z_reg[14], rst, n0003_[13]);
  BIC2(z_reg[15], rst, n0003_[14]);
  BIC2(z_reg[16], rst, n0003_[15]);
  BIC2(z_reg[17], rst, n0003_[16]);
  BIC2(z_reg[18], rst, n0003_[17]);
  OR2(rst, z_reg[19], n0003_[18]);
  OR2(rst, z_reg[20], n0003_[19]);
  BIC2(z_reg[21], rst, n0003_[20]);
  OR2(rst, z_reg[22], n0003_[21]);
  BIC2(z_reg[23], rst, n0003_[22]);
  BIC2(z_reg[24], rst, n0003_[23]);
  OR2(rst, z_reg[25], n0003_[24]);
  BIC2(z_reg[26], rst, n0003_[25]);
  BIC2(z_reg[27], rst, n0003_[26]);
  OR2(rst, z_reg[28], n0003_[27]);
  OR2(rst, z_reg[29], n0003_[28]);
  BIC2(z_reg[30], rst, n0003_[29]);
  BIC2(z_reg[31], rst, n0003_[30]);
  BIC2(z_reg[32], rst, n0003_[31]);
  OR2(rst, z_reg[33], n0003_[32]);
  BIC2(z_reg[34], rst, n0003_[33]);
  OR2(rst, z_reg[35], n0003_[34]);
  BIC2(z_reg[36], rst, n0003_[35]);
  BIC2(z_reg[37], rst, n0003_[36]);
  BIC2(z_reg[38], rst, n0003_[37]);
  BIC2(z_reg[39], rst, n0003_[38]);
  OR2(rst, z_reg[40], n0003_[39]);
  BIC2(z_reg[41], rst, n0003_[40]);
  BIC2(z_reg[42], rst, n0003_[41]);
  BIC2(z_reg[43], rst, n0003_[42]);
  OR2(rst, z_reg[44], n0003_[43]);
  OR2(rst, z_reg[45], n0003_[44]);
  OR2(rst, z_reg[46], n0003_[45]);
  OR2(rst, z_reg[47], n0003_[46]);
  OR2(rst, z_reg[48], n0003_[47]);
  OR2(rst, z_reg[49], n0003_[48]);
  BIC2(z_reg[50], rst, n0003_[49]);
  BIC2(z_reg[51], rst, n0003_[50]);
  OR2(rst, z_reg[52], n0003_[51]);
  BIC2(z_reg[53], rst, n0003_[52]);
  OR2(rst, z_reg[54], n0003_[53]);
  OR2(rst, z_reg[55], n0003_[54]);
  BIC2(z_reg[56], rst, n0003_[55]);
  OR2(rst, z_reg[57], n0003_[56]);
  OR2(rst, z_reg[58], n0003_[57]);
  BIC2(z_reg[59], rst, n0003_[58]);
  BIC2(z_reg[60], rst, n0003_[59]);
  OR2(rst, z_reg[61], n0003_[60]);
  OR2(rst, z_reg[0], n0003_[61]);
  BIC2(cnt[6], cnt[5], n0317_);
  BIC2(n0317_, cnt[4], n0318_);
  AND2(cnt[0], cnt[1], n0319_);
  OR2(cnt[3], cnt[2], n0320_);
  BIC2(n0319_, n0320_, n0321_);
  AND2(n0318_, n0321_, *done);
  BIC2(n0147_, cnt[0], n0000_[0]);
  OR2(cnt[0], cnt[1], n0322_);
  AND2(n0147_, n0322_, n0323_);
  BIC2(n0323_, n0319_, n0000_[1]);
  AND2(cnt[2], n0319_, n0324_);
  OR2(cnt[2], n0319_, n0325_);
  AND2(n0147_, n0325_, n0326_);
  BIC2(n0326_, n0324_, n0000_[2]);
  AND2(cnt[3], n0324_, n0327_);
  OR2(cnt[3], n0324_, n0328_);
  AND2(n0147_, n0328_, n0329_);
  BIC2(n0329_, n0327_, n0000_[3]);
  AND2(cnt[4], n0327_, n0330_);
  OR2(cnt[4], n0327_, n0331_);
  AND2(n0147_, n0331_, n0332_);
  BIC2(n0332_, n0330_, n0000_[4]);
  AND2(cnt[5], n0330_, n0333_);
  OR2(cnt[5], n0330_, n0334_);
  AND2(n0147_, n0334_, n0335_);
  BIC2(n0335_, n0333_, n0000_[5]);
  XOR2(cnt[6], n0333_, n0336_);
  AND2(n0147_, n0336_, n0000_[6]);
  AND2(rst, inRight[0], n0337_);
  OR2(n0299_, n0337_, n0002_[0]);
  AND2(rst, inRight[1], n0338_);
  OR2(n0308_, n0338_, n0002_[1]);
  AND2(rst, inRight[2], n0339_);
  OR2(n0303_, n0339_, n0002_[2]);
  AND2(rst, inRight[3], n0340_);
  BIC2(ki1[3], rst, n0341_);
  OR2(n0340_, n0341_, n0002_[3]);
  AND2(rst, inRight[4], n0342_);
  BIC2(ki1[4], rst, n0343_);
  OR2(n0342_, n0343_, n0002_[4]);
  AND2(rst, inRight[5], n0344_);
  BIC2(ki1[5], rst, n0345_);
  OR2(n0344_, n0345_, n0002_[5]);
  AND2(rst, inRight[6], n0346_);
  BIC2(ki1[6], rst, n0347_);
  OR2(n0346_, n0347_, n0002_[6]);
  AND2(rst, inRight[7], n0348_);
  BIC2(ki1[7], rst, n0349_);
  OR2(n0348_, n0349_, n0002_[7]);
  AND2(rst, inRight[8], n0350_);
  BIC2(ki1[8], rst, n0351_);
  OR2(n0350_, n0351_, n0002_[8]);
  AND2(rst, inRight[9], n0352_);
  BIC2(ki1[9], rst, n0353_);
  OR2(n0352_, n0353_, n0002_[9]);
  AND2(rst, inRight[10], n0354_);
  BIC2(ki1[10], rst, n0355_);
  OR2(n0354_, n0355_, n0002_[10]);
  AND2(rst, inRight[11], n0356_);
  BIC2(ki1[11], rst, n0357_);
  OR2(n0356_, n0357_, n0002_[11]);
  AND2(rst, inRight[12], n0358_);
  BIC2(ki1[12], rst, n0359_);
  OR2(n0358_, n0359_, n0002_[12]);
  AND2(rst, inRight[13], n0360_);
  BIC2(ki1[13], rst, n0361_);
  OR2(n0360_, n0361_, n0002_[13]);
  AND2(rst, inRight[14], n0362_);
  BIC2(ki1[14], rst, n0363_);
  OR2(n0362_, n0363_, n0002_[14]);
  AND2(rst, inRight[15], n0364_);
  BIC2(ki1[15], rst, n0365_);
  OR2(n0364_, n0365_, n0002_[15]);
  AND2(rst, inRight[16], n0366_);
  BIC2(ki1[16], rst, n0367_);
  OR2(n0366_, n0367_, n0002_[16]);
  AND2(rst, inRight[17], n0368_);
  BIC2(ki1[17], rst, n0369_);
  OR2(n0368_, n0369_, n0002_[17]);
  AND2(rst, inRight[18], n0370_);
  BIC2(ki1[18], rst, n0371_);
  OR2(n0370_, n0371_, n0002_[18]);
  AND2(rst, inRight[19], n0372_);
  BIC2(ki1[19], rst, n0373_);
  OR2(n0372_, n0373_, n0002_[19]);
  AND2(rst, inRight[20], n0374_);
  BIC2(ki1[20], rst, n0375_);
  OR2(n0374_, n0375_, n0002_[20]);
  AND2(rst, inRight[21], n0376_);
  BIC2(ki1[21], rst, n0377_);
  OR2(n0376_, n0377_, n0002_[21]);
  AND2(rst, inRight[22], n0378_);
  BIC2(ki1[22], rst, n0379_);
  OR2(n0378_, n0379_, n0002_[22]);
  AND2(rst, inRight[23], n0380_);
  BIC2(ki1[23], rst, n0381_);
  OR2(n0380_, n0381_, n0002_[23]);
  AND2(rst, inRight[24], n0382_);
  BIC2(ki1[24], rst, n0383_);
  OR2(n0382_, n0383_, n0002_[24]);
  AND2(rst, inRight[25], n0384_);
  BIC2(ki1[25], rst, n0385_);
  OR2(n0384_, n0385_, n0002_[25]);
  AND2(rst, inRight[26], n0386_);
  BIC2(ki1[26], rst, n0387_);
  OR2(n0386_, n0387_, n0002_[26]);
  AND2(rst, inRight[27], n0388_);
  BIC2(ki1[27], rst, n0389_);
  OR2(n0388_, n0389_, n0002_[27]);
  AND2(rst, inRight[28], n0390_);
  BIC2(ki1[28], rst, n0391_);
  OR2(n0390_, n0391_, n0002_[28]);
  AND2(rst, inRight[29], n0392_);
  BIC2(ki1[29], rst, n0393_);
  OR2(n0392_, n0393_, n0002_[29]);
  AND2(rst, inRight[30], n0394_);
  BIC2(ki1[30], rst, n0395_);
  OR2(n0394_, n0395_, n0002_[30]);
  AND2(rst, inRight[31], n0396_);
  BIC2(ki1[31], rst, n0397_);
  OR2(n0396_, n0397_, n0002_[31]);
  AND2(rst, inRight[32], n0398_);
  BIC2(ki1[32], rst, n0399_);
  OR2(n0398_, n0399_, n0002_[32]);
  AND2(rst, inRight[33], n0400_);
  BIC2(ki1[33], rst, n0401_);
  OR2(n0400_, n0401_, n0002_[33]);
  AND2(rst, inRight[34], n0402_);
  BIC2(ki1[34], rst, n0403_);
  OR2(n0402_, n0403_, n0002_[34]);
  AND2(rst, inRight[35], n0404_);
  BIC2(ki1[35], rst, n0405_);
  OR2(n0404_, n0405_, n0002_[35]);
  AND2(rst, inRight[36], n0406_);
  BIC2(ki1[36], rst, n0407_);
  OR2(n0406_, n0407_, n0002_[36]);
  AND2(rst, inRight[37], n0408_);
  BIC2(ki1[37], rst, n0409_);
  OR2(n0408_, n0409_, n0002_[37]);
  AND2(rst, inRight[38], n0410_);
  BIC2(ki1[38], rst, n0411_);
  OR2(n0410_, n0411_, n0002_[38]);
  AND2(rst, inRight[39], n0412_);
  BIC2(ki1[39], rst, n0413_);
  OR2(n0412_, n0413_, n0002_[39]);
  AND2(rst, inRight[40], n0414_);
  BIC2(ki1[40], rst, n0415_);
  OR2(n0414_, n0415_, n0002_[40]);
  AND2(rst, inRight[41], n0416_);
  BIC2(ki1[41], rst, n0417_);
  OR2(n0416_, n0417_, n0002_[41]);
  AND2(rst, inRight[42], n0418_);
  BIC2(ki1[42], rst, n0419_);
  OR2(n0418_, n0419_, n0002_[42]);
  AND2(rst, inRight[43], n0420_);
  OR2(n0150_, n0420_, n0002_[43]);
  AND2(rst, inRight[44], n0421_);
  OR2(n0159_, n0421_, n0002_[44]);
  AND2(rst, inRight[45], n0422_);
  OR2(n0166_, n0422_, n0002_[45]);
  AND2(rst, inRight[46], n0423_);
  OR2(n0173_, n0423_, n0002_[46]);
  AND2(rst, inRight[47], n0424_);
  OR2(n0180_, n0424_, n0002_[47]);
  AND2(rst, inRight[48], n0425_);
  OR2(n0187_, n0425_, n0002_[48]);
  AND2(rst, inRight[49], n0426_);
  OR2(n0194_, n0426_, n0002_[49]);
  AND2(rst, inRight[50], n0427_);
  OR2(n0201_, n0427_, n0002_[50]);
  AND2(rst, inRight[51], n0428_);
  OR2(n0208_, n0428_, n0002_[51]);
  AND2(rst, inRight[52], n0429_);
  OR2(n0215_, n0429_, n0002_[52]);
  AND2(rst, inRight[53], n0430_);
  OR2(n0222_, n0430_, n0002_[53]);
  AND2(rst, inRight[54], n0431_);
  OR2(n0229_, n0431_, n0002_[54]);
  AND2(rst, inRight[55], n0432_);
  OR2(n0236_, n0432_, n0002_[55]);
  AND2(rst, inRight[56], n0433_);
  OR2(n0243_, n0433_, n0002_[56]);
  AND2(rst, inRight[57], n0434_);
  OR2(n0250_, n0434_, n0002_[57]);
  AND2(rst, inRight[58], n0435_);
  OR2(n0257_, n0435_, n0002_[58]);
  AND2(rst, inRight[59], n0436_);
  OR2(n0264_, n0436_, n0002_[59]);
  AND2(rst, inRight[60], n0437_);
  OR2(n0271_, n0437_, n0002_[60]);
  AND2(rst, inRight[61], n0438_);
  OR2(n0278_, n0438_, n0002_[61]);
  AND2(rst, inRight[62], n0439_);
  OR2(n0285_, n0439_, n0002_[62]);
  AND2(rst, inRight[63], n0440_);
  OR2(n0292_, n0440_, n0002_[63]);
  ORN2(inLeft[0], rst, n0441_);
  XOR2(ki1[4], ki[0], n0442_);
  XOR2(ki1[3], z_reg[0], n0443_);
  XOR2(n0442_, n0443_, n0444_);
  OR2(rst, n0444_, n0445_);
  AND2(n0441_, n0445_, n0001_[0]);
  XOR2(ki1[5], ki[1], n0446_);
  XOR2(ki1[4], n0446_, n0447_);
  OR2(rst, n0447_, n0448_);
  ORN2(inLeft[1], rst, n0449_);
  AND2(n0448_, n0449_, n0001_[1]);
  AND2(rst, inLeft[2], n0450_);
  XOR2(ki1[6], ki[2], n0451_);
  XOR2(ki1[5], n0451_, n0452_);
  BIC2(n0147_, n0452_, n0453_);
  OR2(n0450_, n0453_, n0001_[2]);
  AND2(rst, inLeft[3], n0454_);
  XOR2(ki1[7], ki[3], n0455_);
  XOR2(ki1[6], n0455_, n0456_);
  BIC2(n0147_, n0456_, n0457_);
  OR2(n0454_, n0457_, n0001_[3]);
  AND2(rst, inLeft[4], n0458_);
  XOR2(ki1[8], ki[4], n0459_);
  XOR2(ki1[7], n0459_, n0004_);
  BIC2(n0147_, n0004_, n0005_);
  OR2(n0458_, n0005_, n0001_[4]);
  AND2(rst, inLeft[5], n0006_);
  XOR2(ki1[9], ki[5], n0007_);
  XOR2(ki1[8], n0007_, n0008_);
  BIC2(n0147_, n0008_, n0009_);
  OR2(n0006_, n0009_, n0001_[5]);
  AND2(rst, inLeft[6], n0010_);
  XOR2(ki1[10], ki[6], n0011_);
  XOR2(ki1[9], n0011_, n0012_);
  BIC2(n0147_, n0012_, n0013_);
  OR2(n0010_, n0013_, n0001_[6]);
  AND2(rst, inLeft[7], n0014_);
  XOR2(ki1[11], ki[7], n0015_);
  XOR2(ki1[10], n0015_, n0016_);
  BIC2(n0147_, n0016_, n0017_);
  OR2(n0014_, n0017_, n0001_[7]);
  AND2(rst, inLeft[8], n0018_);
  XOR2(ki1[12], ki[8], n0019_);
  XOR2(ki1[11], n0019_, n0020_);
  BIC2(n0147_, n0020_, n0021_);
  OR2(n0018_, n0021_, n0001_[8]);
  AND2(rst, inLeft[9], n0022_);
  XOR2(ki1[13], ki[9], n0023_);
  XOR2(ki1[12], n0023_, n0024_);
  BIC2(n0147_, n0024_, n0025_);
  OR2(n0022_, n0025_, n0001_[9]);
  AND2(rst, inLeft[10], n0026_);
  XOR2(ki1[14], ki[10], n0027_);
  XOR2(ki1[13], n0027_, n0028_);
  BIC2(n0147_, n0028_, n0029_);
  OR2(n0026_, n0029_, n0001_[10]);
  AND2(rst, inLeft[11], n0030_);
  XOR2(ki1[15], ki[11], n0031_);
  XOR2(ki1[14], n0031_, n0032_);
  BIC2(n0147_, n0032_, n0033_);
  OR2(n0030_, n0033_, n0001_[11]);
  AND2(rst, inLeft[12], n0034_);
  XOR2(ki1[16], ki[12], n0035_);
  XOR2(ki1[15], n0035_, n0036_);
  BIC2(n0147_, n0036_, n0037_);
  OR2(n0034_, n0037_, n0001_[12]);
  AND2(rst, inLeft[13], n0038_);
  XOR2(ki1[17], ki[13], n0039_);
  XOR2(ki1[16], n0039_, n0040_);
  BIC2(n0147_, n0040_, n0041_);
  OR2(n0038_, n0041_, n0001_[13]);
  AND2(rst, inLeft[14], n0042_);
  XOR2(ki1[18], ki[14], n0043_);
  XOR2(ki1[17], n0043_, n0044_);
  BIC2(n0147_, n0044_, n0045_);
  OR2(n0042_, n0045_, n0001_[14]);
  AND2(rst, inLeft[15], n0046_);
  XOR2(ki1[19], ki[15], n0047_);
  XOR2(ki1[18], n0047_, n0048_);
  BIC2(n0147_, n0048_, n0049_);
  OR2(n0046_, n0049_, n0001_[15]);
  AND2(rst, inLeft[16], n0050_);
  XOR2(ki1[20], ki[16], n0051_);
  XOR2(ki1[19], n0051_, n0052_);
  BIC2(n0147_, n0052_, n0053_);
  OR2(n0050_, n0053_, n0001_[16]);
  AND2(rst, inLeft[17], n0054_);
  XOR2(ki1[21], ki[17], n0055_);
  XOR2(ki1[20], n0055_, n0056_);
  BIC2(n0147_, n0056_, n0057_);
  OR2(n0054_, n0057_, n0001_[17]);
  AND2(rst, inLeft[18], n0058_);
  XOR2(ki1[22], ki[18], n0059_);
  XOR2(ki1[21], n0059_, n0060_);
  BIC2(n0147_, n0060_, n0061_);
  OR2(n0058_, n0061_, n0001_[18]);
  AND2(rst, inLeft[19], n0062_);
  XOR2(ki1[23], ki[19], n0063_);
  XOR2(ki1[22], n0063_, n0064_);
  BIC2(n0147_, n0064_, n0065_);
  OR2(n0062_, n0065_, n0001_[19]);
  AND2(rst, inLeft[20], n0066_);
  XOR2(ki1[24], ki[20], n0067_);
  XOR2(ki1[23], n0067_, n0068_);
  BIC2(n0147_, n0068_, n0069_);
  OR2(n0066_, n0069_, n0001_[20]);
  AND2(rst, inLeft[21], n0070_);
  XOR2(ki1[25], ki[21], n0071_);
  XOR2(ki1[24], n0071_, n0072_);
  BIC2(n0147_, n0072_, n0073_);
  OR2(n0070_, n0073_, n0001_[21]);
  AND2(rst, inLeft[22], n0074_);
  XOR2(ki1[26], ki[22], n0075_);
  XOR2(ki1[25], n0075_, n0076_);
  BIC2(n0147_, n0076_, n0077_);
  OR2(n0074_, n0077_, n0001_[22]);
  AND2(rst, inLeft[23], n0078_);
  XOR2(ki1[27], ki[23], n0079_);
  XOR2(ki1[26], n0079_, n0080_);
  BIC2(n0147_, n0080_, n0081_);
  OR2(n0078_, n0081_, n0001_[23]);
  AND2(rst, inLeft[24], n0082_);
  XOR2(ki1[28], ki[24], n0083_);
  XOR2(ki1[27], n0083_, n0084_);
  BIC2(n0147_, n0084_, n0085_);
  OR2(n0082_, n0085_, n0001_[24]);
  AND2(rst, inLeft[25], n0086_);
  XOR2(ki1[29], ki[25], n0087_);
  XOR2(ki1[28], n0087_, n0088_);
  BIC2(n0147_, n0088_, n0089_);
  OR2(n0086_, n0089_, n0001_[25]);
  AND2(rst, inLeft[26], n0090_);
  XOR2(ki1[30], ki[26], n0091_);
  XOR2(ki1[29], n0091_, n0092_);
  BIC2(n0147_, n0092_, n0093_);
  OR2(n0090_, n0093_, n0001_[26]);
  AND2(rst, inLeft[27], n0094_);
  XOR2(ki1[31], ki[27], n0095_);
  XOR2(ki1[30], n0095_, n0096_);
  BIC2(n0147_, n0096_, n0097_);
  OR2(n0094_, n0097_, n0001_[27]);
  AND2(rst, inLeft[28], n0098_);
  XOR2(ki1[32], ki[28], n0099_);
  XOR2(ki1[31], n0099_, n0100_);
  BIC2(n0147_, n0100_, n0101_);
  OR2(n0098_, n0101_, n0001_[28]);
  AND2(rst, inLeft[29], n0102_);
  XOR2(ki1[33], ki[29], n0103_);
  XOR2(ki1[32], n0103_, n0104_);
  BIC2(n0147_, n0104_, n0105_);
  OR2(n0102_, n0105_, n0001_[29]);
  AND2(rst, inLeft[30], n0106_);
  XOR2(ki1[34], ki[30], n0107_);
  XOR2(ki1[33], n0107_, n0108_);
  BIC2(n0147_, n0108_, n0109_);
  OR2(n0106_, n0109_, n0001_[30]);
  AND2(rst, inLeft[31], n0110_);
  XOR2(ki1[35], ki[31], n0111_);
  XOR2(ki1[34], n0111_, n0112_);
  BIC2(n0147_, n0112_, n0113_);
  OR2(n0110_, n0113_, n0001_[31]);
  AND2(rst, inLeft[32], n0114_);
  XOR2(ki1[36], ki[32], n0115_);
  XOR2(ki1[35], n0115_, n0116_);
  BIC2(n0147_, n0116_, n0117_);
  OR2(n0114_, n0117_, n0001_[32]);
  AND2(rst, inLeft[33], n0118_);
  XOR2(ki1[37], ki[33], n0119_);
  XOR2(ki1[36], n0119_, n0120_);
  BIC2(n0147_, n0120_, n0121_);
  OR2(n0118_, n0121_, n0001_[33]);
  AND2(rst, inLeft[34], n0122_);
  XOR2(ki1[38], ki[34], n0123_);
  XOR2(ki1[37], n0123_, n0124_);
  BIC2(n0147_, n0124_, n0125_);
  OR2(n0122_, n0125_, n0001_[34]);
  AND2(rst, inLeft[35], n0126_);
  XOR2(ki1[39], ki[35], n0127_);
  XOR2(ki1[38], n0127_, n0128_);
  BIC2(n0147_, n0128_, n0129_);
  OR2(n0126_, n0129_, n0001_[35]);
  AND2(rst, inLeft[36], n0130_);
  XOR2(ki1[40], ki[36], n0131_);
  XOR2(ki1[39], n0131_, n0132_);
  BIC2(n0147_, n0132_, n0133_);
  OR2(n0130_, n0133_, n0001_[36]);
  AND2(rst, inLeft[37], n0134_);
  XOR2(ki1[41], ki[37], n0135_);
  XOR2(ki1[40], n0135_, n0136_);
  BIC2(n0147_, n0136_, n0137_);
  OR2(n0134_, n0137_, n0001_[37]);
  AND2(rst, inLeft[38], n0138_);
  XOR2(ki1[42], ki[38], n0139_);
  XOR2(ki1[41], n0139_, n0140_);
  BIC2(n0147_, n0140_, n0141_);
  OR2(n0138_, n0141_, n0001_[38]);
  XOR2(ki1[42], ki[39], n0142_);
  ORN2(n0153_, n0142_, n0143_);
  ORN2(n0142_, n0150_, n0144_);
  ORN2(inLeft[39], rst, n0145_);
  AND2(n0143_, n0144_, n0146_);
  AND2(n0145_, n0146_, n0001_[39]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[0], z_reg[0]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[1], z_reg[1]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[2], z_reg[2]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[3], z_reg[3]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[4], z_reg[4]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[5], z_reg[5]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[6], z_reg[6]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[7], z_reg[7]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[8], z_reg[8]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[9], z_reg[9]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[10], z_reg[10]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[11], z_reg[11]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[12], z_reg[12]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[13], z_reg[13]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[14], z_reg[14]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[15], z_reg[15]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[16], z_reg[16]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[17], z_reg[17]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[18], z_reg[18]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[19], z_reg[19]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[20], z_reg[20]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[21], z_reg[21]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[22], z_reg[22]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[23], z_reg[23]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[24], z_reg[24]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[25], z_reg[25]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[26], z_reg[26]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[27], z_reg[27]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[28], z_reg[28]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[29], z_reg[29]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[30], z_reg[30]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[31], z_reg[31]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[32], z_reg[32]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[33], z_reg[33]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[34], z_reg[34]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[35], z_reg[35]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[36], z_reg[36]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[37], z_reg[37]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[38], z_reg[38]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[39], z_reg[39]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[40], z_reg[40]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[41], z_reg[41]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[42], z_reg[42]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[43], z_reg[43]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[44], z_reg[44]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[45], z_reg[45]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[46], z_reg[46]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[47], z_reg[47]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[48], z_reg[48]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[49], z_reg[49]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[50], z_reg[50]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[51], z_reg[51]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[52], z_reg[52]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[53], z_reg[53]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[54], z_reg[54]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[55], z_reg[55]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[56], z_reg[56]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[57], z_reg[57]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[58], z_reg[58]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[59], z_reg[59]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[60], z_reg[60]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0003_[61], z_reg[61]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[0], ki1[0]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[1], ki1[1]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[2], ki1[2]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[3], ki1[3]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[4], ki1[4]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[5], ki1[5]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[6], ki1[6]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[7], ki1[7]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[8], ki1[8]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[9], ki1[9]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[10], ki1[10]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[11], ki1[11]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[12], ki1[12]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[13], ki1[13]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[14], ki1[14]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[15], ki1[15]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[16], ki1[16]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[17], ki1[17]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[18], ki1[18]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[19], ki1[19]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[20], ki1[20]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[21], ki1[21]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[22], ki1[22]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[23], ki1[23]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[24], ki1[24]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[25], ki1[25]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[26], ki1[26]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[27], ki1[27]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[28], ki1[28]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[29], ki1[29]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[30], ki1[30]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[31], ki1[31]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[32], ki1[32]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[33], ki1[33]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[34], ki1[34]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[35], ki1[35]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[36], ki1[36]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[37], ki1[37]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[38], ki1[38]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[39], ki1[39]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[40], ki1[40]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[41], ki1[41]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[42], ki1[42]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[43], ki1[43]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[44], ki1[44]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[45], ki1[45]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[46], ki1[46]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[47], ki1[47]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[48], ki1[48]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[49], ki1[49]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[50], ki1[50]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[51], ki1[51]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[52], ki1[52]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[53], ki1[53]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[54], ki1[54]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[55], ki1[55]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[56], ki1[56]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[57], ki1[57]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[58], ki1[58]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[59], ki1[59]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[60], ki1[60]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[61], ki1[61]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[62], ki1[62]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0001_[63], ki1[63]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[0], ki[0]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[1], ki[1]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[2], ki[2]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[3], ki[3]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[4], ki[4]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[5], ki[5]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[6], ki[6]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[7], ki[7]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[8], ki[8]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[9], ki[9]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[10], ki[10]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[11], ki[11]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[12], ki[12]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[13], ki[13]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[14], ki[14]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[15], ki[15]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[16], ki[16]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[17], ki[17]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[18], ki[18]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[19], ki[19]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[20], ki[20]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[21], ki[21]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[22], ki[22]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[23], ki[23]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[24], ki[24]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[25], ki[25]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[26], ki[26]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[27], ki[27]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[28], ki[28]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[29], ki[29]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[30], ki[30]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[31], ki[31]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[32], ki[32]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[33], ki[33]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[34], ki[34]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[35], ki[35]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[36], ki[36]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[37], ki[37]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[38], ki[38]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[39], ki[39]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[40], ki[40]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[41], ki[41]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[42], ki[42]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[43], ki[43]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[44], ki[44]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[45], ki[45]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[46], ki[46]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[47], ki[47]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[48], ki[48]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[49], ki[49]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[50], ki[50]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[51], ki[51]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[52], ki[52]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[53], ki[53]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[54], ki[54]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[55], ki[55]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[56], ki[56]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[57], ki[57]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[58], ki[58]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[59], ki[59]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[60], ki[60]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[61], ki[61]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[62], ki[62]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0002_[63], ki[63]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[0], cnt[0]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[1], cnt[1]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[2], cnt[2]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[3], cnt[3]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[4], cnt[4]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[5], cnt[5]);
  /* src = "simon_key2.v:56" */
  DFF(clk, n0000_[6], cnt[6]);

  out[0] = ki[0];
  out[1] = ki[1];
  out[2] = ki[2];
  out[3] = ki[3];
  out[4] = ki[4];
  out[5] = ki[5];
  out[6] = ki[6];
  out[7] = ki[7];
  out[8] = ki[8];
  out[9] = ki[9];
  out[10] = ki[10];
  out[11] = ki[11];
  out[12] = ki[12];
  out[13] = ki[13];
  out[14] = ki[14];
  out[15] = ki[15];
  out[16] = ki[16];
  out[17] = ki[17];
  out[18] = ki[18];
  out[19] = ki[19];
  out[20] = ki[20];
  out[21] = ki[21];
  out[22] = ki[22];
  out[23] = ki[23];
  out[24] = ki[24];
  out[25] = ki[25];
  out[26] = ki[26];
  out[27] = ki[27];
  out[28] = ki[28];
  out[29] = ki[29];
  out[30] = ki[30];
  out[31] = ki[31];
  out[32] = ki[32];
  out[33] = ki[33];
  out[34] = ki[34];
  out[35] = ki[35];
  out[36] = ki[36];
  out[37] = ki[37];
  out[38] = ki[38];
  out[39] = ki[39];
  out[40] = ki[40];
  out[41] = ki[41];
  out[42] = ki[42];
  out[43] = ki[43];
  out[44] = ki[44];
  out[45] = ki[45];
  out[46] = ki[46];
  out[47] = ki[47];
  out[48] = ki[48];
  out[49] = ki[49];
  out[50] = ki[50];
  out[51] = ki[51];
  out[52] = ki[52];
  out[53] = ki[53];
  out[54] = ki[54];
  out[55] = ki[55];
  out[56] = ki[56];
  out[57] = ki[57];
  out[58] = ki[58];
  out[59] = ki[59];
  out[60] = ki[60];
  out[61] = ki[61];
  out[62] = ki[62];
  out[63] = ki[63];

  return;
}


#endif /* SIMON_KEY_H_ */
