# include<stdio.h>
void main()
{
float r,c,s;
printf("请输入圆的半径： ");
scanf("%f",&r);    /*用于输入一个浮点数据存放于地址&r*/
c=2*3.1415926*r;  /*计算周长，赋值给C*/
s=3.1415926*r*r;   /*用于计算面积*/
printf("周长c=%8.4f；\n面积s=%8.4f\n",c,s);   /*周长，面积都是8个字符宽，4位小数*/
}