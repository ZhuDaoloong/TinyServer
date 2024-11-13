/**
* zhudaoloong 2024.11.13
*/
#pragma once
#include <memory>

#include "IIOMultiplex.h"

class EventLoop final{
public:
	EventLoop() = default;
	~EventLoop() = default;

	void run();

	void registerReadEvent(int fd, bool readEvent);
	void registerWriteEvent(int fd, bool readEvent);
	void unregisterReadEvent(int fd, bool readEvent);
	void unregisterWriteEvent(int fd, bool readEvent);
	void unregisterAllEvent(int fd, bool readEvent);


private:
	EventLoop(const EventLoop& rhs) = delete;
	EventLoop& operator=(const EventLoop& rhs) = delete;

	EventLoop(EventLoop&& rhs) = delete;
	EventLoop& operator=(EventLoop&& rhs) = delete;

private:
	std::shared_ptr<IIOMultiplex>	m_spIOMultiplex;
};