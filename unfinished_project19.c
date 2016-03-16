#Count the number of sundays in the 20th century. Iterates through
# days of the year, where:
#     day.DoW= day of week, where Mon == 1, Tues == 2 ... Sun == 7

class ADate:
    def __init__(self,day,month,year,DoW):
        self.day=day
        self.month=month
        self.year=year
        self.DoW=DoW

#A list of days in each month, for a non-leap year. Holder in 0 pos.
day_list=[0,31,28,31,30,31,30,31,31,30,31,30,31]
#A list of days in each month for a leap year
day_list_LY=[0,31,29,31,30,31,30,31,31,30,31,30,31]

#Date starts at Jan. 1st, 1991... a Tuesday
date=ADate(1,1,1901,2)

#initialize the number of sundays at 0
num_sundays=0

def ProgressDay(date,month_list):
    next_day=date
    days_in_current_month = month_list[next_day.month]
    if next_day.day == days_in_current_month:
        return ProgressMonth(next_day)
    else:
        next_day.day+=1 #add one to day
        return next_day

def ProgressMonth(date):
    if date.month == 12: #if it is Dec, change year
        return ProgressYear(date)
    else:
        next_day=date
        next_day.day=1 #reset number of days
        next_day.month+=1 #progress to next month
        return next_day

def ProgressYear(date):
    if date.year != 2000:
        next_day=date
        next_day.day=1
        next_day.month=1
        next_day.year+=1
        return next_day
    else:
        print "Total number of sundays: ", num_sundays
        quit()      

def SundayCounter(date,num_sundays):
    next_day=date
    if next_day.DoW == 7:
        if next_day.day == 1:
            num_sundays+=1
        next_day.DoW = 1
    else:
        next_day.DoW+=1
    return next_day,num_sundays

while True:
#if not on a leap year, use month list where Feb. has 28 days
#the year must not be div. by 4, or must be div by 100 but not 400
    if date.year%4!=0 or (date.year%100==0 and date.year%400!=0): 
        date,num_sundays=SundayCounter(date,num_sundays)
        date=ProgressDay(date,day_list)
#else, use the leap year list
    else:
        date,num_sundays=SundayCounter(date,num_sundays)
        date=ProgressDay(date,day_list_LY)
    print date.day,date.month,date.year

