#include <stdio.h>

float getNormalDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 1.25 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getRestDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 1.69 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getSpecialNonWorkingDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 1.69 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getSpecialNonWorkingAndRestDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 1.95 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getRegularHoliDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 2.60 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getRegularHolidayAndRestDayNonNightShiftOT(float BaseSalary, int OutTime, int InTime)
{
	return (BaseSalary / 8 * 3.38 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary;
}
float getNormalDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 1.25 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary + NightShiftHours * (BaseSalary / 8 * 1.375);
}
float getRestlDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 1.69 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary + NightShiftHours * (BaseSalary / 8 * 1.859);
}
float getSpecialNonWorkingDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 1.69 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary + NightShiftHours * (BaseSalary / 8 * 1.859);
}
float getSpecialNonWorkingAndRestDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 1.95 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary + NightShiftHours * (BaseSalary / 8 * 2.145);
}
float getRegularHoliDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 2.60 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary + NightShiftHours * (BaseSalary / 8 * 2.86);
}
float getRegularHoldayAndRestDayNightShiftOT(float BaseSalary, int OutTime, int InTime, int NightShiftHours)
{
	return (BaseSalary / 8 * 3.38 * ((OutTime - InTime - 800.0 ) / 100.0) ) + BaseSalary+ NightShiftHours * (BaseSalary / 8 * 3.718);
}
float getRestDayNonOT(float BaseSalary, int MaxHours, float NightHours)
{
	return BaseSalary * 1.30 + BaseSalary;
}
float getSpecialNonWorkingDayNonOT(float BaseSalary, int MaxHours, float NightHours)
{
	return BaseSalary * 1.30 + BaseSalary / MaxHours  * NightHours * 1.10;
}
float getSpecialNonWorkingandRestDayNonOT(float BaseSalary, int MaxHours, float NightHours)
{
	return BaseSalary * 1.50 + BaseSalary / MaxHours  * NightHours * 1.10 ;
}
float getRegularHolidayNonOT(float BaseSalary, int MaxHours, float NightHours)
{
	return BaseSalary * 2 + BaseSalary / MaxHours  * NightHours * 1.10;
}
float getRegularHolidayAndRestDayNonOT(float BaseSalary, int MaxHours, float NightHours)
{
	return BaseSalary * 2.60 + BaseSalary / MaxHours  * NightHours * 1.10;
}
float getRegularDay(float BaseSalary,int MaxHours, float NightHours)
{
	return BaseSalary + BaseSalary / MaxHours * 1.10 * NightHours;
}

