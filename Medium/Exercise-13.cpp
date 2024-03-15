#include <iostream>
#include <ctime>
//Hàm tính số tiền phải trả khi vào nhà nghỉ dựa trên thời gian check in/check out (Tính theo nghìn đồng)
double expense(tm in, tm out) {
    double first2Hours = 70;
    double thirdHourOnwards = 50;
    double overnight = 160;
    double overtimeCharges = 40;

    time_t checkin = mktime(&in);
    time_t checkout = mktime(&out);
    double duration = difftime(checkout, checkin)/3600;

    double cost = 0;
    if (duration < 24) {
        if (duration <= 2) {
            cost += duration * first2Hours;
        } else {
            cost += 2*first2Hours + (duration-2)*thirdHourOnwards;
        }
    } else {
        cost += duration*overnight;
        if (out.tm_hour>8) cost += (out.tm_hour - 8)*overtimeCharges;  
    }
    return cost;
}
