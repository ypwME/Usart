#include "sys.h"
#include "delay.h"
#include "usart.h"

/************************************************
 ʵ��0��ALIENTEK STM32F103�����幤��ģ��
 ע�⣬�����ֲ��еĵ����½�ʹ�õ�main�ļ�
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/
int flag = 0;
int rec[10];
int RECcount;
int main(void)
{		
 	u8 t=0;
	 int i;
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�����ж����ȼ�����Ϊ��2��2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	delay_init();	    	 //��ʱ������ʼ��	  
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
  uart2_init(115200);
	 while(1)
	{
		printf("enter into while\r\n");
		delay_ms(200);
		if(flag==1){
			flag=0;
			for(i=0;i<RECcount;i++)
			{printf("receive data[%d]=0x%x\r\n",i,rec[i]);}	}	
	} 
}