int main()
{
	int nNum;
	int nNum2;
	int nNum3, nInTime, nOutTime, nTimeDiff, nNum4, nNum5, nOvertimeHours, nNightShiftHours, nNum6, nOutTime1, nNum7, nMaxHours, nNightHours, nMaxHours1;
	float fBaseSalary;
	int nLoop = 1; 
	while(nLoop=1)
	{
	
	printf("\n1-Regular Weekly Salary Computation \n2-Cutomized Salary Computation \n3 -Exit \n\nEnter number: ");
	scanf("%d",&nNum);
	
	switch(nNum)
	{
		case 1:
			printf("\nYou have selected Regular Salary Computation!\nDetails:\nDaily Rate:500\nDay Type:Normal\nIn Time:900\nOut Time:900\nNumber of Work Days:5\nWeekly Salary:2500");
			break;
		case 2:
			printf("\nYou have selected Cutomized Salary Computation!\n\nPlease enter number to choose corresponding details:");
			printf("\n\nType of Day:\n1-Overtime \n2-Regular Work hours\n\nPlease select number: ");
			scanf("%d", &nNum2);
			printf("Base Salary:");
			scanf("%f", &fBaseSalary);
			printf("Maximum Regular Hours:");
			scanf("%d", &nMaxHours);
			nMaxHours1 = nMaxHours + 1;
			printf("IN time:");
			scanf("%d", &nInTime);
			printf("OUT time:");
			scanf("%d", &nOutTime);
			if(nOutTime >= 0 && nOutTime <= 900 && nInTime > nOutTime)
				nOutTime1 = nOutTime + 2400;
			else if(!(nOutTime >= 0 && nOutTime <= 900 && nInTime > nOutTime))
				nOutTime1 = nOutTime;
			nTimeDiff = (nOutTime1 - nInTime) / 100;
			switch(nNum2)
			{
				case 1:
					if(nTimeDiff > nMaxHours1)
					{	printf("\n1-Non-night shift overtime\n2-Night shift overtime\nPlease select number:");
						scanf("%d",&nNum3);
							switch(nNum3)
							{
								case 1:
									if(nInTime <= 600 || nInTime >= 2200 || nOutTime <= 600 || nOutTime >=2200)
									{
									printf("There is work done in Night Shift, Non-night shift overtime computation is invalid\n"); 
									break;
									} 
									else if(!(nInTime <= 600 || nInTime >= 2200 || nOutTime <= 600 || nOutTime >=2200)) 
									{
									printf("You have selected Non-Night shift overtime!\n");
									printf("1-Normal Day\n2-Rest Day\n3-Special Non-Working Day\n4-Special Non-Working Day and Rest Day\n5-Regular Holiday\n6-Regular Holiday and Rest Day\nSelect Number:");
									scanf("%d", &nNum4);
									switch(nNum4)
									{
										case 1:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours =nTimeDiff - nMaxHours;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Normal Day with Overtime\n");
											printf("Salary of the Day                   |%f", getNormalDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));
											break;
										case 2:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours = nTimeDiff - nMaxHours;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Rest Day with Overtime\n");
											printf("Salary of the Day                   |%f", getRestDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));
											break;
										case 3:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours = nTimeDiff - nMaxHours ;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Special Non-Working Holiday with Overtime\n");
											printf("Salary of the Day                   |%f", getSpecialNonWorkingDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));
											break;
										case 4:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours =  nTimeDiff - nMaxHours;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Special Non-Working and Rest Day with Overtime\n");
											printf("Salary of the Day                   |%f", getSpecialNonWorkingAndRestDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));
											break;
										case 5:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours =  nTimeDiff - nMaxHours;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Regular Holiday with Overtime\n");
											printf("Salary of the Day                   |%f", getRegularHoliDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));
											break;
										case 6:
											printf("Base Salary   	                    | %f\n", fBaseSalary);
											nOvertimeHours =  nTimeDiff - nMaxHours;
											printf("Overtime Hours(Night Shift OT Hours)| %d(0)\n", nOvertimeHours);
											printf("IN Time      			 | %04d\n", nInTime);
											printf("OUT Time     			 | %d\n", nOutTime);
											printf("Day Type                            |Regular Holiday and Rest Day with Overtime\n");
											printf("Salary of the Day                   |%f",  getRegularHolidayAndRestDayNonNightShiftOT(fBaseSalary, nOutTime1, nInTime));	
											break;
										}
										break;
							}
							case 2:
								if(nInTime >= 2200 || nInTime <=0600 || nOutTime >= 2200 || nOutTime <= 600 && nTimeDiff > 800)
								{printf("You have selected Night-Shift Overtime!\n");
									printf("1-Normal Day\n2-Rest Day\n3-Special Non-Working Day\n4-Special Non-Working Day and Rest Day\n5-Regular Holiday\n6-Regular Holiday and Rest Day\nSelect Number:");
									scanf("%d", &nNum5);
									nNum5:
									switch(nNum5)
								{
									case 1:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										nOvertimeHours =  nTimeDiff - nMaxHours;
									    if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
	  									printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Normal Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getNormalDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));
										break;
									case 2:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										
										nOvertimeHours =  nTimeDiff - nMaxHours;
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
										printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Rest Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getRestlDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));
										break;
									case 3:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										
										nOvertimeHours =  nTimeDiff - nMaxHours / 100;
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
										printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Specia Non-Working Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getSpecialNonWorkingDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));
										break;
									case 4:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										
										nOvertimeHours =  nTimeDiff - nMaxHours / 100;
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
										printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Normal Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getSpecialNonWorkingAndRestDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));	
										break;
									case 5:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										nOvertimeHours =  nTimeDiff - nMaxHours;
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
										printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Normal Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getRegularHoliDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));		
										break;
									case 6:
										printf("Base Salary   	                    | %f\n", fBaseSalary);
										if(nOutTime == 2300)
										{
										nNightShiftHours = (2300 - 2200) / 100;
										}
										else if(nOutTime >= 0000 || nOutTime <= 600)
										{
										nNightShiftHours = (nOutTime - 600 + 800) /100;
										}
										nOvertimeHours =  nTimeDiff - nMaxHours;
										printf("Overtime Hours(Night Shift OT Hours)| %d(%d)\n", nOvertimeHours, nNightShiftHours);
										printf("IN Time      			 | %04d\n", nInTime);
										printf("OUT Time     			 | %d\n", nOutTime);
										printf("Day Type                            |Normal Day with Night Shift Overtime\n");
										printf("Salary of the Day                   |%f", getRegularHoldayAndRestDayNightShiftOT(fBaseSalary, nOutTime1, nInTime, nNightShiftHours));
										break;			
								}
								break;
								}
								else if(!(nInTime >= 2200 || nInTime <=0600 || nOutTime >= 2200 || nOutTime <= 600))
								{
								printf("Work done is not in Night Shift. Night Shift salary computation is invalid.");
								break;
								}
					}			
						}
						else if(nTimeDiff <= nMaxHours1)
						{
						printf("Work hours did not exceed Maximum Regular Hours. Overtime computation invalid.");
						break; 
						}	
			break;
			case 2:
				if(nTimeDiff == nMaxHours1)
				{
				printf("You have selected regular work hours:\n");
				if(nOutTime == 2300)
				{
				nNightHours = (2300 - 2200) / 100;
				}
				else if(nOutTime >= 0000 && nOutTime <= 600)
				{
				nNightHours = (nOutTime - 600 + 800) /100;
				}
				else if(!(nOutTime >= 0000 && nOutTime <= 600 || nOutTime == 2300 ))
				{
				nNightHours == 0;
				}
				printf("Base Salary   	                    | %f\n", fBaseSalary);
				printf("Hours Worked(Night Shift  Hours)| %d(%d)\n", nMaxHours, nNightHours);
				printf("IN Time      			 | %04d\n", nInTime);
				printf("OUT Time     			 | %d\n", nOutTime);
				printf("Day Type                            |Regular Day\n");
				printf("Salary of the Day                   |%f", getRegularDay(fBaseSalary, nMaxHours, nNightHours));						
				}
				else if(!(nTimeDiff==nMaxHours1))
				{
				printf("Work time exceeded Maximum Regular Hours. Regular hour salary computation invalid.");
				}	
				}
			}
		
			}
return 0;
}
