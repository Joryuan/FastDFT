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

// dataR[]��Ҫ�������е�ʵ�������������� 
// dataI[]��Ҫ�������е����������������� 
// dataA[]:FFT/IFFT�任��ķ�ֵ����
// N������Ҫ�������еĸ�����N=2^M��
// M: M=log2(N)
void FFT(float dataR[],float dataI[],float dataA[],int N,int M);   // ����FFT���ټ��� 
void IFFT(float dataR[],float dataI[],float dataA[],int N,int M);  // ����IFFT���ټ��� 
void FFTR(float dataR[],float dataI[],float dataA[],int N,int M);  // ʵ��FFT���ټ��� 
void IFFTR(float dataR[],float dataI[],float dataA[],int N,int M); // ʵ��IFFT���ټ���

#define PI 3.1415926535

#endif/* FFT_MATH_H */
