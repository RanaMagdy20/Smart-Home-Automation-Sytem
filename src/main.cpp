#include "../include/Device.hpp"
int main() {
    std::shared_ptr<DeviceFactory> brandAFactory=std::make_shared<BrandAFactory>();
    std::shared_ptr<Device> light=brandAFactory->createDevice("Light");
    std::cout<<light->getInfo()<<std::endl;
    std::shared_ptr<Device> thermostat=brandAFactory->createDevice("Thermostat");
    std::cout<<thermostat->getInfo()<<std::endl;
    std::shared_ptr<Device> camera=brandAFactory->createDevice("Securitycamera");
    std::cout<<camera->getInfo()<<std::endl;
    std::shared_ptr<Device> doorlock=brandAFactory->createDevice("Doorlock");
    std::cout<<doorlock->getInfo()<<std::endl;
    std::shared_ptr<Device> motionsensor=brandAFactory->createDevice("motionsensor");
    std::cout<<motionsensor->getInfo()<<std::endl;
    

    return 0;
}