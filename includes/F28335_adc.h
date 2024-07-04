#ifndef __F28335_ADC_H__
#define __F28335_ADC_H__

#define ADCTRL1         (*((volatile UInt16 *)0x7100))  // ADC control Register 1
#define ADCTRL2         (*((volatile UInt16 *)0x7101))  // ADC control Register 2
#define ADCMAXCONV      (*((volatile UInt16 *)0x7102))  // ADC maximum Conersion Channels Register
#define ADCCHSELSEQ1    (*((volatile UInt16 *)0x7103))  // ADC Sequencing Channel select Register 1
#define ADCCHSELSEQ2    (*((volatile UInt16 *)0x7104))  // ADC Sequencing Channel select Register 2
#define ADCCHSELSEQ3    (*((volatile UInt16 *)0x7105))  // ADC Sequencing Channel select Register 3
#define ADCCHSELSEQ4    (*((volatile UInt16 *)0x7106))  // ADC Sequencing Channel select Register 4
#define ADCASEQSR       (*((volatile UInt16 *)0x7107))  // ADC Auto Sequence Status Register
#define ADCRESULT_0     (*((volatile UInt16 *)0x0B00))  // ADC Conversion Result Register 0 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_1     (*((volatile UInt16 *)0x0B01))  // ADC Conversion Result Register 1 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_2     (*((volatile UInt16 *)0x0B02))  // ADC Conversion Result Register 2 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_3     (*((volatile UInt16 *)0x0B03))  // ADC Conversion Result Register 3 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_4     (*((volatile UInt16 *)0x0B04))  // ADC Conversion Result Register 4 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_5     (*((volatile UInt16 *)0x0B05))  // ADC Conversion Result Register 5 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_6     (*((volatile UInt16 *)0x0B06))  // ADC Conversion Result Register 6 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_7     (*((volatile UInt16 *)0x0B07))  // ADC Conversion Result Register 7 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_8     (*((volatile UInt16 *)0x0B08))  // ADC Conversion Result Register 8 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_9     (*((volatile UInt16 *)0x0B09))  // ADC Conversion Result Register 9 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_10    (*((volatile UInt16 *)0x0B0A))  // ADC Conversion Result Register 10 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_11    (*((volatile UInt16 *)0x0B0B))  // ADC Conversion Result Register 11 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_12    (*((volatile UInt16 *)0x0B0C))  // ADC Conversion Result Register 12 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_13    (*((volatile UInt16 *)0x0B0D))  // ADC Conversion Result Register 13 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_14    (*((volatile UInt16 *)0x0B0E))  // ADC Conversion Result Register 14 - No wait and Right Justified for Fast Conversion Result
#define ADCRESULT_15    (*((volatile UInt16 *)0x0B0F))  // ADC Conversion Result Register 15 - No wait and Right Justified for Fast Conversion Result
#define ADCTRL3         (*((volatile UInt16 *)0x7118))  // ADC control Register 3
#define ADCST           (*((volatile UInt16 *)0x7119))  // ADC Status Register
#define ADCREFSEL       (*((volatile UInt16 *)0x711C))  // ADC Refernce Select Register
#define ADCOFFTRIM      (*((volatile UInt16 *)0x711D))  // ADC Offset trim Register

#endif