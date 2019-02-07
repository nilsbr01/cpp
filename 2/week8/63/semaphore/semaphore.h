#ifndef SEMAPHORE_H_
#define SEMAPHORE_H_

#include <mutex>
#include <condition_variable>

class Semaphore
{
	size_t d_available;
	mutable std::mutex d_mutex;
	std::condition_variable d_condition;

	public:
		Semaphore(size_t nAvailable);
		void notify();
		void notify_all();
		void wait();
		size_t size();
};

inline size_t Semaphore::size()
{
	return d_available;
}

#endif