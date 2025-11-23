#ifndef DEVICE_HPP
#define DEVICE_HPP
#include <string>
#include <iostream>
#include <memory>
class Device {
    private: 
        std::string id;
        std::string name;
    public:
        virtual std::string getInfo() const = 0;
        virtual ~Device() = default;};
class Light : public Device {
    public:
        std::string getInfo() const override;};
class Thermostat : public Device {
    public:
        std::string getInfo() const override;};
class SecurityCamera : public Device {
    public:
        std::string getInfo() const override ;};
class DoorLock : public Device {
    public:
        std::string getInfo() const override ;};
class motionSensor : public Device {
    public:
        std::string getInfo() const override;};
// Abstract Factory
class DeviceFactory {
    public:
        virtual std::shared_ptr<Device> createDevice(const std::string& type) =0;
        virtual ~DeviceFactory() = default;};
class BrandAFactory : public DeviceFactory {
    public:
        std::shared_ptr<Device> createDevice(const std::string& type) override ;};

#endif 