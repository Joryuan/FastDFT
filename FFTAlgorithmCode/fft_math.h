/** -------------------------------------------------------------------------------
  *
  * @File:          fft_math.h
  * \n
  * @TITLE:         fft_math.c header file
  * \n
  * @Author:        Reprint from https://zhuanlan.zhihu.com/p/135259438
  * \n
  * @Description:   Fast Discrete Fourier Transform
  * \n
  * Release Date:   Tue July. 1 15:21:43 2023 $
  * \n
  * History:
  *                 1. Date:       Author:
  *                 Modification:
  *                 2. Date:       Author:
  *                 Modification:
--------------------------------------------------------------------------------*/

#ifndef FFT_MATH_H
#define FFT_MATH_H

// dataR[]：要计算序列的实数部分序列数组 
// dataI[]：要计算序列的虚数部分序列数组 
// dataA[]:FFT/IFFT变换后的幅值数组
// N；输入要计算序列的个数（N=2^M）
// M: M=log2(N)
void FFT(float dataR[],float dataI[],float dataA[],int N,int M);   // 复数FFT快速计算 
void IFFT(float dataR[],float dataI[],float dataA[],int N,int M);  // 复数IFFT快速计算 
void FFTR(float dataR[],float dataI[],float dataA[],int N,int M);  // 实数FFT快速计算 
void IFFTR(float dataR[],float dataI[],float dataA[],int N,int M); // 实数IFFT快速计算

#define PI 3.1415926535

#endif/* FFT_MATH_H */
