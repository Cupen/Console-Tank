///////////////////////////////////////////////////////////////
// �ˡ������������������
//
//
//
//
//
//
//
//���~�}�|�{�z�y�x������������廓���������̡��d�e������ ����贈�����������q �q�ɨr(����)�q�ɨr
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pcc32.h"

#define gotoLocation(x,y) gotoTextPos(x*2,y);
// #define drawString(x,y,color,string) gotoLocation(x,y); setTextColor(color); printf("%s",string);


static char BLOCK[ ][3]={"  ","��","��","��","��","�q ","�r","�t","�s"};

void drawString(int x,int y,PCCOLOR color,char* str)
{
	gotoLocation(x,y);
	setTextColor(color);
	printf("%s",str);
}

void drawBlock(int x,int y,PCCOLOR color, int blockIndex )
{
	// drawString(x,y,color,BLOCK[blockIndex]);
	gotoLocation(x,y);
	setTextColor(color);
	printf("%2s",BLOCK[blockIndex]);
}

void drawRectangle(int x,int y, int width, int height)
{
	return;
}

