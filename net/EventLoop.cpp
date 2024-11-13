#include "EventLoop.h"

void EventLoop::run()
{
	std::vector<IEventDispatcher*> eventDispatchers;
	while (true) {
		//1. check & process timer event

		//2. call select/poll/epoll to check write&read events from fds
		m_spIOMultiplex->poll(500000, eventDispatchers);


		//3. handle write&read events

		//4. use wakeup fd to process DIY events
	}
}

void EventLoop::registerReadEvent(int fd, bool readEvent)
{
}

void EventLoop::registerWriteEvent(int fd, bool readEvent)
{
}

void EventLoop::unregisterReadEvent(int fd, bool readEvent)
{
}

void EventLoop::unregisterWriteEvent(int fd, bool readEvent)
{
}

void EventLoop::unregisterAllEvent(int fd, bool readEvent)
{
}
