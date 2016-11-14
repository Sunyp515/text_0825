#include <stdio.h>
#include <mxml.h>

int main()
{
	//以写的方式创建个xml文件
	FILE *fp = fopen("01new_myxml.xml","w");

	//写文件头--给个版本号1.0
	mxml_node_t * xml = mxmlNewXML("1.0");

	//添加头结点



	return 0;
}
