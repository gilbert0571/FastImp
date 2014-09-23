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
/* Generated on Sun Nov  7 20:43:47 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 9 */

/*
 * This function contains 80 FP additions, 40 FP multiplications,
 * (or, 60 additions, 20 multiplications, 20 fused multiply/add),
 * 30 stack variables, and 36 memory accesses
 */
static const fftw_real K939692620 = FFTW_KONST(+0.939692620785908384054109277324731469936208134);
static const fftw_real K342020143 = FFTW_KONST(+0.342020143325668733044099614682259580763083368);
static const fftw_real K984807753 = FFTW_KONST(+0.984807753012208059366743024589523013670643252);
static const fftw_real K173648177 = FFTW_KONST(+0.173648177666930348851716626769314796000375677);
static const fftw_real K642787609 = FFTW_KONST(+0.642787609686539326322643409907263432907559884);
static const fftw_real K766044443 = FFTW_KONST(+0.766044443118978035202392650555416673935832457);
static const fftw_real K866025403 = FFTW_KONST(+0.866025403784438646763723170752936183471402627);
static const fftw_real K500000000 = FFTW_KONST(+0.500000000000000000000000000000000000000000000);

/*
 * Generator Id's : 
 * $Id: fn_9.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fn_9.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fn_9.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 */

