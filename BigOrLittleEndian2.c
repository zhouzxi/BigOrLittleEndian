/**********************************************************************
* 版权所有 (C)2015, Zhou Zhaoxiong。
*
* 文件名称：BigOrLittleEndian2.c
* 文件标识：无
* 内容摘要：测试系统是大端模式还是小端模式
* 其它说明：无
* 当前版本：V1.0
* 作    者：Zhou Zhaoxiong
* 完成日期：20151109
*
**********************************************************************/
#include <stdio.h>

// 重定义数据类型
typedef signed   char     INT8;
typedef signed   int      INT32;
typedef signed short int  INT16;

// 函数声明
void CheckCPUEndian();


/**********************************************************************
* 功能描述：主函数
* 输入参数：无
* 输出参数：无
* 返 回 值：无
* 其它说明：无
* 修改日期        版本号      修改人              修改内容
* ---------------------------------------------------------------
* 20151109        V1.0     Zhou Zhaoxiong          创建
***********************************************************************/
INT32 main()
{
    CheckCPUEndian();
    
    return 0; 
}


/**********************************************************************
* 功能描述：验证系统的大小端模式
* 输入参数：无
* 输出参数：无
* 返 回 值：无
* 其它说明：无
* 修改日期        版本号      修改人              修改内容
* ---------------------------------------------------------------
* 20151109        V1.0     Zhou Zhaoxiong          创建
***********************************************************************/
void CheckCPUEndian()
{
    INT16 iInteger = 0;
    INT8  chTest0, chTest1;
	
    iInteger = 0x1122;
    chTest0  = ((INT8 *)&iInteger)[0];         // 低地址单元
    chTest1  = ((INT8 *)&iInteger)[1];         // 高地址单元
    
	  printf("系统是%s!\n", (0x11 == chTest1) ? "小端模式" : "大端模式");
}

