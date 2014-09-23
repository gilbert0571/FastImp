/*
 * Copyright (c) 1997-1999 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Nov  7 20:43:59 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -real2hc 32 */

/*
 * This function contains 156 FP additions, 42 FP multiplications,
 * (or, 140 additions, 26 multiplications, 16 fused multiply/add),
 * 46 stack variables, and 64 memory accesses
 */
static const fftw_real K195090322 = FFTW_KONST(+0.195090322016128267848284868477022240927691618);
static const fftw_real K980785280 = FFTW_KONST(+0.980785280403230449126182236134239036973933731);
static const fftw_real K555570233 = FFTW_KONST(+0.555570233019602224742830813948532874374937191);
static const fftw_real K831469612 = FFTW_KONST(+0.831469612302545237078788377617905756738560812);
static const fftw_real K382683432 = FFTW_KONST(+0.382683432365089771728459984030398866761344562);
static const fftw_real K923879532 = FFTW_KONST(+0.923879532511286756128183189396788286822416626);
static const fftw_real K707106781 = FFTW_KONST(+0.707106781186547524400844362104849039284835938);

/*
 * Generator Id's : 
 * $Id: frc_32.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: frc_32.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: frc_32.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 */

void fftw_real2hc_32(const fftw_real *input, fftw_real *real_output, fftw_real *imag_output, int istride, int real_ostride, int imag_ostride)
{
     fftw_real tmp7;
     fftw_real tmp135;
     fftw_real tmp31;
     fftw_real tmp83;
     fftw_real tmp14;
     fftw_real tmp148;
     fftw_real tmp34;
     fftw_real tmp82;
     fftw_real tmp123;
     fftw_real tmp143;
     fftw_real tmp71;
     fftw_real tmp99;
     fftw_real tmp126;
     fftw_real tmp144;
     fftw_real tmp76;
     fftw_real tmp100;
     fftw_real tmp22;
     fftw_real tmp136;
     fftw_real tmp38;
     fftw_real tmp80;
     fftw_real tmp29;
     fftw_real tmp137;
     fftw_real tmp41;
     fftw_real tmp79;
     fftw_real tmp116;
     fftw_real tmp140;
     fftw_real tmp54;
     fftw_real tmp96;
     fftw_real tmp119;
     fftw_real tmp141;
     fftw_real tmp59;
     fftw_real tmp97;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp2;
	  fftw_real tmp3;
	  fftw_real tmp4;
	  fftw_real tmp5;
	  fftw_real tmp6;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = input[0];
	  tmp2 = input[16 * istride];
	  tmp3 = tmp1 + tmp2;
	  tmp4 = input[8 * istride];
	  tmp5 = input[24 * istride];
	  tmp6 = tmp4 + tmp5;
	  tmp7 = tmp3 + tmp6;
	  tmp135 = tmp3 - tmp6;
	  tmp31 = tmp1 - tmp2;
	  tmp83 = tmp4 - tmp5;
     }
     {
	  fftw_real tmp10;
	  fftw_real tmp32;
	  fftw_real tmp13;
	  fftw_real tmp33;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp8;
	       fftw_real tmp9;
	       fftw_real tmp11;
	       fftw_real tmp12;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp8 = input[4 * istride];
	       tmp9 = input[20 * istride];
	       tmp10 = tmp8 + tmp9;
	       tmp32 = tmp8 - tmp9;
	       tmp11 = input[28 * istride];
	       tmp12 = input[12 * istride];
	       tmp13 = tmp11 + tmp12;
	       tmp33 = tmp11 - tmp12;
	  }
	  tmp14 = tmp10 + tmp13;
	  tmp148 = tmp13 - tmp10;
	  tmp34 = K707106781 * (tmp32 + tmp33);
	  tmp82 = K707106781 * (tmp33 - tmp32);
     }
     {
	  fftw_real tmp63;
	  fftw_real tmp121;
	  fftw_real tmp75;
	  fftw_real tmp122;
	  fftw_real tmp66;
	  fftw_real tmp124;
	  fftw_real tmp69;
	  fftw_real tmp125;
	  fftw_real tmp70;
	  fftw_real tmp72;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp61;
	       fftw_real tmp62;
	       fftw_real tmp73;
	       fftw_real tmp74;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp61 = input[31 * istride];
	       tmp62 = input[15 * istride];
	       tmp63 = tmp61 - tmp62;
	       tmp121 = tmp61 + tmp62;
	       tmp73 = input[7 * istride];
	       tmp74 = input[23 * istride];
	       tmp75 = tmp73 - tmp74;
	       tmp122 = tmp73 + tmp74;
	  }
	  {
	       fftw_real tmp64;
	       fftw_real tmp65;
	       fftw_real tmp67;
	       fftw_real tmp68;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp64 = input[3 * istride];
	       tmp65 = input[19 * istride];
	       tmp66 = tmp64 - tmp65;
	       tmp124 = tmp64 + tmp65;
	       tmp67 = input[27 * istride];
	       tmp68 = input[11 * istride];
	       tmp69 = tmp67 - tmp68;
	       tmp125 = tmp67 + tmp68;
	  }
	  tmp123 = tmp121 + tmp122;
	  tmp143 = tmp121 - tmp122;
	  tmp70 = K707106781 * (tmp66 + tmp69);
	  tmp71 = tmp63 + tmp70;
	  tmp99 = tmp63 - tmp70;
	  tmp126 = tmp124 + tmp125;
	  tmp144 = tmp125 - tmp124;
	  tmp72 = K707106781 * (tmp69 - tmp66);
	  tmp76 = tmp72 - tmp75;
	  tmp100 = tmp75 + tmp72;
     }
     {
	  fftw_real tmp18;
	  fftw_real tmp36;
	  fftw_real tmp21;
	  fftw_real tmp37;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp16;
	       fftw_real tmp17;
	       fftw_real tmp19;
	       fftw_real tmp20;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp16 = input[2 * istride];
	       tmp17 = input[18 * istride];
	       tmp18 = tmp16 + tmp17;
	       tmp36 = tmp16 - tmp17;
	       tmp19 = input[10 * istride];
	       tmp20 = input[26 * istride];
	       tmp21 = tmp19 + tmp20;
	       tmp37 = tmp19 - tmp20;
	  }
	  tmp22 = tmp18 + tmp21;
	  tmp136 = tmp18 - tmp21;
	  tmp38 = (K923879532 * tmp36) - (K382683432 * tmp37);
	  tmp80 = (K382683432 * tmp36) + (K923879532 * tmp37);
     }
     {
	  fftw_real tmp25;
	  fftw_real tmp39;
	  fftw_real tmp28;
	  fftw_real tmp40;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp23;
	       fftw_real tmp24;
	       fftw_real tmp26;
	       fftw_real tmp27;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp23 = input[30 * istride];
	       tmp24 = input[14 * istride];
	       tmp25 = tmp23 + tmp24;
	       tmp39 = tmp23 - tmp24;
	       tmp26 = input[6 * istride];
	       tmp27 = input[22 * istride];
	       tmp28 = tmp26 + tmp27;
	       tmp40 = tmp26 - tmp27;
	  }
	  tmp29 = tmp25 + tmp28;
	  tmp137 = tmp25 - tmp28;
	  tmp41 = (K923879532 * tmp39) + (K382683432 * tmp40);
	  tmp79 = (K382683432 * tmp39) - (K923879532 * tmp40);
     }
     {
	  fftw_real tmp46;
	  fftw_real tmp114;
	  fftw_real tmp58;
	  fftw_real tmp115;
	  fftw_real tmp49;
	  fftw_real tmp117;
	  fftw_real tmp52;
	  fftw_real tmp118;
	  fftw_real tmp53;
	  fftw_real tmp55;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp44;
	       fftw_real tmp45;
	       fftw_real tmp56;
	       fftw_real tmp57;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp44 = input[istride];
	       tmp45 = input[17 * istride];
	       tmp46 = tmp44 - tmp45;
	       tmp114 = tmp44 + tmp45;
	       tmp56 = input[9 * istride];
	       tmp57 = input[25 * istride];
	       tmp58 = tmp56 - tmp57;
	       tmp115 = tmp56 + tmp57;
	  }
	  {
	       fftw_real tmp47;
	       fftw_real tmp48;
	       fftw_real tmp50;
	       fftw_real tmp51;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp47 = input[5 * istride];
	       tmp48 = input[21 * istride];
	       tmp49 = tmp47 - tmp48;
	       tmp117 = tmp47 + tmp48;
	       tmp50 = input[29 * istride];
	       tmp51 = input[13 * istride];
	       tmp52 = tmp50 - tmp51;
	       tmp118 = tmp50 + tmp51;
	  }
	  tmp116 = tmp114 + tmp115;
	  tmp140 = tmp114 - tmp115;
	  tmp53 = K707106781 * (tmp49 + tmp52);
	  tmp54 = tmp46 + tmp53;
	  tmp96 = tmp46 - tmp53;
	  tmp119 = tmp117 + tmp118;
	  tmp141 = tmp118 - tmp117;
	  tmp55 = K707106781 * (tmp52 - tmp49);
	  tmp59 = tmp55 - tmp58;
	  tmp97 = tmp58 + tmp55;
     }
     {
	  fftw_real tmp15;
	  fftw_real tmp30;
	  fftw_real tmp131;
	  fftw_real tmp132;
	  fftw_real tmp133;
	  fftw_real tmp134;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp15 = tmp7 + tmp14;
	  tmp30 = tmp22 + tmp29;
	  tmp131 = tmp15 + tmp30;
	  tmp132 = tmp116 + tmp119;
	  tmp133 = tmp123 + tmp126;
	  tmp134 = tmp132 + tmp133;
	  real_output[8 * real_ostride] = tmp15 - tmp30;
	  imag_output[8 * imag_ostride] = tmp133 - tmp132;
	  real_output[16 * real_ostride] = tmp131 - tmp134;
	  real_output[0] = tmp131 + tmp134;
     }
     {
	  fftw_real tmp113;
	  fftw_real tmp129;
	  fftw_real tmp128;
	  fftw_real tmp130;
	  fftw_real tmp120;
	  fftw_real tmp127;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp113 = tmp7 - tmp14;
	  tmp129 = tmp29 - tmp22;
	  tmp120 = tmp116 - tmp119;
	  tmp127 = tmp123 - tmp126;
	  tmp128 = K707106781 * (tmp120 + tmp127);
	  tmp130 = K707106781 * (tmp127 - tmp120);
	  real_output[12 * real_ostride] = tmp113 - tmp128;
	  real_output[4 * real_ostride] = tmp113 + tmp128;
	  imag_output[4 * imag_ostride] = tmp129 + tmp130;
	  imag_output[12 * imag_ostride] = tmp130 - tmp129;
     }
     {
	  fftw_real tmp139;
	  fftw_real tmp155;
	  fftw_real tmp149;
	  fftw_real tmp151;
	  fftw_real tmp146;
	  fftw_real tmp150;
	  fftw_real tmp154;
	  fftw_real tmp156;
	  fftw_real tmp138;
	  fftw_real tmp147;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp138 = K707106781 * (tmp136 + tmp137);
	  tmp139 = tmp135 + tmp138;
	  tmp155 = tmp135 - tmp138;
	  tmp147 = K707106781 * (tmp137 - tmp136);
	  tmp149 = tmp147 - tmp148;
	  tmp151 = tmp148 + tmp147;
	  {
	       fftw_real tmp142;
	       fftw_real tmp145;
	       fftw_real tmp152;
	       fftw_real tmp153;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp142 = (K923879532 * tmp140) + (K382683432 * tmp141);
	       tmp145 = (K923879532 * tmp143) - (K382683432 * tmp144);
	       tmp146 = tmp142 + tmp145;
	       tmp150 = tmp145 - tmp142;
	       tmp152 = (K923879532 * tmp141) - (K382683432 * tmp140);
	       tmp153 = (K382683432 * tmp143) + (K923879532 * tmp144);
	       tmp154 = tmp152 + tmp153;
	       tmp156 = tmp153 - tmp152;
	  }
	  real_output[14 * real_ostride] = tmp139 - tmp146;
	  real_output[2 * real_ostride] = tmp139 + tmp146;
	  imag_output[6 * imag_ostride] = tmp149 + tmp150;
	  imag_output[10 * imag_ostride] = tmp150 - tmp149;
	  imag_output[2 * imag_ostride] = tmp151 + tmp154;
	  imag_output[14 * imag_ostride] = tmp154 - tmp151;
	  real_output[10 * real_ostride] = tmp155 - tmp156;
	  real_output[6 * real_ostride] = tmp155 + tmp156;
     }
     {
	  fftw_real tmp95;
	  fftw_real tmp111;
	  fftw_real tmp110;
	  fftw_real tmp112;
	  fftw_real tmp102;
	  fftw_real tmp106;
	  fftw_real tmp105;
	  fftw_real tmp107;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp93;
	       fftw_real tmp94;
	       fftw_real tmp108;
	       fftw_real tmp109;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp93 = tmp31 - tmp34;
	       tmp94 = tmp80 + tmp79;
	       tmp95 = tmp93 + tmp94;
	       tmp111 = tmp93 - tmp94;
	       tmp108 = (K831469612 * tmp97) - (K555570233 * tmp96);
	       tmp109 = (K555570233 * tmp99) + (K831469612 * tmp100);
	       tmp110 = tmp108 + tmp109;
	       tmp112 = tmp109 - tmp108;
	  }
	  {
	       fftw_real tmp98;
	       fftw_real tmp101;
	       fftw_real tmp103;
	       fftw_real tmp104;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp98 = (K831469612 * tmp96) + (K555570233 * tmp97);
	       tmp101 = (K831469612 * tmp99) - (K555570233 * tmp100);
	       tmp102 = tmp98 + tmp101;
	       tmp106 = tmp101 - tmp98;
	       tmp103 = tmp41 - tmp38;
	       tmp104 = tmp83 + tmp82;
	       tmp105 = tmp103 - tmp104;
	       tmp107 = tmp104 + tmp103;
	  }
	  real_output[13 * real_ostride] = tmp95 - tmp102;
	  real_output[3 * real_ostride] = tmp95 + tmp102;
	  imag_output[5 * imag_ostride] = tmp105 + tmp106;
	  imag_output[11 * imag_ostride] = tmp106 - tmp105;
	  imag_output[3 * imag_ostride] = tmp107 + tmp110;
	  imag_output[13 * imag_ostride] = tmp110 - tmp107;
	  real_output[11 * real_ostride] = tmp111 - tmp112;
	  real_output[5 * real_ostride] = tmp111 + tmp112;
     }
     {
	  fftw_real tmp43;
	  fftw_real tmp91;
	  fftw_real tmp90;
	  fftw_real tmp92;
	  fftw_real tmp78;
	  fftw_real tmp86;
	  fftw_real tmp85;
	  fftw_real tmp87;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp35;
	       fftw_real tmp42;
	       fftw_real tmp88;
	       fftw_real tmp89;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp35 = tmp31 + tmp34;
	       tmp42 = tmp38 + tmp41;
	       tmp43 = tmp35 + tmp42;
	       tmp91 = tmp35 - tmp42;
	       tmp88 = (K980785280 * tmp59) - (K195090322 * tmp54);
	       tmp89 = (K195090322 * tmp71) + (K980785280 * tmp76);
	       tmp90 = tmp88 + tmp89;
	       tmp92 = tmp89 - tmp88;
	  }
	  {
	       fftw_real tmp60;
	       fftw_real tmp77;
	       fftw_real tmp81;
	       fftw_real tmp84;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp60 = (K980785280 * tmp54) + (K195090322 * tmp59);
	       tmp77 = (K980785280 * tmp71) - (K195090322 * tmp76);
	       tmp78 = tmp60 + tmp77;
	       tmp86 = tmp77 - tmp60;
	       tmp81 = tmp79 - tmp80;
	       tmp84 = tmp82 - tmp83;
	       tmp85 = tmp81 - tmp84;
	       tmp87 = tmp84 + tmp81;
	  }
	  real_output[15 * real_ostride] = tmp43 - tmp78;
	  real_output[real_ostride] = tmp43 + tmp78;
	  imag_output[7 * imag_ostride] = tmp85 + tmp86;
	  imag_output[9 * imag_ostride] = tmp86 - tmp85;
	  imag_output[imag_ostride] = tmp87 + tmp90;
	  imag_output[15 * imag_ostride] = tmp90 - tmp87;
	  real_output[9 * real_ostride] = tmp91 - tmp92;
	  real_output[7 * real_ostride] = tmp91 + tmp92;
     }
}

fftw_codelet_desc fftw_real2hc_32_desc =
{
     "fftw_real2hc_32",
     (void (*)()) fftw_real2hc_32,
     32,
     FFTW_FORWARD,
     FFTW_REAL2HC,
     706,
     0,
     (const int *) 0,
};