void fftw_no_twiddle_9(const fftw_complex *input, fftw_complex *output, int istride, int ostride)
{
     fftw_real tmp5;
     fftw_real tmp17;
     fftw_real tmp50;
     fftw_real tmp20;
     fftw_real tmp78;
     fftw_real tmp53;
     fftw_real tmp10;
     fftw_real tmp26;
     fftw_real tmp58;
     fftw_real tmp74;
     fftw_real tmp31;
     fftw_real tmp59;
     fftw_real tmp15;
     fftw_real tmp37;
     fftw_real tmp62;
     fftw_real tmp75;
     fftw_real tmp42;
     fftw_real tmp61;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp2;
	  fftw_real tmp3;
	  fftw_real tmp4;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = c_re(input[0]);
	  tmp2 = c_re(input[3 * istride]);
	  tmp3 = c_re(input[6 * istride]);
	  tmp4 = tmp2 + tmp3;
	  tmp5 = tmp1 + tmp4;
	  tmp17 = tmp1 - (K500000000 * tmp4);
	  tmp50 = K866025403 * (tmp3 - tmp2);
     }
     {
	  fftw_real tmp51;
	  fftw_real tmp18;
	  fftw_real tmp19;
	  fftw_real tmp52;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp51 = c_im(input[0]);
	  tmp18 = c_im(input[3 * istride]);
	  tmp19 = c_im(input[6 * istride]);
	  tmp52 = tmp18 + tmp19;
	  tmp20 = K866025403 * (tmp18 - tmp19);
	  tmp78 = tmp51 + tmp52;
	  tmp53 = tmp51 - (K500000000 * tmp52);
     }
     {
	  fftw_real tmp6;
	  fftw_real tmp28;
	  fftw_real tmp9;
	  fftw_real tmp27;
	  fftw_real tmp25;
	  fftw_real tmp29;
	  fftw_real tmp22;
	  fftw_real tmp30;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp6 = c_re(input[istride]);
	  tmp28 = c_im(input[istride]);
	  {
	       fftw_real tmp7;
	       fftw_real tmp8;
	       fftw_real tmp23;
	       fftw_real tmp24;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp7 = c_re(input[4 * istride]);
	       tmp8 = c_re(input[7 * istride]);
	       tmp9 = tmp7 + tmp8;
	       tmp27 = K866025403 * (tmp8 - tmp7);
	       tmp23 = c_im(input[4 * istride]);
	       tmp24 = c_im(input[7 * istride]);
	       tmp25 = K866025403 * (tmp23 - tmp24);
	       tmp29 = tmp23 + tmp24;
	  }
	  tmp10 = tmp6 + tmp9;
	  tmp22 = tmp6 - (K500000000 * tmp9);
	  tmp26 = tmp22 + tmp25;
	  tmp58 = tmp22 - tmp25;
	  tmp74 = tmp28 + tmp29;
	  tmp30 = tmp28 - (K500000000 * tmp29);
	  tmp31 = tmp27 + tmp30;
	  tmp59 = tmp30 - tmp27;
     }
     {
	  fftw_real tmp11;
	  fftw_real tmp39;
	  fftw_real tmp14;
	  fftw_real tmp38;
	  fftw_real tmp36;
	  fftw_real tmp40;
	  fftw_real tmp33;
	  fftw_real tmp41;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp11 = c_re(input[2 * istride]);
	  tmp39 = c_im(input[2 * istride]);
	  {
	       fftw_real tmp12;
	       fftw_real tmp13;
	       fftw_real tmp34;
	       fftw_real tmp35;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp12 = c_re(input[5 * istride]);
	       tmp13 = c_re(input[8 * istride]);
	       tmp14 = tmp12 + tmp13;
	       tmp38 = K866025403 * (tmp13 - tmp12);
	       tmp34 = c_im(input[5 * istride]);
	       tmp35 = c_im(input[8 * istride]);
	       tmp36 = K866025403 * (tmp34 - tmp35);
	       tmp40 = tmp34 + tmp35;
	  }
	  tmp15 = tmp11 + tmp14;
	  tmp33 = tmp11 - (K500000000 * tmp14);
	  tmp37 = tmp33 + tmp36;
	  tmp62 = tmp33 - tmp36;
	  tmp75 = tmp39 + tmp40;
	  tmp41 = tmp39 - (K500000000 * tmp40);
	  tmp42 = tmp38 + tmp41;
	  tmp61 = tmp41 - tmp38;
     }
     {
	  fftw_real tmp76;
	  fftw_real tmp16;
	  fftw_real tmp73;
	  fftw_real tmp77;
	  fftw_real tmp79;
	  fftw_real tmp80;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp76 = K866025403 * (tmp74 - tmp75);
	  tmp16 = tmp10 + tmp15;
	  tmp73 = tmp5 - (K500000000 * tmp16);
	  c_re(output[0]) = tmp5 + tmp16;
	  c_re(output[3 * ostride]) = tmp73 + tmp76;
	  c_re(output[6 * ostride]) = tmp73 - tmp76;
	  tmp77 = K866025403 * (tmp15 - tmp10);
	  tmp79 = tmp74 + tmp75;
	  tmp80 = tmp78 - (K500000000 * tmp79);
	  c_im(output[3 * ostride]) = tmp77 + tmp80;
	  c_im(output[6 * ostride]) = tmp80 - tmp77;
	  c_im(output[0]) = tmp78 + tmp79;
     }
     {
	  fftw_real tmp21;
	  fftw_real tmp54;
	  fftw_real tmp44;
	  fftw_real tmp49;
	  fftw_real tmp48;
	  fftw_real tmp55;
	  fftw_real tmp45;
	  fftw_real tmp56;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp21 = tmp17 + tmp20;
	  tmp54 = tmp50 + tmp53;
	  {
	       fftw_real tmp32;
	       fftw_real tmp43;
	       fftw_real tmp46;
	       fftw_real tmp47;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp32 = (K766044443 * tmp26) + (K642787609 * tmp31);
	       tmp43 = (K173648177 * tmp37) + (K984807753 * tmp42);
	       tmp44 = tmp32 + tmp43;
	       tmp49 = K866025403 * (tmp43 - tmp32);
	       tmp46 = (K766044443 * tmp31) - (K642787609 * tmp26);
	       tmp47 = (K173648177 * tmp42) - (K984807753 * tmp37);
	       tmp48 = K866025403 * (tmp46 - tmp47);
	       tmp55 = tmp46 + tmp47;
	  }
	  c_re(output[ostride]) = tmp21 + tmp44;
	  tmp45 = tmp21 - (K500000000 * tmp44);
	  c_re(output[7 * ostride]) = tmp45 - tmp48;
	  c_re(output[4 * ostride]) = tmp45 + tmp48;
	  c_im(output[ostride]) = tmp54 + tmp55;
	  tmp56 = tmp54 - (K500000000 * tmp55);
	  c_im(output[4 * ostride]) = tmp49 + tmp56;
	  c_im(output[7 * ostride]) = tmp56 - tmp49;
     }
     {
	  fftw_real tmp57;
	  fftw_real tmp69;
	  fftw_real tmp72;
	  fftw_real tmp66;
	  fftw_real tmp64;
	  fftw_real tmp65;
	  fftw_real tmp71;
	  fftw_real tmp70;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp67;
	       fftw_real tmp68;
	       fftw_real tmp60;
	       fftw_real tmp63;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp57 = tmp17 - tmp20;
	       tmp67 = (K173648177 * tmp59) - (K984807753 * tmp58);
	       tmp68 = (K342020143 * tmp62) + (K939692620 * tmp61);
	       tmp69 = tmp67 - tmp68;
	       tmp72 = K866025403 * (tmp67 + tmp68);
	       tmp66 = tmp53 - tmp50;
	       tmp60 = (K173648177 * tmp58) + (K984807753 * tmp59);
	       tmp63 = (K342020143 * tmp61) - (K939692620 * tmp62);
	       tmp64 = tmp60 + tmp63;
	       tmp65 = K866025403 * (tmp63 - tmp60);
	  }
	  c_re(output[2 * ostride]) = tmp57 + tmp64;
	  tmp71 = tmp57 - (K500000000 * tmp64);
	  c_re(output[8 * ostride]) = tmp71 - tmp72;
	  c_re(output[5 * ostride]) = tmp71 + tmp72;
	  c_im(output[2 * ostride]) = tmp66 + tmp69;
	  tmp70 = tmp66 - (K500000000 * tmp69);
	  c_im(output[5 * ostride]) = tmp65 + tmp70;
	  c_im(output[8 * ostride]) = tmp70 - tmp65;
     }
}

fftw_codelet_desc fftw_no_twiddle_9_desc =
{
     "fftw_no_twiddle_9",
     (void (*)()) fftw_no_twiddle_9,
     9,
     FFTW_FORWARD,
     FFTW_NOTW,
     199,
     0,
     (const int *) 0,
};
