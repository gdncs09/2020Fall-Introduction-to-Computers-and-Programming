#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
          int month,day,year,minMonth=INT_MAX,minDay=INT_MAX,minYear=INT_MAX;
          char tmp;
          while (1)
          {
                    printf("Enter a date (mm/dd/yy): ");
                    scanf("%d%c%d%c%d",&month,&tmp,&day,&tmp,&year); //��J month�Aday�Ayear
                    if (day== 0 || month == 0 || year == 0) break; // 0/0/0

                    if ((year < minYear) || (year == minYear &&month < minMonth) || (year == minYear && month == minMonth && day < minDay)) //�C����J�ˬd year�Amonth�Aday ��e�����N��s
                    {
                              minYear = year;
                              minMonth = month;
                              minDay = day;
                    }
	}
          printf("%d/%d/%02d is the earliest date",minMonth,minDay,minYear);
          return 0;
}
