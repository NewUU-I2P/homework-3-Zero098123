#include <string>
#include <sstream>

std::string problemSolution3(float height, char S) {
std::string answer;
if(S == 'M') {
    if (height < 1.70) {
        answer ="Short";
    } else if (height >= 1.70 && height < 1.85) {
        answer = "Normal";
    } else {
        answer ="Tall";
    }
} else if(S=='F'){
    if (height < 1.60) {
        answer ="Short";
    } else if (height >= 1.60 && height < 1.75) {
        answer = "Normal";
    } else  {
        answer ="Tall";
    }
}

    // use return to return your result
    // make use of control flow statements
    return answer;

}