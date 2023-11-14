#include <string>
#include <sstream>

std::string problemSolution4(const std::string & macAddress) {
    std::string answwer;
    if(macAddress=="FF:FF:FF:FF:FF:FF"){
        answwer="Broadcast";
    }else if(macAddress[1]%2==0){
        answwer="Unicast";
    }else if(macAddress[1]%2!=0){
        answwer="Multicast";
    }
    return answwer;


}
