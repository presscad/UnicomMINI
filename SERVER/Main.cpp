/**********************************************************************

*文件名：
		Main.cpp
*文件描述：
		main函数
*创建者：
		黄彬

*创建时间：
2011-8-4

******************************************************************/

#include <unistd.h>
#include "Service.h"

int main()
{
	
	SERVICE_forward_init();

	SERVICE_main();

	return 0;
}
