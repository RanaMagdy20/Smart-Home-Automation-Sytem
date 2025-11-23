#include "../include/Device.hpp"

std::string Light::getInfo() const {
    return "This is a Light device.";}
std::string Thermostat::getInfo() const  {
    return "This is a Thermostat device.";}
std::string SecurityCamera::getInfo() const  {
    return "This is a Security Camera device.";}
std::string DoorLock::getInfo() const  {
    return "This is a Door Lock device.";}
std::string motionSensor::getInfo() const  {
    return "This is a Motion Sensor device.";}


std::shared_ptr<Device> BrandAFactory::createDevice(const std::string& type){
    if(type=="Light") return std::make_shared<Light>();
    if(type=="Thermostat") return std::make_shared<Thermostat>();
    if(type=="Securitycamera") return std::make_shared<SecurityCamera>();   
    if(type=="Doorlock") return std::make_shared<DoorLock>();
    if(type=="motionsensor") return std::make_shared<motionSensor>();
    throw std::invalid_argument("Unknown device type for Brand A: " + type);
}





