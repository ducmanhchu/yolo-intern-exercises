#include <iostream> 
#include <string>
//Ham ho tro viec chuyen doi cac so hang tram ti, hang chuc ti, tram trieu, chuc trieu...
std::string convert(int t, std::string lessThan20[], std::string dozens[]) {
    std::string result = "";
    if (t>=100) {
        int t2 = t/100;
        result += lessThan20[t2] + " tram ";
        t%=100;
    }
    if (t>=20) {
        int t3 = t/10;
        result += dozens[t3-2] + " ";
        t%=10;
    }
    if (t>0) {
        result += lessThan20[t] + " ";
    }
    return result;
}
//Ham chuyen doi so tien sang chu voi gian han so tien do <= 1e12
std::string currency(long long n) {
    std::string lessThan20[20] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin", "muoi",
                                "muoi mot", "muoi hai", "muoi ba", "muoi bon", "muoi lam", "muoi sau", "muoi bay", "muoi tam", "muoi chin"};
    std::string dozens[8] = {"hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    std::string result = "";
    if (n<20) return lessThan20[n];
    if (n>=1e12) {
        int t = n/1e12;
        result += convert(t, lessThan20, dozens);
        n %= (long long)1e12; 
        if (n<1e9) result += "ti ";
        if (n<10) result += "le ";
    }
    if (n>=1e9) {
        int t = n/1e9;
        result += convert(t, lessThan20, dozens) + "ti ";
        n %= (long long)1e9;
        if (n<10) result += "le ";
    }
    if (n>=1e6) {
        int t = n/1e6;
        result += convert(t, lessThan20, dozens) + "trieu ";
        n %= (long)1e6;
        if (n<10) result += "le ";
    }
    if (n>=1000) {
        int t = n/1000;
        result += convert(t, lessThan20, dozens) + "nghin ";
        n %= 1000;
        if (n/100==0) {
            int t = n/100;
            result += lessThan20[t] + " tram ";
        }
        if (n<10) result += "le ";
    }
    if (n>=100) {
        int t = n/100;
        result += lessThan20[t] + " tram ";
        n %= 100;
        if (n<10) result += "le ";
    }
    if (n>=20) {
        int t = n/10;
        result += dozens[t-2] + " ";
        n %= 10;
        if (n==5) {
            result += "lam";
            return result;
        }
    }
    if (n>0) {
        result += lessThan20[n];
    }
    return result;
}
