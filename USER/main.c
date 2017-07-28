#include "sys.h"
#include "delay.h"
#include "usart.h"

/************************************************
 实验0：ALIENTEK STM32F103开发板工程模板
 注意，这是手册中的调试章节使用的main文件
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/
int flag = 0;
int rec[10];
int RECcount;
int main(void)
{		
 	u8 t=0;
	 int i;
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
	delay_init();	    	 //延时函数初始化	  
	uart_init(115200);	 //串口初始化为115200
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
