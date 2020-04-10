/*File Name   : case2.cc
Creator Name  : Rajya lakshmi
creation Date : 8-4-2020
Aim           : To Find the sum of squares of integers
*/

#include<stdio.h>
int main(int argc, char* argv[])
{
	if(argc>=2)
	{
		printf("sum of squares of integers");
	}
	else
	{
	int iNum,iCount=1,iSum=0;  //declaring the variablles
	printf("enter the number");
	scanf("%d",&iNum);
	while(iCount<=iNum)        // checking condition
	{
		printf("%d+",(iCount*iCount));// output formate
		iCount++;
}
for(iCount=1;iCount<=iNum;iCount++)
 iSum+=iCount*iCount;
	printf("result=%d",iSum);

	return 0;
}}
